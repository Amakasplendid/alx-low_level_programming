#ifndef DOG_H
#define DOG_H
/**
 * struct dog - type new def
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
/*
 * dog_t - typedef for struct
 */
typedef struct dog dog_t

struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
