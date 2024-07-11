from tkinter import *
from tkinter import ttk

#CORES

cor1 = "#0d0c0c" #PRETA
cor2 = "#a19d9d" #CINZA
cor3 = "#fc8803" #LARANJA
cor4 = "#fafafa" #BRANCO
#JANELAS

janela = Tk()
janela.title ("Calculadora")
janela.geometry("235x250")
janela.config(bg=cor1)

#FRAMES

frame_tela = Frame(janela, width=235, height=50, bg = cor2)
frame_tela.grid(row=0, column=0)

frame_corpo = Frame(janela, width=235, height=268, bg = cor1)
frame_corpo.grid(row=1, column=0)

#LABEL

valor_texto = StringVar()
app_label = Label(frame_tela, textvariable=valor_texto, width=20, height=3, padx=7, relief=FLAT, anchor='e', justify=RIGHT, font = "Helvetica 13 bold", bg=cor2)
app_label.place (x=0, y=0)

#VARIAVEL

todos_valores = ""

#FUNÇÕES

def entrar_valores(event):
    
    global todos_valores
    todos_valores = todos_valores + str(event)
    valor_texto.set(todos_valores)

def calcular():
    
    global todos_valores
    resultado = eval(todos_valores)
    valor_texto.set(str(resultado))

def limpar_tela():
    
    global todos_valores
    todos_valores = ""
    valor_texto.set("")

#BOTÕES

b1 = Button(frame_corpo, command= limpar_tela, text = "C", width=16, height=2, bg= cor4, font = "Helvetica 9 bold")
b1.place(x=0, y=0)

b2 = Button(frame_corpo, command= lambda: entrar_valores("%"), text = "%", width=7, height=2, bg=cor4, font = "Helvetica 9 bold")
b2.place(x=118, y=0)

b3 = Button(frame_corpo, command= lambda: entrar_valores("/"), text = "/", width=7, height=2, bg=cor4, font = "Helvetica 9 bold")
b3.place(x= 177, y=0)

b4 = Button(frame_corpo, command= lambda: entrar_valores("7"), text = "7", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b4.place(x= 0, y=40)

b5 = Button(frame_corpo, command= lambda: entrar_valores("8"), text = "8", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b5.place(x= 59, y=40)

b6 = Button(frame_corpo, command= lambda: entrar_valores("9"), text = "9", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b6.place(x= 118, y=40)

b7 = Button(frame_corpo, command= lambda: entrar_valores("*"), text = "*", width=7, height=2, bg=cor4, font = "Helvetica 9 bold")
b7.place(x= 177, y=40)

b8 = Button(frame_corpo, command= lambda: entrar_valores("4"), text = "4", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b8.place(x= 0, y=80)

b9 = Button(frame_corpo, command= lambda: entrar_valores("5"), text = "5", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b9.place(x= 59, y=80)

b10= Button(frame_corpo, command= lambda: entrar_valores("6"), text = "6", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b10.place(x= 118, y=80)

b11= Button(frame_corpo, command= lambda: entrar_valores("-"), text = "-", width=7, height=2, bg=cor4, font = "Helvetica 9 bold")
b11.place(x= 177, y=80)

b12 = Button(frame_corpo, command= lambda: entrar_valores("1"), text = "1", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b12.place(x= 0, y=120)

b13 = Button(frame_corpo, command= lambda: entrar_valores("2"), text = "2", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b13.place(x= 59, y=120)

b14 = Button(frame_corpo, command= lambda: entrar_valores("3"), text = "3", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b14.place(x= 118, y=120)

b15 = Button(frame_corpo, command= lambda: entrar_valores("+"), text = "+", width=7, height=2, bg=cor4, font = "Helvetica 9 bold")
b15.place(x= 177, y=120)

b16 = Button(frame_corpo, command= lambda: entrar_valores("0"), text = "0", width=16, height=2, bg=cor3, font = "Helvetica 9 bold")
b16.place(x= 0, y=160)

b17 = Button(frame_corpo, command= lambda: entrar_valores("."), text = ".", width=7, height=2, bg=cor3, font = "Helvetica 9 bold")
b17.place(x= 118, y=160)

b18 = Button(frame_corpo, command= calcular, text = "=", width=7, height=2, bg=cor4, font = "Helvetica 9 bold")
b18.place(x= 177, y=160)

janela.mainloop()