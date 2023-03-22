Controllable
    - Rabbid Object

Interactable
    - Button Object

CARA COMPILE
1. Pergi ke src/
2. Tulis kode berikut di terminal (tanpa tanda petik dua)
    "if ($?) { g++ (Get-ChildItem -Path . -Filter *.cpp -Recurse).FullName -o main -lwsock32 } ; if ($?) { ./main }"