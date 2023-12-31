/*
** EPITECH PROJECT, 2023
** my_hunter
** File description:
** pull_data
*/

#include "my_toml.h"
#include "string.h"

void *pull_data(obj_t *obj, char *data_name)
{
    for (size_t idx = 0; idx < obj->obj_size; idx++) {
        if (my_strcmp((char const *)data_name
        , (char *const) obj->data[idx]->name) == 0) {
            return obj->data[idx]->data;
        }
    }
    return NULL;
}
