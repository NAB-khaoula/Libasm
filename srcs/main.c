/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabouss <knabouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 10:57:12 by knabouss          #+#    #+#             */
/*   Updated: 2020/12/14 13:15:35 by knabouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>

size_t 	ft_strlen(char *str);
ssize_t	ft_write(unsigned int fd, const char *buf, size_t count);
ssize_t	ft_read(unsigned int fd, const char *buf, size_t count);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char   	*ft_strdup(const char *src);

int main()
{
	printf("testing my functions\n");
	/* testing ft_write*/
	// int fd;
	// int fd1;
	// char	*str;
	
	// str = (char *)malloc(255);
	// str = "hello world";
	// fd = open("not_existing", O_WRONLY);
	// fd1 = open("existing_file", O_CREAT | O_RDWR);
	// printf("----ft_write----\n");
	// printf("return of ft_write ===> %zu\n", ft_write(fd1, str, 12));
	// printf("printing the errno ===> %d\n", errno);
	// printf("****************\n");
	// printf("----write----\n");
	// printf("return of write    ===> %zu\n", write(fd1, str, 12));
	// printf("printing the errno ===> %d\n", errno);
	// printf("****************\n");
	// printf("----ft_write----\n");
	// printf("\nreturn of ft_write ===> %zu\n", ft_write(0, str, 12));
	// printf("printing the errno   ===> %d\n", errno);
	// printf("****************\n");
	// printf("----write----\n");
	// printf("\nreturn of write  ===> %zu\n", write(0, str, 12));
	// printf("printing the errno ===> %d\n", errno);
	// printf("****************\n");


	
	/*********************************************************/
	/*testing ft_read*/
	// int fd;
	// int fd1;
	// int i;
	// int j;
	// char	*str;
	
	// str = (char *)malloc(255);
	// str = "hello world";
	// fd = open("not_existing", O_WRONLY);
	// fd1 = open("existing_file", O_CREAT | O_RDWR);
	//ft_read(fd1, str, 12);
	// printf("----ft_read----\n");
	// printf("return of ft_read ==> %d\n", i);
	// printf("printing the errno ===> %d\n", errno);
	// printf("****************\n");
	//read(fd1, str, 12);
	// printf("----read----\n");
	// printf("return of read ==> %d\n", j);
	// printf("printing the errno ===> %d\n", errno);
	// printf("****************\n");
	// printf("----ft_read----\n");
	// i = ft_read(0, str, 12);
	// printf("\nreturn of ft_read ==> %d\n", i);
	// printf("printing the errno ===> %d\n", errno);
	// printf("****************\n");
	// printf("----read----\n");
	// j = read(0, str, 12);
	// printf("\nreturn of read ==> %d\n", j);
	// printf("printing the errno ===> %d\n", errno);
	// printf("****************\n");
	/*********************************************************/



	/*testing ft_strlen*/
	// char *str;
	// str = (char *)malloc(17);
	// str = "";
	// printf("ft_strlen ===> |%zu|\n", ft_strlen(str));
	// printf("strlen    ===> |%zu|\n", strlen(str));
	// printf("****************************\n");
	// str = "kikouelnsdjk";
	// printf("ft_strlen ===> |%zu|\n", ft_strlen(str));
	// printf("strlen    ===> |%zu|\n", strlen(str));
	// str = NULL;
	// printf("ft_strlen ===> |%zu|\n", ft_strlen(str));
	// printf("strlen    ===> |%zu|\n", strlen(str));
	/*********************************************************/


	
	/*testing ft_strcpy*/
	// char *src;
	// char *dst;
	// src = (char *)malloc(200);
	// dst = (char *)malloc(200);
	// src = "here is a copied string";
	// printf("ft_strcpy ===> %s\n", ft_strcpy(dst, src));
	// printf("strcpy    ===> %s\n", strcpy(dst, src));
	// printf("****************************\n");
	// src = "";
	// printf("ft_strcpy ===> %s\n", ft_strcpy(dst, src));
	// printf("strcpy    ===> %s\n", strcpy(dst, src));
	// printf("*****segfault tests*************\n");
	// src = NULL;
	// printf("ft_strcpy ===> %s\n", ft_strcpy(dst, src));
	// printf("strcpy    ===> %s\n", strcpy(dst, src));
	// dst = NULL;
	// printf("ft_strcpy ===> %s\n", ft_strcpy(dst, src));
	// printf("strcpy    ===> %s\n", strcpy(dst, src));
	/*********************************************************/
	

	/*testing ft_strcmp*/
	// char *src;
	// char *dst;
	// src = "a";
	// dst = "s";
	// printf("ft_strcmp ===> %d\n", ft_strcmp(dst, src));
	// printf("strccmp   ===> %d\n", strcmp(dst, src));
	// src = "";
	// dst = "";
	// printf("ft_strcmp ===> %d\n", ft_strcmp(dst, src));
	// printf("strccmp   ===> %d\n", strcmp(dst, src));
	// src = "";
	// dst = "s";
	// printf("ft_strcmp ===> %d\n", ft_strcmp(dst, src));
	// printf("strccmp   ===> %d\n", strcmp(dst, src));
	// src = "a";
	// dst = "";
	// printf("ft_strcmp ===> %d\n", ft_strcmp(dst, src));
	// printf("strccmp   ===> %d\n", strcmp(dst, src));
	// src = "auyjkhgjugvghffjgf";
	// dst = "skjhuyjgjhfyghftfg";
	// printf("ft_strcmp ===> %d\n", ft_strcmp(dst, src));
	// printf("strccmp   ===> %d\n", strcmp(dst, src));
	// src = "aaaaaaa";
	// dst = "aaaaaaa";
	// printf("ft_strcmp ===> %d\n", ft_strcmp(dst, src));
	// printf("strccmp   ===> %d\n", strcmp(dst, src));
	// printf("segfault test\n");
	// src = NULL;
	// dst = NULL;
	// printf("ft_strcmp ===> %d\n", ft_strcmp(dst, src));
	// printf("strccmp   ===> %d\n", strcmp(dst, src));
	/*************************************************/


	/*testing ft_strdup*/
	// char *src;
	// char *dup;
	// src = "hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string hello world, here i'm trying to write a very long string ";
	// printf("ft_strcpy ===> %s\n", dup = ft_strdup(src));
	// printf("len of the dup %lu\n", strlen(dup));
	// printf("strcpy    ===> %s\n", dup = strdup(src));
	// printf("len of the dup %lu\n", strlen(dup));
	// src = "";
	// printf("ft_strcpy ===> %s\n", dup = ft_strdup(src));
	// printf("len of the dup %lu\n", strlen(dup));
	// printf("strcpy    ===> %s\n", dup = strdup(src));
	// printf("len of the dup %lu\n", strlen(dup));
	// printf("*********segfault test************\n");
	// src = NULL;
	// printf("ft_strcpy ===> %s\n", dup = ft_strdup(src));
	// printf("len of the dup %lu\n", strlen(dup));
	// printf("strcpy    ===> %s\n", dup = strdup(src));
	// printf("len of the dup %lu\n", strlen(dup));
	/************************************************/
}
