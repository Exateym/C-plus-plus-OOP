#pragma once

namespace Risovalka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Media;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class PaintForm : public System::Windows::Forms::Form
	{
	public:
		PaintForm(void);

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PaintForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::MenuStrip^ TopMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ canvasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ createToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearCanvasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ soundModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ freeToolStripMenuItem;

	private: System::Windows::Forms::GroupBox^ OuterGroupBox;
	private: System::Windows::Forms::GroupBox^ InnerRightGroupBox;

	private: System::Windows::Forms::GroupBox^ InnerLeftGroupBox;
	private: System::Windows::Forms::GroupBox^ InnerCentralGroupBox;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::SplitContainer^ splitContainer2;
	private: System::Windows::Forms::Button^ ButtonRed;
	private: System::Windows::Forms::Button^ ButtonBlue;

	private: System::Windows::Forms::Button^ ButtonCyan;

	private: System::Windows::Forms::Button^ ButtonGreen;

	private: System::Windows::Forms::Button^ ButtonYellow;

	private: System::Windows::Forms::Button^ ButtonOrange;
	private: System::Windows::Forms::Button^ ButtonPurple;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownBrushSize;
	private: System::Windows::Forms::Label^ labelBrushSize;
	private: System::Windows::Forms::RadioButton^ radioButtonErase;
	private: System::Windows::Forms::RadioButton^ radioButtonDraw;
	private: System::Windows::Forms::Label^ labelMode;
	private: System::Windows::Forms::PictureBox^ pictureBoxPalette;

	private: System::Windows::Forms::PictureBox^ pictureBoxCanvas;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLength;

	private: System::Windows::Forms::Label^ labelLength;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidth;




	private: System::Windows::Forms::Label^ labelWidth;
	private: System::Windows::Forms::SplitContainer^ splitContainer3;
	private: System::Windows::Forms::ComboBox^ comboBoxInstruments;

	private: System::Windows::Forms::PictureBox^ pictureBoxInstrument;
	private: System::Windows::Forms::RadioButton^ radioButtonSquare;

	private: System::Windows::Forms::RadioButton^ radioButtonCircle;
	private: System::Windows::Forms::RadioButton^ radioButtonLine;


	private: System::Windows::Forms::Label^ labelShape;
	private: System::Windows::Forms::GroupBox^ groupBoxCreateCanvas;
	private: System::Windows::Forms::Label^ labelCreateCanvasHeight;

	private: System::Windows::Forms::Label^ labelCreateCanvasWidth;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownCreateHeight;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCreateWidth;
	private: System::Windows::Forms::Button^ buttonCreate;
	private: System::Windows::Forms::Label^ labelC;
	private: System::Windows::Forms::Label^ labelB;


	private: System::Windows::Forms::Label^ labelA;

	private: System::Windows::Forms::Label^ labelG;

	private: System::Windows::Forms::Label^ labelF;

	private: System::Windows::Forms::Label^ labelE;

	private: System::Windows::Forms::Label^ labelD;
	private: System::Windows::Forms::GroupBox^ groupBoxSoundDiagram;
	private: System::Windows::Forms::Label^ labelSoundDiagramMusicalInstrument;


	private: System::Windows::Forms::ComboBox^ comboBoxSoundDiagramInstrument;
	private: System::Windows::Forms::PictureBox^ pictureBoxSoundDiagram;


	private: System::Windows::Forms::Button^ buttonShowVisualisation;

private: System::Windows::Forms::NumericUpDown^ numericUpDownSoundDiagramOctave;
private: System::Windows::Forms::Label^ labelSoundDiagramOctave;


private: System::Windows::Forms::Button^ buttonSoundDiagramClose;
private: System::Windows::Forms::Label^ labelOctaveWhat;
private: System::Windows::Forms::Label^ labelCurrentNodePlaying;
private: System::Windows::Forms::PictureBox^ pictureBoxOctaveWhatPanel;
private: System::Windows::Forms::PictureBox^ pictureBoxOctaveWhatChosen;
private: System::Windows::Forms::Label^ labelSoundDiagramOctaveSheet;

private: System::Windows::Forms::GroupBox^ groupBoxExerciseKnowledge;
private: System::Windows::Forms::ToolStripMenuItem^ exerciseToolStripMenuItem;
private: System::Windows::Forms::Button^ buttonCheckResult;
private: System::Windows::Forms::Button^ buttonStartGame;
private: System::Windows::Forms::GroupBox^ groupBoxInputAnswer;
private: System::Windows::Forms::ComboBox^ comboBoxInstrumentChoise;
private: System::Windows::Forms::ComboBox^ comboBoxChoiseOctave;
private: System::Windows::Forms::Label^ labelJudgmentAnswer;
private: System::Windows::Forms::Label^ labelWaitingNotification;
private: System::Windows::Forms::Label^ labelRightOctave;
private: System::Windows::Forms::PictureBox^ pictureBoxRightInstrument;
private: System::Windows::Forms::ToolStripMenuItem^ localizationToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ russianToolStripMenuItem;
private: System::Windows::Forms::Button^ buttonCloseTest;
private: System::Windows::Forms::ToolStripMenuItem^ testToolStripMenuItem;
private: System::Windows::Forms::Button^ buttonCloseCreateCanvas;
private: System::Windows::Forms::RadioButton^ Pipette;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->TopMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->canvasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearCanvasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->soundModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->freeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exerciseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->testToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->localizationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->russianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OuterGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->InnerCentralGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->Pipette = (gcnew System::Windows::Forms::RadioButton());
			this->labelMode = (gcnew System::Windows::Forms::Label());
			this->radioButtonErase = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonLine = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonDraw = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCircle = (gcnew System::Windows::Forms::RadioButton());
			this->labelBrushSize = (gcnew System::Windows::Forms::Label());
			this->radioButtonSquare = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDownBrushSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelShape = (gcnew System::Windows::Forms::Label());
			this->labelWidth = (gcnew System::Windows::Forms::Label());
			this->labelLength = (gcnew System::Windows::Forms::Label());
			this->numericUpDownWidth = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLength = (gcnew System::Windows::Forms::NumericUpDown());
			this->InnerRightGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBoxPalette = (gcnew System::Windows::Forms::PictureBox());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->labelA = (gcnew System::Windows::Forms::Label());
			this->labelG = (gcnew System::Windows::Forms::Label());
			this->labelF = (gcnew System::Windows::Forms::Label());
			this->labelE = (gcnew System::Windows::Forms::Label());
			this->labelD = (gcnew System::Windows::Forms::Label());
			this->labelC = (gcnew System::Windows::Forms::Label());
			this->ButtonPurple = (gcnew System::Windows::Forms::Button());
			this->ButtonBlue = (gcnew System::Windows::Forms::Button());
			this->ButtonCyan = (gcnew System::Windows::Forms::Button());
			this->ButtonGreen = (gcnew System::Windows::Forms::Button());
			this->ButtonYellow = (gcnew System::Windows::Forms::Button());
			this->ButtonOrange = (gcnew System::Windows::Forms::Button());
			this->ButtonRed = (gcnew System::Windows::Forms::Button());
			this->InnerLeftGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->comboBoxInstruments = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBoxInstrument = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCanvas = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxCreateCanvas = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCloseCreateCanvas = (gcnew System::Windows::Forms::Button());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->labelCreateCanvasHeight = (gcnew System::Windows::Forms::Label());
			this->labelCreateCanvasWidth = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCreateHeight = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownCreateWidth = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBoxSoundDiagram = (gcnew System::Windows::Forms::GroupBox());
			this->labelSoundDiagramOctaveSheet = (gcnew System::Windows::Forms::Label());
			this->pictureBoxOctaveWhatChosen = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxOctaveWhatPanel = (gcnew System::Windows::Forms::PictureBox());
			this->labelCurrentNodePlaying = (gcnew System::Windows::Forms::Label());
			this->labelOctaveWhat = (gcnew System::Windows::Forms::Label());
			this->buttonSoundDiagramClose = (gcnew System::Windows::Forms::Button());
			this->buttonShowVisualisation = (gcnew System::Windows::Forms::Button());
			this->numericUpDownSoundDiagramOctave = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelSoundDiagramOctave = (gcnew System::Windows::Forms::Label());
			this->labelSoundDiagramMusicalInstrument = (gcnew System::Windows::Forms::Label());
			this->comboBoxSoundDiagramInstrument = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBoxSoundDiagram = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxExerciseKnowledge = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCloseTest = (gcnew System::Windows::Forms::Button());
			this->pictureBoxRightInstrument = (gcnew System::Windows::Forms::PictureBox());
			this->labelRightOctave = (gcnew System::Windows::Forms::Label());
			this->labelWaitingNotification = (gcnew System::Windows::Forms::Label());
			this->labelJudgmentAnswer = (gcnew System::Windows::Forms::Label());
			this->groupBoxInputAnswer = (gcnew System::Windows::Forms::GroupBox());
			this->comboBoxChoiseOctave = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxInstrumentChoise = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCheckResult = (gcnew System::Windows::Forms::Button());
			this->buttonStartGame = (gcnew System::Windows::Forms::Button());
			this->TopMenuStrip->SuspendLayout();
			this->OuterGroupBox->SuspendLayout();
			this->InnerCentralGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->BeginInit();
			this->InnerRightGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPalette))->BeginInit();
			this->InnerLeftGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInstrument))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCanvas))->BeginInit();
			this->groupBoxCreateCanvas->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCreateHeight))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCreateWidth))->BeginInit();
			this->groupBoxSoundDiagram->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOctaveWhatChosen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOctaveWhatPanel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSoundDiagramOctave))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSoundDiagram))->BeginInit();
			this->groupBoxExerciseKnowledge->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRightInstrument))->BeginInit();
			this->groupBoxInputAnswer->SuspendLayout();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// TopMenuStrip
			// 
			this->TopMenuStrip->ImageScalingSize = System::Drawing::Size(24, 24);
			this->TopMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->canvasToolStripMenuItem,
					this->soundModeToolStripMenuItem, this->exerciseToolStripMenuItem, this->localizationToolStripMenuItem
			});
			this->TopMenuStrip->Location = System::Drawing::Point(0, 0);
			this->TopMenuStrip->Name = L"TopMenuStrip";
			this->TopMenuStrip->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->TopMenuStrip->Size = System::Drawing::Size(1010, 24);
			this->TopMenuStrip->TabIndex = 0;
			// 
			// canvasToolStripMenuItem
			// 
			this->canvasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->createToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->openFileToolStripMenuItem, this->clearCanvasToolStripMenuItem
			});
			this->canvasToolStripMenuItem->Name = L"canvasToolStripMenuItem";
			this->canvasToolStripMenuItem->Size = System::Drawing::Size(57, 22);
			this->canvasToolStripMenuItem->Text = L"Canvas";
			this->canvasToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::canvasToolStripMenuItem_Click);
			// 
			// createToolStripMenuItem
			// 
			this->createToolStripMenuItem->Name = L"createToolStripMenuItem";
			this->createToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->createToolStripMenuItem->Text = L"Create canvas";
			this->createToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::createToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::saveAsToolStripMenuItem_Click);
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->openFileToolStripMenuItem->Text = L"Open file";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::openFileToolStripMenuItem_Click);
			// 
			// clearCanvasToolStripMenuItem
			// 
			this->clearCanvasToolStripMenuItem->Name = L"clearCanvasToolStripMenuItem";
			this->clearCanvasToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->clearCanvasToolStripMenuItem->Text = L"Clear canvas";
			this->clearCanvasToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::clearCanvasToolStripMenuItem_Click);
			// 
			// soundModeToolStripMenuItem
			// 
			this->soundModeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->freeToolStripMenuItem });
			this->soundModeToolStripMenuItem->Name = L"soundModeToolStripMenuItem";
			this->soundModeToolStripMenuItem->Size = System::Drawing::Size(85, 22);
			this->soundModeToolStripMenuItem->Text = L"Visualisation";
			// 
			// freeToolStripMenuItem
			// 
			this->freeToolStripMenuItem->Name = L"freeToolStripMenuItem";
			this->freeToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->freeToolStripMenuItem->Text = L"Sound diagram";
			this->freeToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::freeToolStripMenuItem_Click);
			// 
			// exerciseToolStripMenuItem
			// 
			this->exerciseToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->testToolStripMenuItem });
			this->exerciseToolStripMenuItem->Name = L"exerciseToolStripMenuItem";
			this->exerciseToolStripMenuItem->Size = System::Drawing::Size(61, 22);
			this->exerciseToolStripMenuItem->Text = L"Exercise";
			this->exerciseToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::exerciseToolStripMenuItem_Click);
			// 
			// testToolStripMenuItem
			// 
			this->testToolStripMenuItem->Name = L"testToolStripMenuItem";
			this->testToolStripMenuItem->Size = System::Drawing::Size(94, 22);
			this->testToolStripMenuItem->Text = L"Test";
			this->testToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::testToolStripMenuItem_Click);
			// 
			// localizationToolStripMenuItem
			// 
			this->localizationToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->englishToolStripMenuItem,
					this->russianToolStripMenuItem
			});
			this->localizationToolStripMenuItem->Name = L"localizationToolStripMenuItem";
			this->localizationToolStripMenuItem->Size = System::Drawing::Size(71, 22);
			this->localizationToolStripMenuItem->Text = L"Language";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->englishToolStripMenuItem->Text = L"English";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::englishToolStripMenuItem_Click);
			// 
			// russianToolStripMenuItem
			// 
			this->russianToolStripMenuItem->Name = L"russianToolStripMenuItem";
			this->russianToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->russianToolStripMenuItem->Text = L"Russian";
			this->russianToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::russianToolStripMenuItem_Click);
			// 
			// OuterGroupBox
			// 
			this->OuterGroupBox->Controls->Add(this->InnerCentralGroupBox);
			this->OuterGroupBox->Controls->Add(this->InnerRightGroupBox);
			this->OuterGroupBox->Controls->Add(this->InnerLeftGroupBox);
			this->OuterGroupBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->OuterGroupBox->Location = System::Drawing::Point(0, 24);
			this->OuterGroupBox->Name = L"OuterGroupBox";
			this->OuterGroupBox->Size = System::Drawing::Size(1010, 121);
			this->OuterGroupBox->TabIndex = 1;
			this->OuterGroupBox->TabStop = false;
			// 
			// InnerCentralGroupBox
			// 
			this->InnerCentralGroupBox->Controls->Add(this->splitContainer1);
			this->InnerCentralGroupBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->InnerCentralGroupBox->Location = System::Drawing::Point(203, 16);
			this->InnerCentralGroupBox->Name = L"InnerCentralGroupBox";
			this->InnerCentralGroupBox->Size = System::Drawing::Size(454, 102);
			this->InnerCentralGroupBox->TabIndex = 2;
			this->InnerCentralGroupBox->TabStop = false;
			this->InnerCentralGroupBox->Text = L"Brush / Shapes";
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(3, 16);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->Pipette);
			this->splitContainer1->Panel1->Controls->Add(this->labelMode);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonErase);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonLine);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonDraw);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonCircle);
			this->splitContainer1->Panel1->Controls->Add(this->labelBrushSize);
			this->splitContainer1->Panel1->Controls->Add(this->radioButtonSquare);
			this->splitContainer1->Panel1->Controls->Add(this->numericUpDownBrushSize);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->labelShape);
			this->splitContainer1->Panel2->Controls->Add(this->labelWidth);
			this->splitContainer1->Panel2->Controls->Add(this->labelLength);
			this->splitContainer1->Panel2->Controls->Add(this->numericUpDownWidth);
			this->splitContainer1->Panel2->Controls->Add(this->numericUpDownLength);
			this->splitContainer1->Size = System::Drawing::Size(448, 83);
			this->splitContainer1->SplitterDistance = 319;
			this->splitContainer1->TabIndex = 0;
			// 
			// Pipette
			// 
			this->Pipette->AutoSize = true;
			this->Pipette->Location = System::Drawing::Point(204, 53);
			this->Pipette->Margin = System::Windows::Forms::Padding(2);
			this->Pipette->Name = L"Pipette";
			this->Pipette->Size = System::Drawing::Size(58, 17);
			this->Pipette->TabIndex = 10;
			this->Pipette->Text = L"Pipette";
			this->Pipette->UseVisualStyleBackColor = true;
			this->Pipette->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::Pipette_CheckedChanged);
			// 
			// labelMode
			// 
			this->labelMode->AutoSize = true;
			this->labelMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelMode->Location = System::Drawing::Point(3, 29);
			this->labelMode->Name = L"labelMode";
			this->labelMode->Size = System::Drawing::Size(43, 15);
			this->labelMode->TabIndex = 4;
			this->labelMode->Text = L"Mode";
			this->labelMode->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButtonErase
			// 
			this->radioButtonErase->AutoSize = true;
			this->radioButtonErase->Location = System::Drawing::Point(61, 53);
			this->radioButtonErase->Name = L"radioButtonErase";
			this->radioButtonErase->Size = System::Drawing::Size(52, 17);
			this->radioButtonErase->TabIndex = 3;
			this->radioButtonErase->Text = L"Erase";
			this->radioButtonErase->UseVisualStyleBackColor = true;
			this->radioButtonErase->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonErase_CheckedChanged);
			// 
			// radioButtonLine
			// 
			this->radioButtonLine->AutoSize = true;
			this->radioButtonLine->Location = System::Drawing::Point(134, 30);
			this->radioButtonLine->Name = L"radioButtonLine";
			this->radioButtonLine->Size = System::Drawing::Size(45, 17);
			this->radioButtonLine->TabIndex = 9;
			this->radioButtonLine->Text = L"Line";
			this->radioButtonLine->UseVisualStyleBackColor = true;
			this->radioButtonLine->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonLine_CheckedChanged);
			// 
			// radioButtonDraw
			// 
			this->radioButtonDraw->AutoSize = true;
			this->radioButtonDraw->Checked = true;
			this->radioButtonDraw->Location = System::Drawing::Point(61, 30);
			this->radioButtonDraw->Name = L"radioButtonDraw";
			this->radioButtonDraw->Size = System::Drawing::Size(50, 17);
			this->radioButtonDraw->TabIndex = 2;
			this->radioButtonDraw->TabStop = true;
			this->radioButtonDraw->Text = L"Draw";
			this->radioButtonDraw->UseVisualStyleBackColor = true;
			this->radioButtonDraw->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonDraw_CheckedChanged);
			// 
			// radioButtonCircle
			// 
			this->radioButtonCircle->AutoSize = true;
			this->radioButtonCircle->Location = System::Drawing::Point(134, 53);
			this->radioButtonCircle->Name = L"radioButtonCircle";
			this->radioButtonCircle->Size = System::Drawing::Size(55, 17);
			this->radioButtonCircle->TabIndex = 8;
			this->radioButtonCircle->Text = L"Ellipse";
			this->radioButtonCircle->UseVisualStyleBackColor = true;
			this->radioButtonCircle->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonCircle_CheckedChanged);
			// 
			// labelBrushSize
			// 
			this->labelBrushSize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelBrushSize->AutoSize = true;
			this->labelBrushSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelBrushSize->Location = System::Drawing::Point(1, 5);
			this->labelBrushSize->Name = L"labelBrushSize";
			this->labelBrushSize->Size = System::Drawing::Size(74, 15);
			this->labelBrushSize->TabIndex = 1;
			this->labelBrushSize->Text = L"Brush size";
			this->labelBrushSize->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// radioButtonSquare
			// 
			this->radioButtonSquare->AutoSize = true;
			this->radioButtonSquare->Location = System::Drawing::Point(204, 29);
			this->radioButtonSquare->Name = L"radioButtonSquare";
			this->radioButtonSquare->Size = System::Drawing::Size(74, 17);
			this->radioButtonSquare->TabIndex = 7;
			this->radioButtonSquare->Text = L"Rectangle";
			this->radioButtonSquare->UseVisualStyleBackColor = true;
			this->radioButtonSquare->CheckedChanged += gcnew System::EventHandler(this, &PaintForm::radioButtonSquare_CheckedChanged);
			// 
			// numericUpDownBrushSize
			// 
			this->numericUpDownBrushSize->Location = System::Drawing::Point(104, 4);
			this->numericUpDownBrushSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownBrushSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownBrushSize->Name = L"numericUpDownBrushSize";
			this->numericUpDownBrushSize->Size = System::Drawing::Size(62, 20);
			this->numericUpDownBrushSize->TabIndex = 0;
			this->numericUpDownBrushSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDownBrushSize->ValueChanged += gcnew System::EventHandler(this, &PaintForm::numericUpDownBrushSize_ValueChanged);
			// 
			// labelShape
			// 
			this->labelShape->AutoSize = true;
			this->labelShape->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelShape->Location = System::Drawing::Point(3, 5);
			this->labelShape->Name = L"labelShape";
			this->labelShape->Size = System::Drawing::Size(48, 15);
			this->labelShape->TabIndex = 5;
			this->labelShape->Text = L"Shape";
			this->labelShape->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelWidth
			// 
			this->labelWidth->AutoSize = true;
			this->labelWidth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelWidth->Location = System::Drawing::Point(2, 50);
			this->labelWidth->Name = L"labelWidth";
			this->labelWidth->Size = System::Drawing::Size(49, 15);
			this->labelWidth->TabIndex = 6;
			this->labelWidth->Text = L"Height";
			this->labelWidth->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelLength
			// 
			this->labelLength->AutoSize = true;
			this->labelLength->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelLength->Location = System::Drawing::Point(3, 26);
			this->labelLength->Name = L"labelLength";
			this->labelLength->Size = System::Drawing::Size(43, 15);
			this->labelLength->TabIndex = 5;
			this->labelLength->Text = L"Width";
			this->labelLength->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelLength->Click += gcnew System::EventHandler(this, &PaintForm::labelLength_Click);
			// 
			// numericUpDownWidth
			// 
			this->numericUpDownWidth->Location = System::Drawing::Point(64, 50);
			this->numericUpDownWidth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownWidth->Name = L"numericUpDownWidth";
			this->numericUpDownWidth->Size = System::Drawing::Size(57, 20);
			this->numericUpDownWidth->TabIndex = 4;
			this->numericUpDownWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownWidth->ValueChanged += gcnew System::EventHandler(this, &PaintForm::numericUpDownWidth_ValueChanged);
			// 
			// numericUpDownLength
			// 
			this->numericUpDownLength->Location = System::Drawing::Point(64, 26);
			this->numericUpDownLength->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->numericUpDownLength->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownLength->Name = L"numericUpDownLength";
			this->numericUpDownLength->Size = System::Drawing::Size(57, 20);
			this->numericUpDownLength->TabIndex = 3;
			this->numericUpDownLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDownLength->ValueChanged += gcnew System::EventHandler(this, &PaintForm::numericUpDownLength_ValueChanged);
			// 
			// InnerRightGroupBox
			// 
			this->InnerRightGroupBox->Controls->Add(this->splitContainer2);
			this->InnerRightGroupBox->Dock = System::Windows::Forms::DockStyle::Right;
			this->InnerRightGroupBox->Location = System::Drawing::Point(657, 16);
			this->InnerRightGroupBox->Name = L"InnerRightGroupBox";
			this->InnerRightGroupBox->Size = System::Drawing::Size(350, 102);
			this->InnerRightGroupBox->TabIndex = 1;
			this->InnerRightGroupBox->TabStop = false;
			this->InnerRightGroupBox->Text = L"Note Palette";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 16);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->pictureBoxPalette);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->labelB);
			this->splitContainer2->Panel2->Controls->Add(this->labelA);
			this->splitContainer2->Panel2->Controls->Add(this->labelG);
			this->splitContainer2->Panel2->Controls->Add(this->labelF);
			this->splitContainer2->Panel2->Controls->Add(this->labelE);
			this->splitContainer2->Panel2->Controls->Add(this->labelD);
			this->splitContainer2->Panel2->Controls->Add(this->labelC);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonPurple);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonBlue);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonCyan);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonGreen);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonYellow);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonOrange);
			this->splitContainer2->Panel2->Controls->Add(this->ButtonRed);
			this->splitContainer2->Size = System::Drawing::Size(344, 83);
			this->splitContainer2->SplitterDistance = 81;
			this->splitContainer2->TabIndex = 0;
			// 
			// pictureBoxPalette
			// 
			this->pictureBoxPalette->Location = System::Drawing::Point(1, 3);
			this->pictureBoxPalette->Name = L"pictureBoxPalette";
			this->pictureBoxPalette->Size = System::Drawing::Size(77, 79);
			this->pictureBoxPalette->TabIndex = 0;
			this->pictureBoxPalette->TabStop = false;
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->labelB->Location = System::Drawing::Point(225, 42);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(23, 24);
			this->labelB->TabIndex = 13;
			this->labelB->Text = L"B";
			// 
			// labelA
			// 
			this->labelA->AutoSize = true;
			this->labelA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->labelA->Location = System::Drawing::Point(188, 42);
			this->labelA->Name = L"labelA";
			this->labelA->Size = System::Drawing::Size(24, 24);
			this->labelA->TabIndex = 12;
			this->labelA->Text = L"A";
			// 
			// labelG
			// 
			this->labelG->AutoSize = true;
			this->labelG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->labelG->Location = System::Drawing::Point(152, 42);
			this->labelG->Name = L"labelG";
			this->labelG->Size = System::Drawing::Size(25, 24);
			this->labelG->TabIndex = 11;
			this->labelG->Text = L"G";
			// 
			// labelF
			// 
			this->labelF->AutoSize = true;
			this->labelF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->labelF->Location = System::Drawing::Point(116, 42);
			this->labelF->Name = L"labelF";
			this->labelF->Size = System::Drawing::Size(23, 24);
			this->labelF->TabIndex = 10;
			this->labelF->Text = L"F";
			// 
			// labelE
			// 
			this->labelE->AutoSize = true;
			this->labelE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->labelE->Location = System::Drawing::Point(80, 42);
			this->labelE->Name = L"labelE";
			this->labelE->Size = System::Drawing::Size(24, 24);
			this->labelE->TabIndex = 9;
			this->labelE->Text = L"E";
			// 
			// labelD
			// 
			this->labelD->AutoSize = true;
			this->labelD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->labelD->Location = System::Drawing::Point(44, 42);
			this->labelD->Name = L"labelD";
			this->labelD->Size = System::Drawing::Size(24, 24);
			this->labelD->TabIndex = 8;
			this->labelD->Text = L"D";
			// 
			// labelC
			// 
			this->labelC->AutoSize = true;
			this->labelC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->labelC->Location = System::Drawing::Point(8, 42);
			this->labelC->Name = L"labelC";
			this->labelC->Size = System::Drawing::Size(24, 24);
			this->labelC->TabIndex = 7;
			this->labelC->Text = L"C";
			// 
			// ButtonPurple
			// 
			this->ButtonPurple->BackColor = System::Drawing::Color::Purple;
			this->ButtonPurple->Location = System::Drawing::Point(221, 11);
			this->ButtonPurple->Name = L"ButtonPurple";
			this->ButtonPurple->Size = System::Drawing::Size(30, 30);
			this->ButtonPurple->TabIndex = 6;
			this->ButtonPurple->UseVisualStyleBackColor = false;
			this->ButtonPurple->Click += gcnew System::EventHandler(this, &PaintForm::ButtonPurple_Click);
			// 
			// ButtonBlue
			// 
			this->ButtonBlue->BackColor = System::Drawing::Color::Blue;
			this->ButtonBlue->Location = System::Drawing::Point(185, 11);
			this->ButtonBlue->Name = L"ButtonBlue";
			this->ButtonBlue->Size = System::Drawing::Size(30, 30);
			this->ButtonBlue->TabIndex = 5;
			this->ButtonBlue->UseVisualStyleBackColor = false;
			this->ButtonBlue->Click += gcnew System::EventHandler(this, &PaintForm::ButtonBlue_Click);
			// 
			// ButtonCyan
			// 
			this->ButtonCyan->BackColor = System::Drawing::Color::Cyan;
			this->ButtonCyan->Location = System::Drawing::Point(149, 11);
			this->ButtonCyan->Name = L"ButtonCyan";
			this->ButtonCyan->Size = System::Drawing::Size(30, 30);
			this->ButtonCyan->TabIndex = 4;
			this->ButtonCyan->UseVisualStyleBackColor = false;
			this->ButtonCyan->Click += gcnew System::EventHandler(this, &PaintForm::ButtonCyan_Click);
			// 
			// ButtonGreen
			// 
			this->ButtonGreen->BackColor = System::Drawing::Color::Green;
			this->ButtonGreen->Location = System::Drawing::Point(113, 11);
			this->ButtonGreen->Name = L"ButtonGreen";
			this->ButtonGreen->Size = System::Drawing::Size(30, 30);
			this->ButtonGreen->TabIndex = 3;
			this->ButtonGreen->UseVisualStyleBackColor = false;
			this->ButtonGreen->Click += gcnew System::EventHandler(this, &PaintForm::ButtonGreen_Click);
			// 
			// ButtonYellow
			// 
			this->ButtonYellow->BackColor = System::Drawing::Color::Yellow;
			this->ButtonYellow->Location = System::Drawing::Point(77, 11);
			this->ButtonYellow->Name = L"ButtonYellow";
			this->ButtonYellow->Size = System::Drawing::Size(30, 30);
			this->ButtonYellow->TabIndex = 2;
			this->ButtonYellow->UseVisualStyleBackColor = false;
			this->ButtonYellow->Click += gcnew System::EventHandler(this, &PaintForm::ButtonYellow_Click);
			// 
			// ButtonOrange
			// 
			this->ButtonOrange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ButtonOrange->Location = System::Drawing::Point(41, 11);
			this->ButtonOrange->Name = L"ButtonOrange";
			this->ButtonOrange->Size = System::Drawing::Size(30, 30);
			this->ButtonOrange->TabIndex = 1;
			this->ButtonOrange->UseVisualStyleBackColor = false;
			this->ButtonOrange->Click += gcnew System::EventHandler(this, &PaintForm::ButtonOrange_Click);
			// 
			// ButtonRed
			// 
			this->ButtonRed->BackColor = System::Drawing::Color::Red;
			this->ButtonRed->Location = System::Drawing::Point(5, 11);
			this->ButtonRed->Name = L"ButtonRed";
			this->ButtonRed->Size = System::Drawing::Size(30, 30);
			this->ButtonRed->TabIndex = 0;
			this->ButtonRed->UseVisualStyleBackColor = false;
			this->ButtonRed->Click += gcnew System::EventHandler(this, &PaintForm::ButtonRed_Click);
			// 
			// InnerLeftGroupBox
			// 
			this->InnerLeftGroupBox->Controls->Add(this->splitContainer3);
			this->InnerLeftGroupBox->Dock = System::Windows::Forms::DockStyle::Left;
			this->InnerLeftGroupBox->Location = System::Drawing::Point(3, 16);
			this->InnerLeftGroupBox->Name = L"InnerLeftGroupBox";
			this->InnerLeftGroupBox->Size = System::Drawing::Size(200, 102);
			this->InnerLeftGroupBox->TabIndex = 0;
			this->InnerLeftGroupBox->TabStop = false;
			this->InnerLeftGroupBox->Text = L"Musical Instrument";
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(3, 16);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->comboBoxInstruments);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->Controls->Add(this->pictureBoxInstrument);
			this->splitContainer3->Size = System::Drawing::Size(194, 83);
			this->splitContainer3->SplitterDistance = 26;
			this->splitContainer3->TabIndex = 0;
			// 
			// comboBoxInstruments
			// 
			this->comboBoxInstruments->FormattingEnabled = true;
			this->comboBoxInstruments->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"None", L"Marimba", L"Piano", L"String",
					L"WoodWind", L"Nature"
			});
			this->comboBoxInstruments->Location = System::Drawing::Point(7, 4);
			this->comboBoxInstruments->Name = L"comboBoxInstruments";
			this->comboBoxInstruments->Size = System::Drawing::Size(184, 21);
			this->comboBoxInstruments->TabIndex = 0;
			this->comboBoxInstruments->Text = L"None";
			this->comboBoxInstruments->SelectedIndexChanged += gcnew System::EventHandler(this, &PaintForm::comboBoxInstruments_SelectedIndexChanged);
			// 
			// pictureBoxInstrument
			// 
			this->pictureBoxInstrument->Location = System::Drawing::Point(7, 3);
			this->pictureBoxInstrument->Name = L"pictureBoxInstrument";
			this->pictureBoxInstrument->Size = System::Drawing::Size(184, 43);
			this->pictureBoxInstrument->TabIndex = 0;
			this->pictureBoxInstrument->TabStop = false;
			// 
			// pictureBoxCanvas
			// 
			this->pictureBoxCanvas->BackColor = System::Drawing::Color::White;
			this->pictureBoxCanvas->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxCanvas->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBoxCanvas->Location = System::Drawing::Point(0, 145);
			this->pictureBoxCanvas->Name = L"pictureBoxCanvas";
			this->pictureBoxCanvas->Size = System::Drawing::Size(1010, 393);
			this->pictureBoxCanvas->TabIndex = 2;
			this->pictureBoxCanvas->TabStop = false;
			this->pictureBoxCanvas->SizeChanged += gcnew System::EventHandler(this, &PaintForm::pictureBoxCanvas_SizeChanged);
			this->pictureBoxCanvas->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PaintForm::pictureBoxCanvas_Paint);
			this->pictureBoxCanvas->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBoxCanvas_MouseDown);
			this->pictureBoxCanvas->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBoxCanvas_MouseMove);
			this->pictureBoxCanvas->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBoxCanvas_MouseUp);
			// 
			// groupBoxCreateCanvas
			// 
			this->groupBoxCreateCanvas->Controls->Add(this->buttonCloseCreateCanvas);
			this->groupBoxCreateCanvas->Controls->Add(this->buttonCreate);
			this->groupBoxCreateCanvas->Controls->Add(this->labelCreateCanvasHeight);
			this->groupBoxCreateCanvas->Controls->Add(this->labelCreateCanvasWidth);
			this->groupBoxCreateCanvas->Controls->Add(this->numericUpDownCreateHeight);
			this->groupBoxCreateCanvas->Controls->Add(this->numericUpDownCreateWidth);
			this->groupBoxCreateCanvas->Location = System::Drawing::Point(400, 151);
			this->groupBoxCreateCanvas->Name = L"groupBoxCreateCanvas";
			this->groupBoxCreateCanvas->Size = System::Drawing::Size(257, 129);
			this->groupBoxCreateCanvas->TabIndex = 3;
			this->groupBoxCreateCanvas->TabStop = false;
			this->groupBoxCreateCanvas->Text = L"Create canvas";
			this->groupBoxCreateCanvas->Visible = false;
			this->groupBoxCreateCanvas->Enter += gcnew System::EventHandler(this, &PaintForm::groupBoxCreateCanvas_Enter);
			// 
			// buttonCloseCreateCanvas
			// 
			this->buttonCloseCreateCanvas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonCloseCreateCanvas->Location = System::Drawing::Point(226, 10);
			this->buttonCloseCreateCanvas->Name = L"buttonCloseCreateCanvas";
			this->buttonCloseCreateCanvas->Size = System::Drawing::Size(25, 25);
			this->buttonCloseCreateCanvas->TabIndex = 16;
			this->buttonCloseCreateCanvas->Text = L"X";
			this->buttonCloseCreateCanvas->UseVisualStyleBackColor = false;
			this->buttonCloseCreateCanvas->Click += gcnew System::EventHandler(this, &PaintForm::buttonCloseCreateCanvas_Click);
			// 
			// buttonCreate
			// 
			this->buttonCreate->Location = System::Drawing::Point(93, 92);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(75, 23);
			this->buttonCreate->TabIndex = 13;
			this->buttonCreate->Text = L"create";
			this->buttonCreate->UseVisualStyleBackColor = true;
			this->buttonCreate->Click += gcnew System::EventHandler(this, &PaintForm::buttonCreate_Click);
			// 
			// labelCreateCanvasHeight
			// 
			this->labelCreateCanvasHeight->AutoSize = true;
			this->labelCreateCanvasHeight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelCreateCanvasHeight->Location = System::Drawing::Point(45, 55);
			this->labelCreateCanvasHeight->Name = L"labelCreateCanvasHeight";
			this->labelCreateCanvasHeight->Size = System::Drawing::Size(49, 15);
			this->labelCreateCanvasHeight->TabIndex = 12;
			this->labelCreateCanvasHeight->Text = L"Height";
			this->labelCreateCanvasHeight->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelCreateCanvasWidth
			// 
			this->labelCreateCanvasWidth->AutoSize = true;
			this->labelCreateCanvasWidth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelCreateCanvasWidth->Location = System::Drawing::Point(45, 29);
			this->labelCreateCanvasWidth->Name = L"labelCreateCanvasWidth";
			this->labelCreateCanvasWidth->Size = System::Drawing::Size(43, 15);
			this->labelCreateCanvasWidth->TabIndex = 11;
			this->labelCreateCanvasWidth->Text = L"Width";
			this->labelCreateCanvasWidth->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// numericUpDownCreateHeight
			// 
			this->numericUpDownCreateHeight->Location = System::Drawing::Point(111, 55);
			this->numericUpDownCreateHeight->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 393, 0, 0, 0 });
			this->numericUpDownCreateHeight->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDownCreateHeight->Name = L"numericUpDownCreateHeight";
			this->numericUpDownCreateHeight->Size = System::Drawing::Size(57, 20);
			this->numericUpDownCreateHeight->TabIndex = 6;
			this->numericUpDownCreateHeight->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// numericUpDownCreateWidth
			// 
			this->numericUpDownCreateWidth->Location = System::Drawing::Point(111, 29);
			this->numericUpDownCreateWidth->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1010, 0, 0, 0 });
			this->numericUpDownCreateWidth->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->numericUpDownCreateWidth->Name = L"numericUpDownCreateWidth";
			this->numericUpDownCreateWidth->Size = System::Drawing::Size(57, 20);
			this->numericUpDownCreateWidth->TabIndex = 5;
			this->numericUpDownCreateWidth->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// groupBoxSoundDiagram
			// 
			this->groupBoxSoundDiagram->Controls->Add(this->labelSoundDiagramOctaveSheet);
			this->groupBoxSoundDiagram->Controls->Add(this->pictureBoxOctaveWhatChosen);
			this->groupBoxSoundDiagram->Controls->Add(this->pictureBoxOctaveWhatPanel);
			this->groupBoxSoundDiagram->Controls->Add(this->labelCurrentNodePlaying);
			this->groupBoxSoundDiagram->Controls->Add(this->labelOctaveWhat);
			this->groupBoxSoundDiagram->Controls->Add(this->buttonSoundDiagramClose);
			this->groupBoxSoundDiagram->Controls->Add(this->buttonShowVisualisation);
			this->groupBoxSoundDiagram->Controls->Add(this->numericUpDownSoundDiagramOctave);
			this->groupBoxSoundDiagram->Controls->Add(this->labelSoundDiagramOctave);
			this->groupBoxSoundDiagram->Controls->Add(this->labelSoundDiagramMusicalInstrument);
			this->groupBoxSoundDiagram->Controls->Add(this->comboBoxSoundDiagramInstrument);
			this->groupBoxSoundDiagram->Controls->Add(this->pictureBoxSoundDiagram);
			this->groupBoxSoundDiagram->Location = System::Drawing::Point(6, 161);
			this->groupBoxSoundDiagram->Name = L"groupBoxSoundDiagram";
			this->groupBoxSoundDiagram->Size = System::Drawing::Size(960, 240);
			this->groupBoxSoundDiagram->TabIndex = 4;
			this->groupBoxSoundDiagram->TabStop = false;
			this->groupBoxSoundDiagram->Text = L"Sound diagram";
			this->groupBoxSoundDiagram->Visible = false;
			// 
			// labelSoundDiagramOctaveSheet
			// 
			this->labelSoundDiagramOctaveSheet->AutoSize = true;
			this->labelSoundDiagramOctaveSheet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelSoundDiagramOctaveSheet->Location = System::Drawing::Point(368, 20);
			this->labelSoundDiagramOctaveSheet->Name = L"labelSoundDiagramOctaveSheet";
			this->labelSoundDiagramOctaveSheet->Size = System::Drawing::Size(151, 25);
			this->labelSoundDiagramOctaveSheet->TabIndex = 20;
			this->labelSoundDiagramOctaveSheet->Text = L"Octave sheet";
			// 
			// pictureBoxOctaveWhatChosen
			// 
			this->pictureBoxOctaveWhatChosen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxOctaveWhatChosen->Location = System::Drawing::Point(368, 144);
			this->pictureBoxOctaveWhatChosen->Name = L"pictureBoxOctaveWhatChosen";
			this->pictureBoxOctaveWhatChosen->Size = System::Drawing::Size(580, 14);
			this->pictureBoxOctaveWhatChosen->TabIndex = 19;
			this->pictureBoxOctaveWhatChosen->TabStop = false;
			// 
			// pictureBoxOctaveWhatPanel
			// 
			this->pictureBoxOctaveWhatPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxOctaveWhatPanel->Location = System::Drawing::Point(368, 48);
			this->pictureBoxOctaveWhatPanel->Name = L"pictureBoxOctaveWhatPanel";
			this->pictureBoxOctaveWhatPanel->Size = System::Drawing::Size(580, 90);
			this->pictureBoxOctaveWhatPanel->TabIndex = 18;
			this->pictureBoxOctaveWhatPanel->TabStop = false;
			// 
			// labelCurrentNodePlaying
			// 
			this->labelCurrentNodePlaying->AutoSize = true;
			this->labelCurrentNodePlaying->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCurrentNodePlaying->Location = System::Drawing::Point(167, 184);
			this->labelCurrentNodePlaying->Name = L"labelCurrentNodePlaying";
			this->labelCurrentNodePlaying->Size = System::Drawing::Size(135, 16);
			this->labelCurrentNodePlaying->TabIndex = 17;
			this->labelCurrentNodePlaying->Text = L"Current note playing:#";
			this->labelCurrentNodePlaying->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelOctaveWhat
			// 
			this->labelOctaveWhat->AutoSize = true;
			this->labelOctaveWhat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelOctaveWhat->Location = System::Drawing::Point(62, 108);
			this->labelOctaveWhat->Name = L"labelOctaveWhat";
			this->labelOctaveWhat->Size = System::Drawing::Size(74, 13);
			this->labelOctaveWhat->TabIndex = 16;
			this->labelOctaveWhat->Text = L"Contre octave";
			this->labelOctaveWhat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonSoundDiagramClose
			// 
			this->buttonSoundDiagramClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonSoundDiagramClose->Location = System::Drawing::Point(9, 20);
			this->buttonSoundDiagramClose->Name = L"buttonSoundDiagramClose";
			this->buttonSoundDiagramClose->Size = System::Drawing::Size(25, 25);
			this->buttonSoundDiagramClose->TabIndex = 15;
			this->buttonSoundDiagramClose->Text = L"X";
			this->buttonSoundDiagramClose->UseVisualStyleBackColor = false;
			this->buttonSoundDiagramClose->Click += gcnew System::EventHandler(this, &PaintForm::buttonSoundDiagramClose_Click);
			// 
			// buttonShowVisualisation
			// 
			this->buttonShowVisualisation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonShowVisualisation->Location = System::Drawing::Point(6, 134);
			this->buttonShowVisualisation->Name = L"buttonShowVisualisation";
			this->buttonShowVisualisation->Size = System::Drawing::Size(129, 82);
			this->buttonShowVisualisation->TabIndex = 14;
			this->buttonShowVisualisation->Text = L"Show visualisation";
			this->buttonShowVisualisation->UseVisualStyleBackColor = true;
			this->buttonShowVisualisation->Click += gcnew System::EventHandler(this, &PaintForm::buttonShowVisualisation_Click);
			// 
			// numericUpDownSoundDiagramOctave
			// 
			this->numericUpDownSoundDiagramOctave->Location = System::Drawing::Point(5, 108);
			this->numericUpDownSoundDiagramOctave->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSoundDiagramOctave->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSoundDiagramOctave->Name = L"numericUpDownSoundDiagramOctave";
			this->numericUpDownSoundDiagramOctave->Size = System::Drawing::Size(51, 20);
			this->numericUpDownSoundDiagramOctave->TabIndex = 13;
			this->numericUpDownSoundDiagramOctave->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSoundDiagramOctave->ValueChanged += gcnew System::EventHandler(this, &PaintForm::numericUpDownSoundDiagramOctave_ValueChanged);
			// 
			// labelSoundDiagramOctave
			// 
			this->labelSoundDiagramOctave->AutoSize = true;
			this->labelSoundDiagramOctave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelSoundDiagramOctave->Location = System::Drawing::Point(6, 90);
			this->labelSoundDiagramOctave->Name = L"labelSoundDiagramOctave";
			this->labelSoundDiagramOctave->Size = System::Drawing::Size(50, 15);
			this->labelSoundDiagramOctave->TabIndex = 12;
			this->labelSoundDiagramOctave->Text = L"Octave";
			this->labelSoundDiagramOctave->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelSoundDiagramMusicalInstrument
			// 
			this->labelSoundDiagramMusicalInstrument->AutoSize = true;
			this->labelSoundDiagramMusicalInstrument->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->labelSoundDiagramMusicalInstrument->Location = System::Drawing::Point(6, 48);
			this->labelSoundDiagramMusicalInstrument->Name = L"labelSoundDiagramMusicalInstrument";
			this->labelSoundDiagramMusicalInstrument->Size = System::Drawing::Size(129, 15);
			this->labelSoundDiagramMusicalInstrument->TabIndex = 11;
			this->labelSoundDiagramMusicalInstrument->Text = L"Musical instrument";
			this->labelSoundDiagramMusicalInstrument->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBoxSoundDiagramInstrument
			// 
			this->comboBoxSoundDiagramInstrument->FormattingEnabled = true;
			this->comboBoxSoundDiagramInstrument->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"None", L"Marimba", L"WoodWind",
					L"Piano"
			});
			this->comboBoxSoundDiagramInstrument->Location = System::Drawing::Point(6, 66);
			this->comboBoxSoundDiagramInstrument->Name = L"comboBoxSoundDiagramInstrument";
			this->comboBoxSoundDiagramInstrument->Size = System::Drawing::Size(129, 21);
			this->comboBoxSoundDiagramInstrument->TabIndex = 1;
			this->comboBoxSoundDiagramInstrument->Text = L"None";
			this->comboBoxSoundDiagramInstrument->SelectedIndexChanged += gcnew System::EventHandler(this, &PaintForm::comboBoxSoundDiagramInstrument_SelectedIndexChanged);
			// 
			// pictureBoxSoundDiagram
			// 
			this->pictureBoxSoundDiagram->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxSoundDiagram->Location = System::Drawing::Point(170, 20);
			this->pictureBoxSoundDiagram->Name = L"pictureBoxSoundDiagram";
			this->pictureBoxSoundDiagram->Size = System::Drawing::Size(192, 161);
			this->pictureBoxSoundDiagram->TabIndex = 0;
			this->pictureBoxSoundDiagram->TabStop = false;
			// 
			// groupBoxExerciseKnowledge
			// 
			this->groupBoxExerciseKnowledge->Controls->Add(this->buttonCloseTest);
			this->groupBoxExerciseKnowledge->Controls->Add(this->pictureBoxRightInstrument);
			this->groupBoxExerciseKnowledge->Controls->Add(this->labelRightOctave);
			this->groupBoxExerciseKnowledge->Controls->Add(this->labelWaitingNotification);
			this->groupBoxExerciseKnowledge->Controls->Add(this->labelJudgmentAnswer);
			this->groupBoxExerciseKnowledge->Controls->Add(this->groupBoxInputAnswer);
			this->groupBoxExerciseKnowledge->Controls->Add(this->buttonCheckResult);
			this->groupBoxExerciseKnowledge->Controls->Add(this->buttonStartGame);
			this->groupBoxExerciseKnowledge->Font = (gcnew System::Drawing::Font(L"Consolas", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxExerciseKnowledge->Location = System::Drawing::Point(6, 151);
			this->groupBoxExerciseKnowledge->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxExerciseKnowledge->Name = L"groupBoxExerciseKnowledge";
			this->groupBoxExerciseKnowledge->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxExerciseKnowledge->Size = System::Drawing::Size(551, 267);
			this->groupBoxExerciseKnowledge->TabIndex = 5;
			this->groupBoxExerciseKnowledge->TabStop = false;
			this->groupBoxExerciseKnowledge->Text = L"Test";
			this->groupBoxExerciseKnowledge->Visible = false;
			// 
			// buttonCloseTest
			// 
			this->buttonCloseTest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonCloseTest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCloseTest->Location = System::Drawing::Point(6, 27);
			this->buttonCloseTest->Name = L"buttonCloseTest";
			this->buttonCloseTest->Size = System::Drawing::Size(25, 25);
			this->buttonCloseTest->TabIndex = 16;
			this->buttonCloseTest->Text = L"X";
			this->buttonCloseTest->UseVisualStyleBackColor = false;
			this->buttonCloseTest->Click += gcnew System::EventHandler(this, &PaintForm::buttonCloseTest_Click);
			// 
			// pictureBoxRightInstrument
			// 
			this->pictureBoxRightInstrument->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBoxRightInstrument->Location = System::Drawing::Point(206, 55);
			this->pictureBoxRightInstrument->Margin = System::Windows::Forms::Padding(2);
			this->pictureBoxRightInstrument->Name = L"pictureBoxRightInstrument";
			this->pictureBoxRightInstrument->Size = System::Drawing::Size(300, 133);
			this->pictureBoxRightInstrument->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRightInstrument->TabIndex = 5;
			this->pictureBoxRightInstrument->TabStop = false;
			this->pictureBoxRightInstrument->Visible = false;
			this->pictureBoxRightInstrument->Click += gcnew System::EventHandler(this, &PaintForm::pictureBoxRightInstrument_Click);
			// 
			// labelRightOctave
			// 
			this->labelRightOctave->AutoSize = true;
			this->labelRightOctave->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Demi", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelRightOctave->Location = System::Drawing::Point(216, 190);
			this->labelRightOctave->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelRightOctave->Name = L"labelRightOctave";
			this->labelRightOctave->Size = System::Drawing::Size(115, 24);
			this->labelRightOctave->TabIndex = 6;
			this->labelRightOctave->Text = L"Right octave";
			this->labelRightOctave->Visible = false;
			// 
			// labelWaitingNotification
			// 
			this->labelWaitingNotification->AutoSize = true;
			this->labelWaitingNotification->Font = (gcnew System::Drawing::Font(L"Elephant", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWaitingNotification->Location = System::Drawing::Point(248, 24);
			this->labelWaitingNotification->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelWaitingNotification->Name = L"labelWaitingNotification";
			this->labelWaitingNotification->Size = System::Drawing::Size(219, 25);
			this->labelWaitingNotification->TabIndex = 4;
			this->labelWaitingNotification->Text = L"Listen to the melody...";
			this->labelWaitingNotification->Visible = false;
			// 
			// labelJudgmentAnswer
			// 
			this->labelJudgmentAnswer->AutoSize = true;
			this->labelJudgmentAnswer->Font = (gcnew System::Drawing::Font(L"Consolas", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelJudgmentAnswer->Location = System::Drawing::Point(6, 227);
			this->labelJudgmentAnswer->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelJudgmentAnswer->Name = L"labelJudgmentAnswer";
			this->labelJudgmentAnswer->Size = System::Drawing::Size(360, 22);
			this->labelJudgmentAnswer->TabIndex = 3;
			this->labelJudgmentAnswer->Text = L"Your answer is incorrect. Try again";
			this->labelJudgmentAnswer->Visible = false;
			// 
			// groupBoxInputAnswer
			// 
			this->groupBoxInputAnswer->Controls->Add(this->comboBoxChoiseOctave);
			this->groupBoxInputAnswer->Controls->Add(this->comboBoxInstrumentChoise);
			this->groupBoxInputAnswer->Font = (gcnew System::Drawing::Font(L"Cambria", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxInputAnswer->Location = System::Drawing::Point(5, 63);
			this->groupBoxInputAnswer->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxInputAnswer->Name = L"groupBoxInputAnswer";
			this->groupBoxInputAnswer->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxInputAnswer->Size = System::Drawing::Size(183, 100);
			this->groupBoxInputAnswer->TabIndex = 2;
			this->groupBoxInputAnswer->TabStop = false;
			this->groupBoxInputAnswer->Text = L"Make a guess";
			this->groupBoxInputAnswer->Visible = false;
			// 
			// comboBoxChoiseOctave
			// 
			this->comboBoxChoiseOctave->FormattingEnabled = true;
			this->comboBoxChoiseOctave->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"None", L"Contra octave", L"Great octave",
					L"Small octave", L"One-line octave", L"Two-line octave", L"Three-line octave", L"Four-line octave"
			});
			this->comboBoxChoiseOctave->Location = System::Drawing::Point(5, 63);
			this->comboBoxChoiseOctave->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxChoiseOctave->Name = L"comboBoxChoiseOctave";
			this->comboBoxChoiseOctave->Size = System::Drawing::Size(174, 30);
			this->comboBoxChoiseOctave->TabIndex = 1;
			this->comboBoxChoiseOctave->Text = L"Choose octave";
			// 
			// comboBoxInstrumentChoise
			// 
			this->comboBoxInstrumentChoise->FormattingEnabled = true;
			this->comboBoxInstrumentChoise->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"None", L"Marimba", L"WoodWind",
					L"Piano"
			});
			this->comboBoxInstrumentChoise->Location = System::Drawing::Point(4, 29);
			this->comboBoxInstrumentChoise->Margin = System::Windows::Forms::Padding(2);
			this->comboBoxInstrumentChoise->Name = L"comboBoxInstrumentChoise";
			this->comboBoxInstrumentChoise->Size = System::Drawing::Size(175, 30);
			this->comboBoxInstrumentChoise->TabIndex = 0;
			this->comboBoxInstrumentChoise->Text = L"Choose instrument";
			// 
			// buttonCheckResult
			// 
			this->buttonCheckResult->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCheckResult->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCheckResult->Location = System::Drawing::Point(6, 175);
			this->buttonCheckResult->Margin = System::Windows::Forms::Padding(2);
			this->buttonCheckResult->Name = L"buttonCheckResult";
			this->buttonCheckResult->Size = System::Drawing::Size(133, 33);
			this->buttonCheckResult->TabIndex = 1;
			this->buttonCheckResult->Text = L"Check result";
			this->buttonCheckResult->UseVisualStyleBackColor = true;
			this->buttonCheckResult->Visible = false;
			this->buttonCheckResult->Click += gcnew System::EventHandler(this, &PaintForm::buttonCheckResult_Click);
			// 
			// buttonStartGame
			// 
			this->buttonStartGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonStartGame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonStartGame->Font = (gcnew System::Drawing::Font(L"Goudy Old Style", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStartGame->Location = System::Drawing::Point(42, 25);
			this->buttonStartGame->Margin = System::Windows::Forms::Padding(2);
			this->buttonStartGame->Name = L"buttonStartGame";
			this->buttonStartGame->Size = System::Drawing::Size(133, 35);
			this->buttonStartGame->TabIndex = 0;
			this->buttonStartGame->Text = L"Start game";
			this->buttonStartGame->UseVisualStyleBackColor = false;
			this->buttonStartGame->Click += gcnew System::EventHandler(this, &PaintForm::buttonStartGame_Click);
			// 
			// PaintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1010, 538);
			this->Controls->Add(this->groupBoxExerciseKnowledge);
			this->Controls->Add(this->groupBoxSoundDiagram);
			this->Controls->Add(this->groupBoxCreateCanvas);
			this->Controls->Add(this->pictureBoxCanvas);
			this->Controls->Add(this->OuterGroupBox);
			this->Controls->Add(this->TopMenuStrip);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->TopMenuStrip;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"PaintForm";
			this->Text = L"SoundColors";
			this->Load += gcnew System::EventHandler(this, &PaintForm::MyForm_Load);
			this->TopMenuStrip->ResumeLayout(false);
			this->TopMenuStrip->PerformLayout();
			this->OuterGroupBox->ResumeLayout(false);
			this->InnerCentralGroupBox->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownBrushSize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidth))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLength))->EndInit();
			this->InnerRightGroupBox->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPalette))->EndInit();
			this->InnerLeftGroupBox->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxInstrument))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCanvas))->EndInit();
			this->groupBoxCreateCanvas->ResumeLayout(false);
			this->groupBoxCreateCanvas->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCreateHeight))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCreateWidth))->EndInit();
			this->groupBoxSoundDiagram->ResumeLayout(false);
			this->groupBoxSoundDiagram->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOctaveWhatChosen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxOctaveWhatPanel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSoundDiagramOctave))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSoundDiagram))->EndInit();
			this->groupBoxExerciseKnowledge->ResumeLayout(false);
			this->groupBoxExerciseKnowledge->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRightInstrument))->EndInit();
			this->groupBoxInputAnswer->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		float size;
		bool mouse_pressed;
		int X;
		int Y;
		List<Point>^ points;
		Bitmap^ image;
		Graphics^ canvas;
		Pen^ pen;
		SoundPlayer^ audio_feedback;
		Graphics^ canvas_temp;
		Bitmap^ image_temp;
		int instrument_identifier;
		int octave_identifier;
		String^ localization_identifier;
		
	//Событие при запуске формы
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		localization_identifier = "English";
		size = 1;
		mouse_pressed = false;
		X = 0;
		Y = 0;
		pen = gcnew Pen(Color::White, 5);
		points = gcnew List<Point>;
		image = gcnew Bitmap(pictureBoxCanvas->Width, pictureBoxCanvas->Height);
		canvas = Graphics::FromImage(image);
		pictureBoxCanvas->Image = image;
		canvas->Clear(Color::White);
		pictureBoxCanvas->BackColor = Color::White;
	}
	//События для меню холста
private: System::Void canvasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void clearCanvasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	//События для меню режима звука
private: System::Void freeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void stepsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	//Событие для выбора размера кисти
private: System::Void numericUpDownBrushSize_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	//События выбора цвета кисти
private: System::Void ButtonRed_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonOrange_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonYellow_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonGreen_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonCyan_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonBlue_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ButtonPurple_Click(System::Object^ sender, System::EventArgs^ e);
	//События выбора режима кисти
private: System::Void radioButtonDraw_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonErase_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonSquare_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonCircle_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonLine_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void radioButtonTriangle_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	//Событие для выбора инструмента
private: System::Void comboBoxInstruments_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	//События выбора длины фигуры
private: System::Void numericUpDownLength_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	//События выбора ширины фигуры
private: System::Void numericUpDownWidth_ValueChanged(System::Object^ sender, System::EventArgs^ e);

	//События полотна
private: System::Void pictureBoxCanvas_SizeChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBoxCanvas_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBoxCanvas_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBoxCanvas_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void pictureBoxCanvas_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void createToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void labelLength_Click(System::Object^ sender, System::EventArgs^ e) {}
	//
private: System::Void buttonCreate_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSoundDiagramClose_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void comboBoxSoundDiagramInstrument_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonShowVisualisation_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void groupBoxCreateCanvas_Enter(System::Object^ sender, System::EventArgs^ e) {}	
	//Тест
private: System::Void numericUpDownSoundDiagramOctave_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void exerciseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonStartGame_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCheckResult_Click(System::Object^ sender, System::EventArgs^ e);
	//Локализация
private: System::Void englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void russianToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void testToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCloseTest_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonCloseCreateCanvas_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBoxRightInstrument_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // Новый инструмент - Пипетка!
private: System::Void Pipette_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBoxPalette->Image = nullptr;
}
};
}
