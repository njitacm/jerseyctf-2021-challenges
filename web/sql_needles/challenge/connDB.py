import sqlite3
import sys


with sqlite3.connect("vuln.db") as conn:
    cur = conn.cursor()

    user = sys.argv[1]
    passwd = sys.argv[2]

    output = cur.execute(f"SELECT passwd FROM users WHERE name = '{user}' AND passwd = '{passwd}'")

    for value in output:
        print(f"{value}")