#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("NotTarget_Shrubbery", 145, 137, "NotTarget"){
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target): Form(target + "_Shrubbery", 145, 137, target){

}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &Fo): Form(Fo.getName(),  Fo.getGradeExecute(), Fo.getGradeSign(), Fo.getTarget())
{
	*this = Fo;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm &Fo){
	if (this != &Fo)
	{
		Form::operator=(Fo);
	}
	return (*this);
}

const char* ShrubberyCreationForm::FileNotOpen::what() const throw(){
	return ("File did not open!");
}

void	ShrubberyCreationForm::executedAll(void) const{
	std::ofstream file(name);
	if(file.is_open()){
		file << "                                  .         ; " << std::endl;
		file << "     .              .              ;@     ;; " << std::endl;
		file << "       ,           ,                :;@  @; " << std::endl;
		file << "        :         ;                   :;@;'     ., " << std::endl;
		file << ".        @;     @;            ;        @;'    ,; " << std::endl;
		file << " ;       ;@;  @@;        ,     @;    ;@;    ,@' " << std::endl;
		file << "  @;       @;@;      ,  ;       @;  ;@;   ,@;' " << std::endl;
		file << "   ;@;      @;        ;@;        @ ;@;  ,@;' " << std::endl;
		file << "    `@;.     ;@;     @;'         `;@@;.@;' " << std::endl;
		file << "     `:;@.    ;@@. @@;        @; ;@@;@' " << std::endl;
		file << "        `:@;.  :;bd@;          @;@@;' " << std::endl;
		file << "          `@@:.  :;@.         ;@@@;' " << std::endl;
		file << "            `@@.  `;@@.      ;@@@; " << std::endl;
		file << "              `@@@. `@@@    ;@@@; " << std::endl;
		file << "                ;@@. :@@@  @@@@; " << std::endl;
		file << "                  @@bd@@@bd@@:; " << std::endl;
		file << "                    #@@@@@@:;; " << std::endl;
		file << "                    @@@@@@::; " << std::endl;
		file << "                    @@@@@(o);  . ' " << std::endl;
		file << "                    @@@@o@;:(.,' " << std::endl;
		file << "                `.. @@@@o@::; " << std::endl;
		file << "                   `)@@@o@::; " << std::endl;
		file << "                    @@@(o)::; " << std::endl;
		file << "                   .@@@@@@::; " << std::endl;
		file << "                   ;@@@@@@::;. " << std::endl;
		file << "                  ;@@@@@@@:;;;. " << std::endl;
		file << "              ...;@@@@@@@@:;;;;,.. " << std::endl;

	}
	else
		throw FileNotOpen();
}
