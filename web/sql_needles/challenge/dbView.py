#!/bin/env/python3

"""
Program is meant to show how to 
"""

import sqlite3
from CONSTANTS import DB_NAME

with sqlite3.connect(f"{DB_NAME}") as conn:
    read = conn.execute("SELECT * FROM users")
    for row in read:
        print(row)    