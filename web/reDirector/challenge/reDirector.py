# Flag : jctf{y0u_l1kEmY-Redir3CTs}
# How to solve: F12 on Network Inspector and Persist Logs
from flask import Flask, redirect

### Setting up the Flask App, Login Manager, and Database
app = Flask(__name__)

# Routing
@app.route('/')
def home():
    return redirect('/j')

@app.route('/j')
def j():
    return redirect('/c')

@app.route('/c')
def c():
    return redirect('/t') 

@app.route('/t')
def t():
    return redirect('/f')

@app.route('/f')
def f():
    return redirect('/{') 

@app.route('/{')
def open():
    return redirect('/y')

@app.route('/y')
def y():
    return redirect('/0') 

@app.route('/0')
def _0():
    return redirect('/u')

@app.route('/u')
def u():
    return redirect('/_') 

@app.route('/_')
def _():
    return redirect('/l')

@app.route('/l')
def l():
    return redirect('/1') 

@app.route('/1')
def _1():
    return redirect('/k')

@app.route('/k')
def k():
    return redirect('/E') 

@app.route('/E')
def E():
    return redirect('/m')

@app.route('/m')
def m():
    return redirect('/Y') 

@app.route('/Y')
def Y():
    return redirect('/-')

@app.route('/-')
def dash():
    return redirect('/R') 

@app.route('/R')
def R():
    return redirect('/e')

@app.route('/e')
def e():
    return redirect('/d') 

@app.route('/d')
def d():
    return redirect('/i')

@app.route('/i')
def i():
    return redirect('/r') 

@app.route('/r')
def r():
    return redirect('/3')

@app.route('/3')
def _3():
    return redirect('/C') 

@app.route('/C')
def C():
    return redirect('/T')

@app.route('/T')
def T():
    return redirect('/s') 

@app.route('/s')
def s():
    return redirect('/}')

@app.route('/}')
def close():
    return redirect('/')


if __name__ == '__main__':
    app.run(debug=True,host='0.0.0.0')


"""
istr = "jctf{y0u_l1kEmY-Redir3CTs}"


def fill(one, two, three):
    print(f"
@app.route('/{one}')
def {one}():
    return redirect('/{two}')

@app.route('/{two}')
def {two}():
    return redirect('/{three}') ")


for i in range(0,len(istr) - 2, 2):
    fill(istr[i], istr[i + 1], istr[i + 2])

"""