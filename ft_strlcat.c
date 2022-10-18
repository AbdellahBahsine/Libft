#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t dest_len;
    size_t src_len;
    size_t length;
    size_t i;
    size_t j;
    i = 0;
    if (!dst && dstsize == 0)
        dest_len = 0;
    else
        dest_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    length = src_len + dest_len;
    j = dest_len;
    if (dest_len >= dstsize)
        return (src_len + dstsize);
    while(i < dstsize - dest_len - 1 && src[i])
    {
        dst[j++] = src[i];
        i++;
    }
    dst[j] = '\0';
    return (length);
}
