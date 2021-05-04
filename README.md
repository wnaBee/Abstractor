# abstractor V. 1.0
An automatic commentor for code. Generates comments for every line of code in a given file by splitting the string into its components and comparing them to a major library of c++ commands/operators/Keywords. 

### Installation
`git clone https://github.com/wnaBee/abstractor.git` (requires recompilation, installer script comming soon along with auto alias)

### Use
`./filereader [file] [fileformat]`

##### (currently) supported formats:

|file format| command |
|-----------|---------|
| c++ | c++ |
|c++ header | .h |

Disclaimer: version 1.0 is complete however due to the many edgecases present within c++ some code may return messy comments, however it should somewhat work. Some spacing and certain keywords still need some fixing and/or adding. Future versions may add support for further languages.
