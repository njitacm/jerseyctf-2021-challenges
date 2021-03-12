import socket

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as serversocket:
    serversocket.bind(("127.0.0.1", 9990))
    serversocket.listen()
    conn, addr = serversocket.accept()

    with conn:
        conn.sendall("jctf{t0-pwn-y0u-g0tta-c0nn3ct-f1rst-som3wh3re}".encode())
        conn.close()
        
    
