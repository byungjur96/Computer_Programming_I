//
//  main.c
//  컴퓨터 프로그래밍 과제 6-6(2)
//
//  Created by Byungju Chae on 2016. 6. 15..
//  Copyright © 2016년 Byungju Chae. All rights reserved.
//

#include <string.h>

int main () {
    char str[]="Donald John Trump (born June 14, 1946) is an American businessman, politician, television personality, author, and candidate for the Republican nomination for President of the United States in the 2016 election. Trump is the Chairman and President of The Trump Organization, and the founder of the gaming and hotel enterprise, Trump Entertainment Resorts, now owned by Carl Icahn. Trump is from Queens in New York City, and is a son of real estate developer, Trump Fred. While attending college, Trump worked for his fathers firm, Elizabeth Trump & Son. Upon graduating from college in 1968, he joined the company, and in 1971 was given control, renaming the company The Trump Organization. Since then, Trump has built casinos, golf courses, hotels, and other properties, many of which bear his name. Trump and his businesses, as well as his three marriages, have received prominent media exposure. He hosted The Apprentice, a popular NBC reality show, from 2004 to 2015. Trump first campaigned for the U.S.presidency in 2000, winning two Reform Party primaries.On June 16, 2015, he again announced his candidacy for president, this time as a Republican.Trump became known for his opposition to illegal immigration and free trade agreements, as well as his frequently non - interventionist views on foreign policy, and quickly emerged as the Republican nomination front - runner. As of March 23, 2016, Trump has won 21 contests in the 2016 Republican presidential primaries.";
    char *token;
    char cut[] = " .,()-&";
    int count=0,size;
    token=strtok(str,cut);
    while (token !=NULL) {
        if (strcmp(token, "Trump")==0)
            count++;
        token=strtok(NULL,cut);}
    printf("There are %d \"Trump\" in the sentences\n", count);
    return 0;
    
}