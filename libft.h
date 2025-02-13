/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbonnard <vbonnard@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:05:28 by dev               #+#    #+#             */
/*   Updated: 2025/02/13 13:02:40 by vbonnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * Convertit la chaîne de caractères en entier.
 *
 * @param str La chaîne de caractères à convertir.
 * @return L'entier converti.
 */
int					ft_atoi(const char *str);

/**

	* Remplit les n premiers octets de la
		zone mémoire pointée par s avec des zéros.
 *
 * @param s La zone mémoire à remplir.
 * @param n Le nombre d'octets à remplir.
 */
void				ft_bzero(void *s, size_t n);

/**

	* Alloue de la mémoire pour un tableau de count
		éléments de taille size chacun et initialise tous les octets à zéro.
 *
 * @param count Le nombre d'éléments.
 * @param size La taille de chaque élément.
 * @return Un pointeur sur la mémoire allouée, ou NULL si l'allocation échoue.
 */
void				*ft_calloc(size_t count, size_t size);

/**
 * Vérifie si le caractère c est alphanumérique.
 *
 * @param c Le caractère à vérifier.
 * @return 1 si le caractère est alphanumérique, 0 sinon.
 */
int					ft_isalnum(int c);

/**
 * Vérifie si le caractère c est une lettre.
 *
 * @param c Le caractère à vérifier.
 * @return 1 si le caractère est une lettre, 0 sinon.
 */
int					ft_isalpha(int c);

/**
 * Vérifie si le caractère c appartient au jeu de caractères ASCII.
 *
 * @param c Le caractère à vérifier.
 * @return 1 si le caractère appartient au jeu ASCII, 0 sinon.
 */
int					ft_isascii(int c);

/**
 * Vérifie si le caractère c est un chiffre.
 *
 * @param c Le caractère à vérifier.
 * @return 1 si le caractère est un chiffre, 0 sinon.
 */
int					ft_isdigit(int c);

/**
 * Vérifie si le caractère c est imprimable.
 *
 * @param c Le caractère à vérifier.
 * @return 1 si le caractère est imprimable, 0 sinon.
 */
int					ft_isprint(int c);

/**
 * Convertit l'entier n en chaîne de caractères.
 *
 * @param n L'entier à convertir.
 * @return La chaîne de caractères représentant l'entier.
 */
char				*ft_itoa(int n);

/**
 * Ajoute l'élément 'new' à la fin de la liste 'lst'.
 *
 * @param lst Un pointeur sur le pointeur du premier élément de la liste.
 * @param new Un pointeur sur l'élément à ajouter à la liste.
 */
void				ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Ajoute l'élément 'new' au début de la liste 'lst'.
 *
 * @param lst Un pointeur sur le pointeur du premier élément de la liste.
 * @param new Un pointeur sur l'élément à ajouter à la liste.
 */
void				ft_lstadd_front(t_list **lst, t_list *new);

/**
 * Supprime et libère la mémoire de chaque élément de la liste en utilisant
 * la fonction 'del' et un free(3). Le pointeur initial doit être mis à NULL.
 *
 * @param lst Un pointeur sur le pointeur du premier élément de la liste.
 * @param del Un pointeur sur la fonction utilisée pour supprimer le contenu
 *            de chaque élément.
 */
void				ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * Supprime et libère la mémoire de l'élément passé en paramètre en utilisant
 * la fonction 'del' puis un free(3). La mémoire de l'élément suivant ne doit
 * pas être libérée.
 *
 * @param lst Un pointeur sur l'élément à supprimer.
 * @param del Un pointeur sur la fonction utilisée pour supprimer le contenu
 *            de l'élément.
 */
void				ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * Itère sur la liste 'lst' et applique la fonction 'f' au contenu de chaque
 * élément.
 *
 * @param lst Un pointeur sur le premier élément de la liste.
 * @param f Un pointeur sur la fonction à appliquer au contenu de chaque
 *          élément.
 */
void				ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Renvoie le dernier élément de la liste.
 *
 * @param lst Un pointeur sur le premier élément de la liste.
 * @return Un pointeur sur le dernier élément de la liste.
 */
t_list				*ft_lstlast(t_list *lst);

/**
 * Itère sur la liste 'lst' et applique la fonction 'f' au contenu de chaque
 * élément pour créer une nouvelle liste résultant des applications successives
 * de 'f'. La fonction 'del' est utilisée pour supprimer le contenu d'un
 * élément si nécessaire.
 *
 * @param lst Un pointeur sur le premier élément de la liste.
 * @param f Un pointeur sur la fonction à appliquer au contenu de chaque
 *          élément.
 * @param del Un pointeur sur la fonction utilisée pour supprimer le contenu
 *            d'un élément si nécessaire.
 * @return Un pointeur sur le premier élément de la nouvelle liste.
 */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/**
 * Alloue et retourne un nouvel élément. La variable 'content' est initialisée
 * avec la valeur du paramètre 'content'. La variable 'next' est initialisée à
 * NULL.
 *
 * @param content Le contenu à ajouter au nouvel élément.
 * @return Un pointeur sur le nouvel élément.
 */
t_list				*ft_lstnew(void *content);

/**
 * Compte le nombre d'éléments dans la liste.
 *
 * @param lst Un pointeur sur le premier élément de la liste.
 * @return Le nombre d'éléments dans la liste.
 */
int					ft_lstsize(t_list *lst);

/**

	* @brief Recherche la première occurrence du caractère c
		dans les n premiers octets de la zone mémoire pointée par s.
 *
 * @param s Pointeur vers la zone mémoire à examiner.
 * @param c Caractère à rechercher.
 * @param n Nombre d'octets à examiner.
 * @return Un pointeur vers l'octet correspondant,
	ou NULL si le caractère n'est pas trouvé.
 */
void				*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compare les n premiers octets des
 * 	zones mémoire pointées par s1 et s2.
 *
 * @param s1 Pointeur vers la première zone mémoire.
 * @param s2 Pointeur vers la deuxième zone mémoire.
 * @param n Nombre d'octets à comparer.
 * @return Un entier inférieur,
	égal ou supérieur à zéro si s1 est respectivement inférieure,
	égale ou supérieure à s2.
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Copie n octets de la zone mémoire src vers la zone mémoire dst.
 *
 * @param dst Pointeur vers la zone mémoire de destination.
 * @param src Pointeur vers la zone mémoire source.
 * @param n Nombre d'octets à copier.
 * @return Un pointeur vers dst.
 */
void				*ft_memcpy(void *dst, const void *src, size_t n);

/**

	* @brief Déplace n octets de la zone mémoire src vers
		la zone mémoire dst. Les zones peuvent se chevaucher.
 *
 * @param dst Pointeur vers la zone mémoire de destination.
 * @param src Pointeur vers la zone mémoire source.
 * @param len Nombre d'octets à déplacer.
 * @return Un pointeur vers dst.
 */
void				*ft_memmove(void *dst, const void *src, size_t len);

/**

	* @brief Remplit les n premiers octets de la zone
		mémoire pointée par ptr avec la valeur spécifiée.
 *
 * @param ptr Pointeur vers la zone mémoire à remplir.
 * @param value Valeur à utiliser pour remplir la zone mémoire.
 * @param num Nombre d'octets à remplir.
 * @return Un pointeur vers ptr.
 */
void				*ft_memset(void *ptr, int value, size_t num);

/**
 * @brief Écrit le caractère c dans le descripteur de fichier fd.
 *
 * @param c Caractère à écrire.
 * @param fd Descripteur de fichier.
 */
void				ft_putchar_fd(char c, int fd);

/**

	* @brief Écrit la chaîne de caractères s suivie
		d'un retour à la ligne dans le descripteur de fichier fd.
 *
 * @param s Chaîne de caractères à écrire.
 * @param fd Descripteur de fichier.
 */
void				ft_putendl_fd(char *s, int fd);

/**
 * @brief Écrit l'entier n dans le descripteur de fichier fd.
 *
 * @param n Entier à écrire.
 * @param fd Descripteur de fichier.
 */
void				ft_putnbr_fd(int n, int fd);

/**
 * @brief Écrit la chaîne de caractères s dans le descripteur de fichier fd.
 *
 * @param s Chaîne de caractères à écrire.
 * @param fd Descripteur de fichier.
 */
void				ft_putstr_fd(char *s, int fd);

/**

	* @brief Divise la chaîne de caractères s en
		sous-chaînes en utilisant le caractère c comme délimiteur.
 *
 * @param s Chaîne de caractères à diviser.
 * @param c Caractère délimiteur.
 * @return Un tableau de chaînes de caractères résultant de la division.
 */
char				**ft_split(const char *s, char c);

/**
 * @brief Trouve la première occurrence d'un caractère dans une chaîne.
 *
 * Cette fonction recherche la première occurrence du caractère `c`
 * (converti en char) dans la chaîne pointée par `s`. Le caractère nul
 * de fin fait partie de la recherche.
 *
 * @param s La chaîne dans laquelle chercher le caractère.
 * @param c Le caractère à chercher.
 * @return Un pointeur sur la première occurrence du caractère `c` dans
 * la chaîne `s`, ou NULL si le caractère n'est pas trouvé.
 */
char				*ft_strchr(const char *s, int c);
/**
 * @brief Duplique une chaîne de caractères.
 *

	* Cette fonction alloue suffisamment de
		mémoire pour copier la chaîne de caractères passée
			en argument, puis copie cette chaîne dans la mémoire allouée.
 *
 * @param s1 La chaîne de caractères à dupliquer.
 * @return Un pointeur vers la nouvelle chaîne de caractères dupliquée,
	ou NULL si
 *         l'allocation de mémoire échoue.
 */
char				*ft_strdup(const char *s1);

/**
 * ft_striteri
	- Applique une fonction à chaque caractère d'une chaîne de caractères.
 * @s: La chaîne de caractères sur laquelle appliquer la fonction.
 * @f: La fonction à appliquer à chaque caractère de la chaîne. Elle prend en
 *     paramètre l'index du caractère et un pointeur vers le caractère.
 *
 * Cette fonction parcourt la chaîne de caractères 's' et applique la fonction
 * 'f' à chaque caractère, en passant l'index du caractère et un pointeur vers
 * le caractère à la fonction 'f'.
 */
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief Concatène deux chaînes de caractères.
 *
 * Cette fonction alloue (avec malloc(3)) et retourne une nouvelle chaîne,
 * résultat de la concaténation de s1 et s2.
 *
 * @param s1 La première chaîne de caractères.
 * @param s2 La deuxième chaîne de caractères.
 * @return La nouvelle chaîne de caractères résultant de la concaténation
 *         de s1 et s2, ou NULL si l'allocation échoue.
 */
char				*ft_strjoin(char const *s1, char const *s2);
/**

	* @brief Concatène deux chaînes de caractères
		en tenant compte de la taille du buffer de destination.
 *

	* Cette fonction ajoute la chaîne source (src) à
		la fin de la chaîne de destination (dst) en s'assurant

	* que la taille totale du buffer de destination (dstsize)
		n'est pas dépassée. La chaîne de destination
 * 			résultante sera toujours terminée par un caractère nul ('\0'),
				sauf si dstsize est 0 ou si la longueur
 * 					de la chaîne de destination initiale est
 						supérieure ou égale à dstsize.
 *
 * @param dst La chaîne de destination.
 * @param src La chaîne source à ajouter à la chaîne de destination.
 * @param dstsize La taille totale du buffer de destination,
	y compris l'espace pour le caractère nul.
 * @return La longueur totale de la chaîne qu'elle a essayé de créer,
	c'est-à-dire la longueur initiale de dst
		plus la longueur de src.
			Si la valeur retournée est supérieure ou égale à dstsize,
				cela signifie
 *					que la chaîne a été tronquée.
 */
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
/**
 * Copie jusqu'à dstsize - 1 caractères de la chaîne src vers dst,
 * en terminant par un caractère nul ('\0'). Si la longueur de src
 * est supérieure ou égale à dstsize, la chaîne résultante dans dst
 * ne sera pas terminée par un caractère nul.
 *
 * @param dst      Le buffer de destination où la chaîne sera copiée.
 * @param src      La chaîne source à copier.
 * @param dstsize  La taille du buffer de destination.

	* @return		La longueur totale de la
		chaîne que la fonction a essayé de créer,
			c'est-à-dire la longueur de src.
 */
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
/**
 * @brief Calcule la longueur d'une chaîne de caractères.
 *
 * Cette fonction prend en entrée une chaîne de caractères (const char *s)
 * et retourne la longueur de cette chaîne, c'est-à-dire le nombre de
 * caractères avant le caractère nul de fin '\0'.
 *
 * @param s La chaîne de caractères dont on veut connaître la longueur.
 * @return La longueur de la chaîne de caractères.
 */
size_t				ft_strlen(const char *s);
/**
 * ft_strmapi
	- Applique une fonction à chaque caractère d'une chaîne de caractères
		pour créer une nouvelle chaîne de caractères
			résultant des applications successives.
 *
 * @param s: La chaîne de caractères sur laquelle itérer.
 * @param f: La fonction à appliquer à chaque caractère.
 * 	Elle prend en paramètre
 *	l'index du caractère et le caractère lui-même,
	et retourne le nouveau caractère.
 *

	* @return: Une nouvelle chaîne de caractères
		résultant des applications successives
			de la fonction 'f' sur chaque caractère de 's'.
				Retourne NULL si l'allocation
					de mémoire échoue.
 */
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/**
 * @brief Compare les deux chaînes de caractères s1 et s2 jusqu'à n caractères.
 *

	* Cette fonction compare les deux chaînes
		de caractères s1 et s2 jusqu'à un maximum
			de n caractères. Elle retourne un entier inférieur,
				égal ou supérieur à zéro si
 					s1 est respectivement inférieure, égale ou supérieure à s2.
 *
 * @param s1 La première chaîne de caractères à comparer.
 * @param s2 La deuxième chaîne de caractères à comparer.
 * @param n Le nombre maximum de caractères à comparer.
 * @return Un entier négatif, zéro ou positif selon que s1 est respectivement
 *         inférieure, égale ou supérieure à s2.
 */
int					ft_strncmp(const char *s1, const char *s2, size_t n);
/**

	* @brief Trouve la première occurrence de la
		sous-chaîne 'needle' dans la chaîne 'haystack',
			en ne recherchant que dans les 'len'
				premiers caractères de 'haystack'.
 *
 * @param haystack La chaîne dans laquelle rechercher.
 * @param needle La sous-chaîne à rechercher.
 * @param len Le nombre maximum de caractères à examiner dans 'haystack'.
 * @return Un pointeur sur le début de la sous-chaîne trouvée,
	ou NULL si 'needle' n'est pas trouvée
 *         dans les 'len' premiers caractères de 'haystack'.
 */
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);

/**
 * @brief Trouve la dernière occurrence d'un caractère dans une chaîne.
 *
 * Cette fonction recherche la dernière occurrence du caractère 'c'
 * (interprété comme un unsigned char) dans la chaîne pointée par 's'.
 *
 * @param s La chaîne de caractères dans laquelle chercher.
 * @param c Le caractère à rechercher.

	* @return Un pointeur sur la dernière occurrence
		du caractère 'c' dans la chaîne 's',
 *			ou NULL si le caractère n'est pas trouvé.
 */
char				*ft_strrchr(const char *s, int c);
/**
 * ft_strtrim
	- Supprime les caractères spécifiés du début et de la fin d'une chaîne.
 * @s1: La chaîne de caractères à trimmer.
 * @set: La chaîne de caractères contenant les caractères à supprimer.
 *
 * Cette fonction alloue (avec malloc) et retourne une copie de la chaîne 's1',
 * sans les caractères spécifiés dans 'set' au début et à la fin de la chaîne.
 * Si l'allocation échoue, la fonction retourne NULL.
 *

	* Retourne: Une nouvelle chaîne de caractères
		trimmée ou NULL si l'allocation échoue.
 */
char				*ft_strtrim(char const *s1, char const *set);
/**
 * @brief Extrait une sous-chaîne d'une chaîne donnée.
 *
 * Cette fonction alloue (avec malloc) et retourne une nouvelle chaîne de
 * caractères, qui est une copie de la sous-chaîne de la chaîne 's'. La
 * sous-chaîne commence à l'index 'start' et a une longueur maximale de 'len'.
 *
 * @param s La chaîne de caractères source.
 * @param start L'index de début de la sous-chaîne dans la chaîne source.
 * @param len La longueur maximale de la sous-chaîne.
 * @return La nouvelle chaîne de caractères, ou NULL si l'allocation échoue.
 */
char				*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief Convertit une lettre majuscule en minuscule.
 *
 * Cette fonction prend un caractère en entrée et le convertit en minuscule
 * s'il s'agit d'une lettre majuscule. Si le caractère n'est pas une lettre
 * majuscule, il est retourné tel quel.
 *
 * @param c Le caractère à convertir.
 * @return Le caractère converti en minuscule si c'est une lettre majuscule,
 *         sinon le caractère original.
 */
int					ft_tolower(int c);
/**
 * @brief Convertit une lettre minuscule en majuscule.
 *
 * Cette fonction prend un caractère en entrée et le convertit en majuscule
 * s'il s'agit d'une lettre minuscule. Si le caractère n'est pas une lettre
 * minuscule, il est renvoyé tel quel.
 *
 * @param c Le caractère à convertir.
 * @return Le caractère converti en majuscule si c'est une lettre minuscule,
 *         sinon le caractère original.
 */
int					ft_toupper(int c);

#endif
