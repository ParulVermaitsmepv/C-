import curses
import random
import time

def main(stdscr):
    curses.curs_set(0)
    stdscr.nodelay(True)

    while True:
        h, w = stdscr.getmaxyx()
        stdscr.erase()

        for x in range(w):
            for y in range(h):
                if random.random() < 0.08:
                    try:
                        stdscr.addch(y, x, random.choice("01"))
                    except curses.error:
                        pass

        stdscr.refresh()
        time.sleep(0.1)

curses.wrapper(main)