#!/bin/sh
# This is my first script
echo Program Code?
read code
path=$(pwd)/$code.cpp
touch $path
echo "#include <bits/stdc++.h>\nusing namespace std;\n\ntypedef long long ll;\n#define repeat(i,n) for(int i = 0; i < n; i++)\n\nint main() {\n\tios_base::sync_with_stdio(0);\n\tcin.tie(0);\n\n\treturn 0;\n}" >> $path
c9 $path
echo "Okay! Done :)"