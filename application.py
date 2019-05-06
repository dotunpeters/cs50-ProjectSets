from flask import Flask
from cs50 import get_int
from time import sleep
app = Flask(__name__)

@app.route('/')
def hello_world():
    return 'Hello, World!'

@app.route('/sample')
def sample():
    i = 2
    while True:
        i = i*2
        sleep(1)
        return i