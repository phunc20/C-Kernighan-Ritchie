### Static external and static internal variables
In previous sections we have defined the terms **external** and **internal**.
- external variables are those defined outside functions
- internal variables are those defined inside functions

As far as I come to understand, this section wants to teach us that
- external static variables (i.e. external variables declared additionally as `static`) will not be able to be used
outside the file, whereas ordinary external variables can be called from other files.
- internal static variables, on the other hand, as opposed to ordinary internal variables, can exist across function
calls.

Find some examples to further illustrate these points
