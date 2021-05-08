# abstractor V. 1.2
An automatic commentor and prettyfier for code.

Generates comments for every line of code in a given file by splitting the string into its components and comparing them to a major library of c++ commands/operators/Keywords. 

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

##### (currently) supported formats:

| languages | command |
|-----------|---------|
| c++ | c++ |
|c++ header | .h |

Disclaimer: version 1.0 is complete however due to the many edgecases present within c++ some code may return messy comments, however it should somewhat work. Some spacing and certain keywords still need some fixing and/or adding. Future versions may add support for further languages.

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
