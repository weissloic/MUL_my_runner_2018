/*
** EPITECH PROJECT, 2018
** Project Name
** File description:
** [file description here]
*/



#include "my.h"

void function_text(text_t txt, char *str,
sfVector2f position, sfColor color)
{
    sfText_setFont(txt.text, txt.font);
    sfText_setString(txt.text, str);
    sfText_setCharacterSize(txt.text, 50);
    sfText_setPosition(txt.text, txt.position);
    sfText_setColor(txt.text, sfBlue);
}

void create_text_two(char *str, all_t *all,
sfVector2f position, sfColor color)
{
    text_t txt;
    txt.font = sfFont_createFromFile("images/font.ttf");
    txt.text = sfText_create();
    txt.str = malloc(sizeof(char) * 1000);
    txt.position.x = position.x;
    txt.position.y = position.y;
    function_text(txt, str, position, color);
    all->text[all->nb_text] = txt;
    all->nb_text++;
}

void create_object_sky(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.ciel;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 1;
    obj.size_max = 3840;
    obj.type = type;
    obj.display = 1;
    if (obj.type == PAUSE)
        obj.display = 0;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    sfSprite_setPosition(obj.sprite, obj.position);
    all->object[all->nb_object] = obj;
    all->object[2].position.y = 652;
    all->nb_object++;
}

void create_object_ice(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.ice;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 2;
    obj.size_max = 3840;
    obj.type = type;
    obj.display = 1;
    if (obj.type == PAUSE)
        obj.display = 0;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    sfSprite_setPosition(obj.sprite, obj.position);
    all->object[all->nb_object] = obj;
    all->object[2].position.y = 652;
    all->nb_object++;
}

void create_object_perso(sfIntRect rect,
sfVector2f position,
type_t type, all_t *all)
{
    object_t obj;
    obj.sprite = sfSprite_create();
    obj.texture = all->all_texture.perso;
    obj.rect = rect;
    obj.position = position;
    obj.number = 0;
    obj.offset = 217;
    obj.size_max = 2590;
    obj.type = type;
    obj.display = 1;
    if (obj.type == PAUSE)
        obj.display = 0;
    sfSprite_setTexture(obj.sprite, obj.texture, sfTrue);
    sfSprite_setTextureRect(obj.sprite, obj.rect);
    sfSprite_setPosition(obj.sprite, obj.position);
    all->object[all->nb_object] = obj;
    all->object[2].position.y = 652;
    all->nb_object++;
}