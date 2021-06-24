# abstractor V. 1.5
An automatic commentor and prettyfier for code.

Generates comments for every line of code in a given file by splitting the string into its components and comparing them to a major library of commands/operators/Keywords for the corresponding language. 

Prettyfies code by adding newlines after certain characters to increase readability.

### Installation
```
git clone https://github.com/wnaBee/abstractor.git
chmod a+x installer.sh
bash installer.sh
```

### Use
```
abstract [file] [language] [-options]

Options:
--comment     Generates automatic comments
 -c           for every line of code

--format      Formats code to simplify reading
 -f

--help        Displays this message
 -h
```

##### supported formats:

| languages | command |
|-----------|---------|
| c++ | c++ |
| c++ header | .h |
| Python | python |

Disclaimer: version 1.5 is complete however due to the many edgecases present within programming languages some code may return messy comments, however it should somewhat work. Some spacing and certain keywords still need some fixing and/or adding.

## Patchnotes V. 1.5
### python
*added descriptions for 211 new python functions
*implemented recognition for single (#) and multiline (""") comments
*started work on word insertions in descriptions for more natural outputs in functions with multiple/complex parameters (WIP)
### general
*fixed python parsing
*identified several bugs and issues with shellscripts (new installer comming soon, options in abstract command will be made less janky)

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
