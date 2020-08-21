# Made By Anirudh Rath | dh00mk3tu
# Visit anirudhrath.tech to know more
# SMTP File for emailClient File
import smtplib

sEmail = 'sender@fromdomain.com'
rEmail = ['reciever@todomain.com']

message = """From: From Person %s 
To: To Person %s 
Subject: Sending SMTP e-mail  
This is a test e-mail message. 
"""%(sEmail, rEmail)

try:
   smtpObj = smtplib.SMTP('localhost')
   smtpObj.sendmail(sender_mail, receivers_mail, message)
   print("Successfully sent email")

except Exception:
   print("Error: unable to send email")



