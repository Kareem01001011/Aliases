# cmd-aliases

Some batch files that make my life easier using cmd.

This makes cmd feel a bit more comfortable like bash. It's pretty much a makeshift way to make aliases similar to the ones in bash. I know there's other methods but they're all too finicky and require too much modification in system files which could break a lot of stuff, and they don't even work that well! So this way is just objectively better.

## How to use

1. Clone this repository in the C: directory (Not inside any folder, just `C:`).
2. Add `C:\Aliases` (the repository's path) to [PATH](https://www.architectryan.com/2018/03/17/add-to-the-path-on-windows-10/).

And that's it!

## What does each file do?

### ~.bat

cd to the home directory of the current user.

### aliases.bat

Opens the Aliases directory in vscode (you can modify it to use your preferred text editor).

### a.bat

Same as [`aliases.bat`](#aliasesbat), this is just a shortcut.

### aliasescd.bat

cd to the Aliases directory.

### acd.bat

Same as [`aliasescd.bat`](#aliasescdbat), this is just a shortcut.

### clear.bat

Clears the terminal screen. Similar to the `clear` command in bash and `cls` in cmd.

### c.bat

Same as [`clear.bat`](#clearbat), this is just a shortcut.

### desktop.bat

cd to the current user's desktop.

### d.bat

Same as [`desktop.bat`](#desktopbat), this is just a shortcut.

### home.bat

Same as [`~.bat`](#bat), this is a verbose version of it.

### len.cpp & len.exe

Outputs the length (number of characters) of the given parameter. You can delete `len.exe` and compile it yourself from `len.cpp` if you'd like.
It's best if you use quotes when using it. For example, instead of typing:

```batch
len Hello World!
```

You should type:

```batch
len "Hello World!"
```

### lenpy.py & lenpy.bat

Same as [`len.cpp`](#lencpp--lenexe), but in Python.
`lenpy.bat` is used to run `lenpy.py` directly without having to type `python lenpy.py ...` which sometimes doesn't even work.

### ls.bat

Same as the `ls` command in bash. This shows all the files and folders in the current directory.

### mv.bat

Shortcut for the `move` command.

### netreset.bat

Resets TCP/IP settings to their default state and flushes the DNS for when I'm having network trouble.

### new.bat

cd to the home directory and clears the terminal. Just a combination of [`~.bat`](#bat) and [`c.bat`](#cbat).

### pwd.bat

Similar to the `pwd` command in bash. Outputs the current working directory (basically just `cd`).

### rm.bat

Shortcut for the `del` command. Delete a files/directories.

### starship.bat

**NOTE: You need to have both [`starship`](https://starship.rs/) and [`clink`](https://github.com/chrisant996/clink) installed to use this.**

This runs cmd with both clink and starship instead of making starship and clink modify cmd itself to run, you can turn off the autostart or whatever it's called and use this file to run your modded cmd.

You can then use this file in Windows Terminal or vscode as a separate terminal profile next to the default cmd.

### terminal.bat

Opens Windows Terminal (the path might be different on your machine. If so, just change it to where wt is in your device).

### t.bat

Same as [`terminal.bat`](#terminalbat), just a shortcut.

### touch.bat

Similar to the `touch` command in bash. Creates a new file with the first parameter as the file's name.

### vim.bat

Just as the name suggests, runs `vim` in cmd...

**Note: You need to have git bash installed on your device for this to work.**

## License

This code is available under the MIT license. See the LICENSE.md file or [click here](https://mit-license.org/) for more info.
