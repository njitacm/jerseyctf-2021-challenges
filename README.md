# ctf-challenges

Development and Creation of CTF Challenges for JerseyCTF 2021

---
## General Info

* There are 5 categories:
    - `crypto` -> Cryptography
    * `forensics` -> Forensics
    - `misc` -> "Potpourri", any challenges!
    * `pwn` -> Challenges include
    * `web` -> All types of web exploitation challenges

* There should be at a minimum of 7 challenges per category:
    * 3 Easy
    * 2 Medium
    * 2 Hard

* Once the minimum amount of challenges in all the categories can be met, then more challenges can be written in anything!

* **Hard** Challenges should not have hints

* **NOTE** : This challenges should be beginner friendly but more advanced people might come to compete 
    * _Should not have to be ;)_
---
## Interested in Contributing?
* Check [contributing.md](.github/contributing.md) in [.github](.github) directory

### Quick-steps Contributing
* **Be sure your flag looks like `jctf{your_text_here}`**

1. Go to Directory of category that you wish to create a challenge for 

    | Categories
    | :--
    | [crypto](crypto)
    | [forensics](forensics)
    | [misc](misc)
    | [pwn](pwn)
    | [web](web)

1. Run `python3 ../makeChallenge.py <ChallengeName>` and this will automatically instantiate all the standardization to make a challenge.
    - _NB: This assumes you have followed Step 1_
    * Be sure that ChallengeName is `one word` (has no space) or `encapsulated by single quotes` 
    * Feel free to add new files or folders that aren't part of the standardization process
        * _Try not to deviate, unless necessary_

1. Once you finish to **Remember to Append that Challenge to the README.md in that Category Directory based on Difficulty**

    | README.md's Categories
    | :--
    | [crypto/README.md](crypto/README.md)
    | [forensics/README.md](forensics/README.md)
    | [misc/README.md](misc/README.md)
    | [pwn/README.md](pwn/README.md)
    | [web/README.md](web/README.md)

---
## Rules
* **Note** that be having access to this repository, this disqualifies you from competing in jctf 2021

---
## Resources
*

---
## Links
* [Legacy Challenge Docs](https://docs.google.com/document/d/1ZqllnoSpuWNTdQ5A7UB5BpBB1ul6l4051KitS-etNeg/edit?usp=sharing)
    * Switching over to Github Projects Tab for most recent updates
