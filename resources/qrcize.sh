#!/bin/bash
echo "<!DOCTYPE RCC><RCC version=\"1.0\">"
echo "<qresource prefix=\"/resources\">"
for file in pictures/*
do
   echo -e "\t<file>${file}</file>"
done
echo "</qresource>"
echo -n "</RCC>"
