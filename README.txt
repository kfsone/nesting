Simple demonstration of bad, nested include.

Through a series of includes, "Winsock2.h" is included (as 'winsock2.h')
prior to the project-wide '#define NOMINMAX', causing a compile error when
'min' is used.


