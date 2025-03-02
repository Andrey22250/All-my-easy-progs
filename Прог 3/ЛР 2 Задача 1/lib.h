#pragma once
#define len_name 35
#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void clean()  //������� ������
{
	while (getchar() != '\n');
}

struct CPU
{
	char *name_cpu;
	int frequency;
	int cores;
	int treads;
};

struct GPU
{
	char *name_gpu;
	int vram;
	int TDP;
	int min_TDP;
};

struct RAM
{
	char *type_ddr;
	int frequency, mem;
};

struct Motherboard
{
	char *name_motherboard, *chipset;
};

struct PC
{
	CPU cpu;
	GPU gpu;
	RAM ram;
	Motherboard motherboard;
	float price;
};

typedef enum Status { create, working, finished };

struct Build
{
	int number;
	PC pc;
	char* client;
	Status status;
};

//��������������� �������
char* StatusToString(Status status) {
	char* strStatus = (char*)calloc(len_name, sizeof(char));

	switch (status)
	{
	case create:
		strcpy(strStatus, "������");
		break;
	case working:
		strcpy(strStatus, "� ������");
		break;
	case finished:
		strcpy(strStatus, "����� � ������");
		break;
	default:
		break;
	}
	return strStatus;
}

//�������� �������


//������������� ��������

CPU *init_cpu(char* name_cpu, int frequency, int cores, int treads)
{
	if (strlen(name_cpu) != 0 && frequency > 0 && cores > 0 && treads > 0)
	{
		CPU* cpu = (CPU*)calloc(1, sizeof(CPU));
		cpu->name_cpu = (char*)calloc(len_name, sizeof(char));
		strcpy(cpu->name_cpu, name_cpu);
		cpu->frequency = frequency;
		cpu->cores = cores;
		cpu->treads = treads;
		return cpu;
	}
	else
	{
		printf("�������, ����� �� ���������...");
		exit(-1);
	}
}

GPU* init_gpu(char* name_gpu, int vram, int TDP)
{
	if (strlen(name_gpu) != 0 && vram > 0 && TDP > 0)
	{
		GPU* gpu = (GPU*)calloc(1, sizeof(GPU));
		gpu->name_gpu = (char*)calloc(len_name, sizeof(char));
		strcpy(gpu->name_gpu, name_gpu);
		gpu->vram = vram;
		gpu->TDP = TDP;
		gpu->min_TDP = TDP * 0.85;
		return gpu;
	}
	else
	{
		printf("�������, ����� �� ���������...");
		exit(-1);
	}
}

RAM* init_RAM(char* type_ddr, int frequency, int mem)
{
	if (mem > 0 && frequency > 0)
	{
		RAM* ram = (RAM*)calloc(1, sizeof(RAM));
		ram->type_ddr = (char*)calloc(len_name, sizeof(char));
		strcpy(ram->type_ddr, type_ddr);
		ram->frequency = frequency;
		ram->mem = mem;
		return ram;
	}
	else
	{
		printf("�������, ����� �� ���������...");
		exit(-1);
	}
}

Motherboard* init_motherboard(char* name_motherboard, char* chipset)
{
	if (strlen(name_motherboard) != 0 && strlen(chipset) != 0)
	{
		Motherboard* motherboard = (Motherboard*)calloc(1, sizeof(Motherboard));
		motherboard->name_motherboard = (char*)calloc(len_name, sizeof(char));
		motherboard->chipset = (char*)calloc(len_name, sizeof(char));
		strcpy(motherboard->name_motherboard, name_motherboard);
		strcpy(motherboard->chipset, chipset);
		return motherboard;
	}
	else
	{
		printf("�������, ����� �� ���������...");
		exit(-1);
	}
}

PC* init_PC(CPU cpu, GPU gpu, RAM ram, Motherboard motherboard, float price)
{
	if (price > 0)
	{
		PC* pc = (PC*)calloc(1, sizeof(PC));
		pc->cpu = cpu;
		pc->gpu = gpu;
		pc->ram = ram;
		pc->motherboard = motherboard;
		pc->price = price;
		return pc;
	}
	else
	{
		printf("�������, ����� �� ���������...");
		exit(-1);
	}
}

Build* init_build(int number, PC pc, char* client, Status status)
{
	if (number > 0 && strlen(client) != 0 && status >= create && status <= finished)
	{
		Build* build = (Build*)calloc(1, sizeof(Build));
		build->client = (char*)calloc(len_name, sizeof(char));
		strcpy(build->client, client);
		build->number = number;
		build->pc = pc;
		build->status = status;
		return build;
	}
	else
	{
		printf("�������, ����� �� ���������...");
		exit(-1);
	}
}

//���� ��������

CPU input_cpu()
{
	printf("\n���� ���������� ����������\n");
	char* name_cpu = (char*)calloc(len_name, sizeof(char));
	int frequency;
	int cores, treads;
	printf("������� �������� ����������: ");
	gets_s(name_cpu, len_name);
	do
	{
		printf("������� ������� ���������� � ���: ");
		scanf("%d", &frequency);
		clean();
	} while (frequency<=0 || frequency>=7000);
	do
	{
		printf("������� ���-�� ����: ");
		scanf("%d", &cores);
		clean();
	} while (cores <= 0 || cores>256);
	do
	{
		printf("������� ���-�� �������: ");
		scanf("%d", &treads);
		clean();
	} while (treads <= 0 && treads>512);
	return *init_cpu(name_cpu, frequency, cores, treads);
}

GPU input_gpu()
{
	printf("\n���� ���������� ����������\n");
	char* name_gpu = (char*)calloc(len_name, sizeof(char));
	int vram, TDP;
	printf("������� �������� ����������: ");
	gets_s(name_gpu, len_name);
	do
	{
		printf("������� ����� ����������� � ��: ");
		scanf("%d", &vram);
		clean();
	} while (vram <= 0);
	do
	{
		printf("������� TDP � ������: ");
		scanf("%d", &TDP);
		clean();
	} while (TDP <= 0);
	return *init_gpu(name_gpu, vram, TDP);
}

RAM input_ram()
{
	printf("\n���� ���������� ���\n");
	char* type_ddr = (char*)calloc(len_name, sizeof(char));
	int frequency, mem;
	printf("������� ��� ���: ");
	gets_s(type_ddr, len_name);
	do
	{
		printf("������� ������� ��� � ���: ");
		scanf("%d", &frequency);
		clean();
	} while (frequency <= 0 || frequency >= 12000);
	do
	{
		printf("������� ����� ���: ");
		scanf("%d", &mem);
		clean();
	} while (mem <= 0);
	return *init_RAM(type_ddr, frequency, mem);
}

Motherboard input_motherboard()
{
	printf("\n���� ���������� ����������� �����\n");
	char* name_motherboard = (char*)calloc(len_name, sizeof(char));
	char* chipset = (char*)calloc(len_name, sizeof(char));
	printf("������� �������� ����������� �����: ");
	gets_s(name_motherboard, len_name);
	printf("������� ������: ");
	gets_s(chipset, len_name);
	return *init_motherboard(name_motherboard, chipset);
}

PC input_pc()
{
	float price;
	printf("\n���� ���������� � ����������\n");
	do
	{
		printf("������� ���� ��: ");
		scanf("%f",&price);
		clean();
	} while (price <= 0);
	return *init_PC(input_cpu(), input_gpu(), input_ram(), input_motherboard(), price);
}

Build input_build()
{
	int number;
	char* client = (char*)calloc(len_name, sizeof(char));
	printf("���� ������ ������\n");
	do
	{
		printf("������� ����� ������: ");
		scanf("%d", &number);
		clean();
	} while (number <= 0);
	printf("������� ��� �������: ");
	gets_s(client, len_name);
	Status status;
	do
	{
		printf("������� ������ ������, ���\n0 - ����� ������\n1 - ����� � ������\n2 - ����� ��������\n��� �����: ");
		scanf("%d", &status);
		clean();
	} while (status < 0 && status > 2);
	return *init_build(number, input_pc(), client, status);
}

//����� ��������
int Output_PC_spec(PC pc)
{
	printf("\n���������� � ������:\n\n");
	printf("���������: %s, %d ���, %d ����, %d �������\n", pc.cpu.name_cpu, pc.cpu.frequency, pc.cpu.cores, pc.cpu.treads);
	printf("����������: %s, %d VRAM, %d TDP\n", pc.gpu.name_gpu, pc.gpu.vram, pc.gpu.TDP);
	printf("���: %s, %d �������, %d �����\n", pc.ram.type_ddr, pc.ram.frequency, pc.ram.mem);
	printf("����������� �����: %s, %s ������\n", pc.motherboard.name_motherboard, pc.motherboard.chipset);
	printf("���� ������: %.2f\n", pc.price);
	return 1;
}

int Output_build(Build build)
{
	printf("\n���������� � ������:\n\n");
	printf("����� ������: %d\n", build.number);
	printf("������ - %s\n", build.client);
	printf("������ - %s\n", StatusToString(build.status));
	return 1;
}

//�������������� �������


void undervolt_gpu(PC *pc)
{
	if (pc->gpu.TDP > pc->gpu.min_TDP)
	{
		pc->gpu.TDP -= 3;
		if (pc->gpu.TDP < pc->gpu.min_TDP)
			pc->gpu.TDP = pc->gpu.min_TDP;
	}
	else printf("��������� ������ undervolt'�");
}

void ChangeStatus(Build *build, Status newstatus) 
{
	if (newstatus >= create && newstatus <= finished) {
		build->status = newstatus;
		printf("��������� ������ ������� ��������!\n");
	}
	else {
		printf("�������, ����� �� ���������...");
		exit(-1);
	}
}

void cleanmemory(Build *build)
{
	free(build->pc.cpu.name_cpu);
	free(build->pc.gpu.name_gpu);
	free(build->pc.ram.type_ddr);
	free(build->pc.motherboard.name_motherboard);
	free(build->pc.motherboard.chipset);
	free(build->client);
}