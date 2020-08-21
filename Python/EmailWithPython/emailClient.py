# Made By Anirudh Rath | dh00mk3tu
# Visit anirudhrath.tech to know more
# Send Email using Python


import yagmail

sEmail = YOUR_EMAIL
rEmail = RECEIVER_EMAIL
sub = "Subject"
sPass = input(f'Enter the password for {sEmail}: \n')

yag = yagmail.SMTP(user = sEmail, password=sPass)

contents = [
    "This is a test, replace this text :/"
    "path\\name of file with extension"
]

yag.send(rEmail, sub, contents)