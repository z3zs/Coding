from tkinter import *
from tkinter import ttk
from tkcalendar import *
from dateutil.relativedelta import relativedelta
from datetime import datetime

janela = Tk()
janela.title("Calculadora de Idade")
janela.geometry ("310x400")

#   COR
cor1= "#353634" #CINZA
cor2 ="#282928" #PRETA
cor3 = "#f5faf5" #BRANCA

#   FRAME
upper_frame = Frame(janela, width=310, height=140, pady=0, padx=0, relief=FLAT, bg=cor2)
upper_frame.grid(row=0, column=0)

lower_frame = Frame(janela, width=310, height=280, pady=0, padx=0, relief=FLAT, bg=cor1)
lower_frame.grid(row=1, column=0)

#   CHECKBOX
box1 = DateEntry(lower_frame, width=13, bg=cor1, fg=cor3, borderwidth=2, date_pattern= "dd/mm/yy")
box1.place (x=170, y=30)

box2 = DateEntry(lower_frame, width=13, bg=cor1, fg=cor3, borderwidth=2, date_pattern= "dd/mm/yy")
box2.place (x=170, y=60)

#   FUNÇÃO
def calcular():
    inicial = datetime.strptime(box1.get(), "%d/%m/%y").date()
    termino = datetime.strptime(box2.get(), "%d/%m/%y").date()

    diferenca = relativedelta(termino, inicial)
    anos = abs(diferenca.years)
    meses = abs(diferenca.months)
    dias = abs(diferenca.days)

    label_anum.config(text=str(anos))
    label_mnum.config(text=str(meses))
    label_dnum.config(text=str(dias))

#   LABEL
label_calc = Label(upper_frame, text="Calculadora de Idade", width=25, height=1, padx=4, relief=FLAT, anchor=CENTER, font= "Ivy 15 bold", bg= cor2, fg = cor3)
label_calc.place (x=0, y=50)

label_datainicial = Label(lower_frame, text="Data Inicial:", height=1, padx=0, pady = 0, relief=FLAT, anchor=NW, font= "Ivy 15 bold", bg= cor1, fg = cor3)
label_datainicial.place (x=50, y=30)

label_datanasc = Label(lower_frame, text="Nascimento: ", height=1, padx=0, pady = 0, relief=FLAT, anchor=NW, font= "Ivy 15 bold", bg= cor1, fg = cor3)
label_datanasc.place (x=50, y=60)

label_anum = Label(lower_frame, text="0", height=1, padx=0, pady = 0, relief=FLAT, anchor=CENTER, font= "Ivy 15 bold", bg= cor1, fg = cor3)
label_anum.place (x=60, y=135)

label_anos = Label(lower_frame, text="Anos", height=1, padx=0, pady = 0, relief=FLAT, anchor=CENTER, font= "Ivy 15 bold", bg= cor1, fg = cor3)
label_anos.place (x=50, y=155)

label_mnum = Label(lower_frame, text="0", height=1, padx=0, pady = 0, relief=FLAT, anchor=CENTER, font= "Ivy 15 bold", bg= cor1, fg = cor3)
label_mnum.place (x=140, y=135)

label_meses = Label(lower_frame, text="Meses", height=1, padx=0, pady = 0, relief=FLAT, anchor=CENTER, font= "Ivy 15 bold", bg= cor1, fg = cor3)
label_meses.place (x=120, y=155)

label_dnum = Label(lower_frame, text="0", height=1, padx=0, pady = 0, relief=FLAT, anchor=CENTER, font= "Ivy 15 bold", bg= cor1, fg = cor3)
label_dnum.place (x=220, y=135)

label_dias = Label(lower_frame, text="Dias", height=1, padx=0, pady = 0, relief=FLAT, anchor=CENTER, font= "Ivy 15 bold", bg= cor1, fg = cor3)
label_dias.place (x=200, y=155)

#   BOTÃO

botão_calc = Button(lower_frame, command= calcular, text= "CALCULAR", height=1, padx=0, pady = 0, overrelief= 'ridge', relief=FLAT, anchor=CENTER, font= "Ivy 15 bold", bg= cor2, fg = cor3)
botão_calc.place (x=100, y=220)

janela.mainloop()