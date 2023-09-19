import os
import time
import sys
import subprocess
import platform
from tabulate import tabulate
import readline
import curses

def colorize_text(text, color):
    color_codes = {
        'black': '\033[30m',
        'red': '\033[31m',
        'green': '\033[32m',
        'yellow': '\033[33m',
        'blue': '\033[34m',
        'magenta': '\033[35m',
        'cyan': '\033[36m',
        'white': '\033[37m',
        'reset': '\033[0m'
    }
    colored_text = color_codes[color.lower()] + text + color_codes['reset']
    return colored_text

def print_file_content(file_path):
    try:
        with open(file_path, 'r') as file:
            content = file.read()
            print(content)
    except FileNotFoundError:
        print(f"File '{file_path}' not found.")
    except IOError:
        print(f"Error reading file '{file_path}'.")

def print_slowly(text, delay=0.15):
    for char in text:
        print(char,end='', flush=True)
        time.sleep(delay)



def print_slowly_with_colors(text, delay=0.05, color='white'):
    for char in text:
        colored_char = colorize_text(char, color)
        print(colored_char, end='', flush=True)
        time.sleep(delay)

with open('Intro', 'r') as intro_file:
    intro_text = intro_file.read()
    print_slowly_with_colors(intro_text, 0.0005, 'cyan')
