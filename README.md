# abstractor V. 1.7
An automatic commentor and prettyfier for code.

Generates comments for every line of code in a given file by splitting the string into its components and comparing them to a major library of commands/operators/Keywords for the corresponding language. 

Prettyfies code by adding newlines after certain characters to increase readability.

### Installation
```
git clone https://github.com/wnaBee/abstractor.git
bash installer.sh [ options ]
```
Note: The alias will only work after a system restart but this can be circumnavigated by running `source ~/.bashrc` in bash or `source ~/.zshrc` in zsh.

#### installation options
| option | extended | descriptions |
|--------|---------|--------------|
| -d | --directory | define installation directory of abstractor script (defaults to current directory) |
| -b | --bash | install for bash environment (alias location) |
| -z | --zsh | install for zsh environment (alias location) |
| -A | --Arch | resolve dependencies with `pacman` (arch, manjaro, etc.) |
| -D | --Debian | resolve dependencies with `dpkg` (debian, ubuntu, kali, etc.) |
| -M | --Other | assume all dependencies are present, force installatiom |

#### example
```
bash installer.sh -b -M
```
#### dependencies
dependency | purpose
-----------|----------
g++ | compiling
boost.regex | for insertions
bash/bash emulation | script execution

### Use
```
abstract [file] [language] [ options ]

Options:
--comment     Generates automatic comments
 -c           for every line of code

--format      Formats code to simplify reading
 -f

--help        Displays this message
 -h
```
#### use options
| option | extended | description |
|--------|----------|-------------|
| -c | --comment | generates line by line |
| -f | --format | formats the code to be more readable |
| -h | --help | displays a help message |

#### supported formats:

| languages | command |
|-----------|---------|
| c++ | c++ |
| c++ header | .h |
| Python | py |

Disclaimer: version 1.6 is complete however due to the many edgecases present within programming languages some code may return messy comments, however it should somewhat work. Some spacing and certain keywords still need some fixing and/or adding. The current version of the python commentor cannot handle nested functions with comment insertions e.g. `add((5+6),3)` will be processed correctly but `add(add(5,6),3)` will create something messy.

## Patchnotes V. 1.7
### general
* Deprecated `formatter.sh`
* Implemented automatic installation of dependencies
* Improved prettifier (slightly)


## Patchnotes V. 1.6.1
#### python
* minor bugfixes
#### general
* fixed CRLF handling
* fixed pyscript comments


## Patchnotes V. 1.6
#### python
* added command insertions (functions like `complex(6,7)` will now be evaluated as `return a complex number 6 and 7i` instead of `return a complex number using a real number and an imaginary number i 6,7`) which will help create more sohisticated comment structures
#### general
* overhauled installer script
* installer no longer requires sudo/root
* installer now more dynamic
* installer now compiles binary as hidden file in home directory
* fixed artifacts being left behind if installer was aborted
* fixed alias creation
* fixed formatter script options

## Patchnotes V. 1.5
#### python
* added descriptions for 211 new python functions
* implemented recognition for single (#) and multiline (""") comments
* started work on word insertions in descriptions for more natural outputs in functions with multiple/complex parameters (WIP)
#### general
* fixed python parsing
* identified several bugs and issues with shellscripts (new installer comming soon, options in abstract command will be made less janky)

## Patchnotes V. 1.4
#### python
* Introducing python! (WIP)
* added support for python linesplittling by operators
* added support for comment creation
#### c++
* added identifiers for empty parentheses('()') and square brackets('[]')
* removed trailing spaces in comments
* removed extra spaces prior to punctuation

## Patchnotes V. 1.3
* Completed code refactor
* added modularity for future language additions

## Patchnotes V. 1.2.1
* Refactoring progress

## Patchnotes V. 1.2
* added prettyfier
* streamlined option parsing in main shellscript
* minor modifications to descriptions of certain keywords
* removed redundant/empty comment generation
* added identification of multiline comments (program will no longer add comments to these lines)

## Patchnotes V. 1.1
* added installer shellscript
* added help command
* added support for comments (//), quote strings ("") and typecasts (<>)
* streamlined execution syntax
