from flask import Flask, make_response, jsonify, request
from bd import Carros


app = Flask(__name__)


@app.route('/carros', methods=['GET'])
def getCarros():
    return make_response (jsonify(message="Lista de Carros", data= Carros))




@app.route('/carros', methods=['POST'])
def create_carro():
    carro = request.json
    Carros.append(carro)
    return make_response(jsonify(message= "Carro registrado com sucesso.", carro=carro))

app.run()