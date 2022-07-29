#!/bin/sh

plugins=("TapBootstrap" "TapCommon" "TapDB" "TapLogin" "TapMoment" "XDGCommon" "XDGAccount" "XDGPayment")

function DeleteBuild()
{
    rm -rf Plugins/$1/Binaries
    rm -rf Plugins/$1/Intermediate
}

for ((i=0;i<${#plugins[@]};i++));do
    DeleteBuild ${plugins[$i]}
done  

#zip -q -r XDGSDK-UE4_$1.zip Plugins/