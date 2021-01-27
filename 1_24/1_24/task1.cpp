#define _CRT_SECURE_NO_WARNINGS 1

while (1)
{
	if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
	{
		click++;
		HAL_Delay(1000);
		int i = 500;
		while (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
		{
			click --;
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
			HAL_Delay(i);
			HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
			HAL_Delay(i);
			i -= 20;
			if (i <= 0)
				break;
		}
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, 0);
		HAL_Delay(20);
		while (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
			;
	}



	if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
	{
		HAL_Delay(5);
		if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
		{
			int i = 500;
			HAL_Delay(300);
			while (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
			{
				HAL_Delay(i);
				if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
				{
					
					click--;
					HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
					HAL_Delay(i);
					HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
					
					i -= 20;
					if (i <= 0)
						break;
				}
			}
			HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, 0);
			HAL_Delay(5);
			while (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
				;
			click++;
			HAL_Delay(5);
			j = 300000;
			while (j--)
			{
				if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
				{
					HAL_Delay(5);
					if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0)
					{
						while (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == 0);
						click++;
					}
				}
			}
		}
	}
	if (click%2)
	{
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
		HAL_Delay(500);
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
		HAL_Delay(500);
		click = 0;
	}


	if (!click %2&&click!=0 )
	{
		HAL_Delay(1000);
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13);
	}
	/* USER CODE END WHILE */

	/* USER CODE BEGIN 3 */
}