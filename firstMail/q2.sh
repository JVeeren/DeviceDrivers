#!/bin/bash

:'
Write a C program or shell script to send a simple mail to any host without using any professional mailer like gmail.
'

Recipient="admin@example.com"
Subject="Greeting"
Message="Welcome to our site"
'mail -s $Subject $Recipient <<< $Message'
