// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 676;
unsigned int S = 0;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int index;
    index = hash(word);
    for (node *ptr = table[index]; ptr != NULL; ptr = ptr->next)
    {
        if (strcasecmp(word, ptr->word) == 0)
        {
            return true;
        }
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    unsigned int h = toupper(word[0]) - 'A';
    h *= 26;
    h += toupper(word[1]) - 'A';
    if (h > N - 1)
    {
        h %= N;
    }
    return h;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    int index;
    FILE *dict = fopen(dictionary, "r");
    if (dict == NULL)
    {
        return false;
    }
    char word[LENGTH + 1];
    while(fscanf(dict, "%s", word))
    {
        node *n = malloc(sizeof(n));
        if (n == NULL)
        {
            return 1;
        }
        strcpy(n->word, word);
        n->next = NULL;
        index = hash(n->word);
        if (table[index] != NULL)
        {
            n->next = table[index];
            table[index] = n;
        } else table[index] = n;
        S++;
    }
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return S;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{

    for (node *ptr = table[index]; ptr != NULL; ptr = ptr->next)
    {
        if (strcasecmp(word, ptr->word) == 0)
        {
            return true;
        }
    }
    return false;
}
