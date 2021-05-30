# C64 Watch

C64 Watch is a customized T-Watch 2020 that was inspired by the Commodore 64 computer.  It features a C64 theme and a built in BASIC interpreter.

![Watch Front Angle Dark](https://raw.githubusercontent.com/nickbild/c64_watch/main/media/watch_angle_dark_sm.jpg)

## How It Works

I've had a T-Watch 2020 for about a year and haven't found any pre-built software for it that appeals to me, so it has mostly gone unused.  I recently took the time to build the software that I want for the watch so that I can start wearing it daily, and the result is C64 Watch.

It has a C64 theme and an authentic font.  There is a BASIC interpreter that runs on-device.  It is a version of [TinyBasic Plus](https://github.com/BleuLlama/TinyBasicPlus) that I modified to work on the T-Watch.  Initially, I built it with a slide-out on-screen keyboard, but it was such an awful experience with the tiny screen, that I decided to interact with it via a serial terminal.  By plugging the watch into a computer via USB and firing up a terminal, then tapping on the `BASIC` menu option, you can interact with the interpreter in real time.

I'd definitely like to build more features in the future.  I'm thinking about adding an emulator so that I can play C64 games on the watch.  I hope other Commodore fans that like C64 Watch will also contribute new features.

## To Install

- Add the official [T-Watch Library](https://github.com/Xinyuan-LilyGO/TTGO_TWatch_Library) to Arduino IDE.
- Copy [this](https://github.com/nickbild/c64_watch/blob/main/assets/c64_basic.c) and [this](https://github.com/nickbild/c64_watch/blob/main/assets/menu.c) in the `src/imgs/` folder within the library.
- Open [c64_watch.ino](https://github.com/nickbild/c64_watch/blob/main/c64_watch/c64_watch.ino) in Arduino IDE.
- Plug the T-Watch 2020 in to your computer via USB, and click `Sketch->Upload`.

## Media

YouTube: https://www.youtube.com/watch?v=XGAHCkhrV2w

Unfortunately it is difficult to take good pictures of displays such as this one, so it doesn't really capture how nice it looks in person.

Main screen:
![Watch Front](https://raw.githubusercontent.com/nickbild/c64_watch/main/media/watch_best_sm.jpg)

![Watch Front Angle](https://raw.githubusercontent.com/nickbild/c64_watch/main/media/watch_angle_sm.jpg)

Menu, showing BASIC icon:
![Watch Front BASIC](https://raw.githubusercontent.com/nickbild/c64_watch/main/media/basic_best_sm.jpg)

Detail:
![Watch Front BASIC](https://raw.githubusercontent.com/nickbild/c64_watch/main/media/watch_best_sm_annotated.jpg)

## Bill of Materials

- 1 x Lilygo T-Watch 2020

## About the Author

[Nick A. Bild, MS](https://nickbild79.firebaseapp.com/#!/)
