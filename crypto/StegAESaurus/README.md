# StegAESaurus
* Layered crypto challenge

## Description
* Ciphertext: 51cacb88d7b1aa22418817b8b64962c5a39b6469e9b5a2e10d4ffb65c8cbbff04afe10d71da8ea1a29efd5118e1bd542


## Solution
* Solution: jctf{cr4ck1ng_clus73rs0f_cryp70}
a.	Use a spectrum analyzer like Sonic Visualizer on IGotTheKeys.wav = will show letters ECB which = AES Mode
b.	Use a GIF parser on AlsoPartofKey58 to find the frame that has this code: 84cjFCDKC9D1gJ8sGZvW3r, then decode from Base 58
c.	Use exiftool on Partofkey.jpg  to find “Bases of Eight” and 66 64 71 63 64 142 63 66 142 67 145 70 146 146 60 144, then decode from Octal to get 64934b36b7e8ff0d = second part of AES key
d.	Put all of these together in CyberChef AES decoder using Hex input and Raw output (find this from trial and error) to get flag.


---

## Challenge Message
A stegosaurus is rampaging through the city, but only destroying keys for some odd reason. Put all the key pieces together to crack this ciphertext!
