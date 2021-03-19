import sqlite3
from CONSTANTS import DB_NAME


with sqlite3.connect(f"{DB_NAME}") as conn:
    cur = conn.cursor()

    user = input("Enter username: ")
    passwd = input("Enter password: ")

    output = cur.execute(f"SELECT passwd FROM users WHERE name = '{user}' AND passwd = '{passwd}'")

    for value in output:
        print(f"{value}")
