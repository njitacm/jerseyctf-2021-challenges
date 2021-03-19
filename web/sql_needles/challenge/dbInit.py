#!/usr/bin/python3

import sqlite3
from CONSTANTS import DB_NAME

conn = sqlite3.connect(f"{DB_NAME}")
cur = conn.cursor()

cur.execute('''CREATE TABLE users
    (ID INT PRIMARY KEY NOT NULL,
    NAME TEXT NOT NULL,
    PASSWD TEXT NOT NULL);
''')

print(f"Table created successfully")

conn.commit()
conn.close()