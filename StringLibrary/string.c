#include "string.h"

/**
  * @brief implementaion of Mmemchr it is seacrh about character
  * @param str(pointer to string) 
  * @param c(it is a character)
  * @param n(it is a Length)
  * @retval S_Char (void pointer)
*/
void *my_memchr(const void *str, uint32 c, uint32 n)
{
    uint8 *Ptr = (uint8 *)str;
    uint8 *S_Char = NULL;

    if (!str)
    {
        printf("Function cant work, please enter a string\n");
    }
    else
    {
        while (n--)
        {
            if ((*Ptr != (uint8) c))
            {
                Ptr++; 
            }
            else
            {
                S_Char = Ptr;
                break;
            }
        }
    }
    return (S_Char);   
}

/**
  * @brief implementaion of Memcmp it is compare two string
  * @param str1(pointer to first string) 
  * @param str2(pointer to second string) 
  * @param Length(it is a Length)
  * @retval RetStatus 
*/
uint32 My_memcmp(const void *str1, const void *str2,  uint32 Length)
{
  uint32 RetStatus = 0;
  uint8 *TempPtr = (uint8 *)str1;
  uint8 *SecPtr = (uint8 *)str1;

  if(TempPtr == SecPtr)
  {
    RetStatus = 0;
  }
  else
  {
    while (Length)
    {
      if (TempPtr < SecPtr)
      {
        RetStatus = -1;
        break;
      }
      else if(TempPtr > SecPtr)
      {
        RetStatus = 1;
        break;
      }
      else
      {
        Length--;
        TempPtr++;
        SecPtr++;
      }
        
    }
    
  }
  return (RetStatus);
}

/**
  * @brief implementaion of Memcpy it is copy Length of str to dest
  * @param str(pointer to first string) 
  * @param dest(pointer to second string) 
  * @param length(it is a Length)
  * @retval DestPtr
*/
void *My_memcpy(void *dest, const void * src,  uint32 Length)
{
    uint8 *DestPtr = dest;
    const uint8 *SrcPtr = src;

    if ((!dest) || (!src))
    {
        printf("Error\n");
    }
    else
    {
        while (Length--)
        {
            *DestPtr++ = *SrcPtr++;
        }
    }
    return (DestPtr);
}

/**
  * @brief implementaion of Memmove it is copy Length of str to str2
  * @param str1(pointer to first string where contect to be copied ) 
  * @param str2(pointer to second string data to be copied) 
  * @param length(it is a Length)
  * @retval Ptr1
*/
void *My_memmove(void *str1, const void *str2,  uint32 Length)
{
    uint8 *Ptr1 = str1;
    const uint8 *Ptr2 = str2;

    if ((!str1) || (!str2))
    {
        printf("Error\n");
    }
    else
    {
        while (Length)
        {
            *Ptr1++ = *Ptr2++;
            Length--;
        } 
    }
    return (Ptr1);
}

/**
  * @brief implementaion of Memset it is copies the character c  to the first n characters of the string pointed to, by the argument str
  * @param str1( This is a pointer to the block of memory to fill. ) 
  * @param c(This is the value to be set.) 
  * @param Length(it is a Length)
  * @retval Ptr
*/
void *My_memset(void *str,  uint8 c,  uint32 Length)
{
    uint8 *Ptr = str;

    if (!str)
    {
        printf("Error !!\n");
    }
    else
    {
        while (Length)
        {
            *Ptr++ = c;
            Length--;
        }
    }
    return (Ptr);
}

/**
  * @brief implementaion of Strcat it appends the string pointed to by src to the end of the string pointed to by dest.
  * @param dset(  This is pointer to the destination array) 
  * @param src(This is the string to be appended) 
  * @param Length(it is a Length)
  * @retval dest
*/
uint8 *My_strcat(uint8 *dest, const uint8 *src)
{
    uint8 *DestPtr = dest; 
    const uint8 *SrctPtr = src; 

    if((!DestPtr) || (!SrctPtr))
    {
        printf("Error\n");
    }
    else
    {
        while (*DestPtr != '\0')
        {
            DestPtr++; 
        }
        while (*SrctPtr != '\0')
        {
            *DestPtr++ = *SrctPtr++; 
        }
        *DestPtr = '\0';
    }
    return(dest);
}

/**
  * @brief implementaion of Strchr itsearches for the first occurrence of the character c
  * @param str(This is the C string to be scanned.) 
  * @param c(This is the character to be searched in str.)
  * @retval Ptr
*/
uint8 *My_strchr(const uint8 *str, uint32 c)
{
    uint8 *Ptr = (uint8 *)str;

    if (!str)
    {
        printf("Error !! Enter Valid String\n");
    }
    else
    {
        while ((*Ptr != (uint8 )c) && (*Ptr != '\0'))
        {
            Ptr++;
        }
        if (*Ptr == (uint8 )c)
        {
            return Ptr;
        }
        else return NULL;  
    }
    return (Ptr);
}

/**
  * @brief implementaion of Strcmp compares the string pointed to, by str1 to the string pointed to by str2.
  * @param str1(This is the first string to be compared.) 
  * @param str2(This is the second string to be compared.)
  * @retval (*ptr1 - *ptr2)
*/
uint32 My_strcmp(const uint8 *str1, const uint8 *str2)
{
    uint8 *ptr1 = ( uint8 *)str1;
    uint8 *ptr2 = ( uint8 *)str2;


    if ((!str1) || (!str2))
    {
        printf("Error !! Enter Two Strings\n");
    }
    else
    {
        while (*ptr1)
        {
            if (*ptr1 != *ptr2)
            {
                break;
            }
            else
            {
                ptr1++;
                ptr2++;
            } 
        } 
    }
    return (*ptr1 - *ptr2);
}

/**
  * @brief implementaion of Strcmp copies the string pointed to, by src to dest.
  * @param dest(where the content to be copied) 
  * @param str(This is the string to be copied)
  * @retval destptr
*/
uint8 *My_strcpy(uint8 *dest, const uint8 *src)
{
    uint8 *destptr = dest;

    if (!src)
    {
        printf("Error!!, Nothing To Copy\n");
        return NULL;
    }
    else
    {
        while (*src)
        {
            *destptr++ = *src++;
        }
        *destptr = '\0';
    }
    return destptr;
}

/**
  * @brief implementaion of Strcspn calculates the length of the initial segment of str1, which consists entirely of characters not in str2
  * @param str1(This is the main C string to be scanned) 
  * @param str2(This is the string containing a list of characters to match in str1)
  * @retval (str1Ptr - str1)
*/
uint32 My_strcspn(const uint8 *str1, const uint8 *str2)
{
    const uint8* str1Ptr = str1;
    const uint8* str2Ptr = str2;

   for ( str1Ptr = str1; *str1Ptr != '\0'; ++str1Ptr)
   {
        for ( str2Ptr = str2; *str2Ptr != '\0'; ++str2Ptr)
        {
            if (*str1Ptr == *str2Ptr)
            {
                return (str1Ptr - str1);
            }
            
        }
   }
}

/**
  * @brief implementaion of Strncat appends the string pointed to by src to the end of the string pointed to by dest
  * @param dest(This is pointer to the destination array) 
  * @param str(This is the string to be appended.)
  * @param Length(This is the maximum number of characters to be appended.)
  * @retval (dest)
*/
uint8 *My_strncat(uint8 *dest, const uint8 *src,  uint32 Length)
{
    uint8 *DestPtr = dest; 
    const uint8 *SrctPtr = src; 

    if ((!dest) || (!src))
    {
        return NULL;
    }
    else
    {
        while (*DestPtr != '\0')
        {
            DestPtr++;
        }
        while (Length--)
        {
            if (!(*DestPtr++ = *src++))
            {
                return dest;
            }
            *DestPtr = '\0';
        }
        return (dest);
    }
}

/**
  * @brief implementaion of Strncmp compares at most the first n bytes of str1 and str2.
  * @param str1(This is the first string to be compared.) 
  * @param str2(This is the second string to be compared.)
  * @param Length(This is the maximum number of characters to be appended.)
  * @retval (RetStatus)
*/
uint32 My_strncmp(const uint8 *str1, const uint8 *str2,  uint32 Length)
{
    uint32 Counter = 0;
    uint32 RetStatus = 0;
    do
    {
        for ( Counter = 0; str1[Counter] == str2[Counter]; Counter++)
        {
            if (str1[Counter] == 0)
            {
                RetStatus = 0;
            }
            else
            {
                RetStatus = (str1[Counter] - str2[Counter]);
            }
        }
    } while (--Length > 0);
    
    return RetStatus;
}

/**
  * @brief implementaion of Strncmp compares at most the first n bytes of str1 and str2.
  * @param dest(This is the pointer to the destination array where the content is to be copied.) 
  * @param src(This is the string to be copied.)
  * @param Length(The number of characters to be copied from source.)
  * @retval (str1ptr)
*/
uint8 *My_strncpy(uint8 *str1, const uint8 *str2,  uint32 Length)
{
    uint8 *str1ptr = str1;
   const uint8 *str2ptr = str2;

    if (!str2)
    {
        printf("Error!!, Nothing To Copy\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < Length; i++)
        {
            *str1ptr++ = *str2ptr++; 
        }
        *str1ptr = '\0';
    }
    return (str1ptr);
    
}