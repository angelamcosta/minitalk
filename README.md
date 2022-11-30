# :desktop_computer: Minitalk

<div align=center>

  ![badge](https://raw.githubusercontent.com/angelamcosta/angelamcosta/main/42_badges/minitalke.png)
  
  [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com) [![forthebadge](https://forthebadge.com/images/badges/built-by-codebabes.svg)](https://forthebadge.com)
  
  <img alt="GitHub Language Count" src="https://img.shields.io/github/languages/count/angelamcosta/minitalk" /> <img alt="GitHub Top Language" src="https://img.shields.io/github/languages/top/angelamcosta/minitalk" /> <img alt="GitHub Contributors" src="https://img.shields.io/github/contributors/angelamcosta/minitalk" /> <img alt="GitHub Last Commit" src="https://img.shields.io/github/last-commit/angelamcosta/minitalk" /> <img alt="Github License" src="https://img.shields.io/github/license/angelamcosta/minitalk" /> <a href="https://wakatime.com/badge/user/0c29d5b3-c30b-4e1a-ad07-2da3bd4f7e05/project/1a40875b-ebac-448a-bb65-c1350315dcea"><img src="https://wakatime.com/badge/user/0c29d5b3-c30b-4e1a-ad07-2da3bd4f7e05/project/1a40875b-ebac-448a-bb65-c1350315dcea.svg" alt="wakatime"></a>
</div>

## :bookmark_tabs: Table of Contents

- [Introduction](#introduction)
- [Mandatory part](#mandatory-part)
- [Bonus part](#bonus-part)
- [Tasks](#tasks)

## :card_file_box: Introduction

The purpose of this project is to code a small data exchange program using UNIX signals. It is an introductory project for the bigger UNIX projects that will appear later on in the cursus. 

The subject of the project can be found in [this link](https://raw.githubusercontent.com/angelamcosta/minitalk/main/en.subject.pdf).

## :round_pushpin: Mandatory part

Create a communication program in the form of a client and a server.
- The server must be started first. After its launch, it has to print its PID.
- The client takes two parameters:
  - The server PID.
  - The string to send.
- The client must send the string passed as a parameter to the server.
Once the string has been received, the server must print it.
- The server has to display the string pretty quickly. Quickly means that if you think
it takes too long, then it is probably too long.
1 second for displaying 100 characters is way too much!
- Your server should be able to receive strings from several clients in a row without
needing to restart.
- The communication between your client and your server has to be done only using
UNIX signals.
- You can only use these two signals: SIGUSR1 and SIGUSR2.

## :bangbang: Bonus part

- The server acknowledges every message received by sending back a signal to the
client.
- Unicode characters support!

## Tasks

- :white_large_square: Mandatory part (ongoing)
- :white_large_square: Bonus part (ongoing)
