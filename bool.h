//
// Created by mustafa58 on 31.07.2022.
//

#ifndef BOOLEAN_BOOL_H
#define BOOLEAN_BOOL_H

#define bool(x) ((x) != 0)
#define false (1 == 0)
#define true (!false)
#define bool_str(s) ( bool(s) ? "true" : "false" )
typedef unsigned char bool;

#endif //BOOLEAN_BOOL_H
