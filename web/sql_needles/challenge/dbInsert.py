#!/usr/bin/python3

import sqlite3
from CONSTANTS import DB_NAME

conn = sqlite3.connect(f"{DB_NAME}")

cur = conn.cursor()

# https://docs.python.org/3/library/sqlite3.html 
# --> Check for cur.executemany

cur.execute('INSERT INTO users (ID, NAME, PASSWD) Values (1, "admin", "jctf{sql_1nj3ction_4re-l3th4l}")')

conn.commit()
conn.close()