#ifndef TEXT_H
#define TEXT_H
void put20nos(FILE file)
{
	int i;
	for (i=0;i++;i<20)
	{
		fgetw(i,file);
	}
	return 0;
}
void read20nos(FILE file)
{
	int i;
	while(!feof(file))
	{
		fscanf(file, "%d", &i);
		printf("%i/n",i);
	}
	return 0;
}
#endif
