class Exchange {
	
	private:
		float inputWon; // 환전할 원화
		float exchangeRate; // 환전할 외화
		int choiceRate; // 환전할 외화의 숫자
		char choiceNation[4]; // 환전할 외화의 문자열
		float resultCash;

	public:
		void inputTask();
		void choiceTask();
		void exchangeResult();

};
