#include <stdlib.h>
#include <stdbool.h>

typedef struct _p11_dict {
	struct p11_dictbucket **buckets;
}p11_dict;

typedef struct p11_dictbucket {
	void *key;
	unsigned int hashed;
	void *value;
	struct p11_dictbucket *next;
} dictbucket;


p11_dict *
p11_dict_new (){
	p11_dict *dict;

	dict = malloc (sizeof (p11_dict));
	if (dict) {
		dict->buckets = (dictbucket **)malloc (sizeof (dictbucket *));
		if (!dict->buckets) {
			free (dict);
			return NULL;
		}
	}
	return dict;
}


p11_dict *
p11_constant_reverse (bool nick)
{
	p11_dict *lookups;
	int length = -1;
	int i, j, k;

	lookups = p11_dict_new ();

	for (i = 0; i < 10; i++) {
		for (j = 0; j < length; j++) {
			if (nick) {
				//dosomething
			} else {
				free(lookups);//dosomething
			}
		}
	}

	return lookups;
}

void main(){
        bool nick=1;
        p11_constant_reverse (nick);
}

