
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_pipeline_ValidationConsumer$MixedRecognizer__
#define __gnu_xml_pipeline_ValidationConsumer$MixedRecognizer__

#pragma interface

#include <gnu/xml/pipeline/ValidationConsumer$Recognizer.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace pipeline
      {
          class ValidationConsumer;
          class ValidationConsumer$ElementInfo;
          class ValidationConsumer$MixedRecognizer;
          class ValidationConsumer$Recognizer;
      }
    }
  }
}

class gnu::xml::pipeline::ValidationConsumer$MixedRecognizer : public ::gnu::xml::pipeline::ValidationConsumer$Recognizer
{

public:
  ValidationConsumer$MixedRecognizer(::gnu::xml::pipeline::ValidationConsumer$ElementInfo *, ::gnu::xml::pipeline::ValidationConsumer *);
public: // actually package-private
  ::gnu::xml::pipeline::ValidationConsumer$Recognizer * acceptElement(::java::lang::String *);
private:
  JArray< ::java::lang::String * > * __attribute__((aligned(__alignof__( ::gnu::xml::pipeline::ValidationConsumer$Recognizer)))) permitted;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_pipeline_ValidationConsumer$MixedRecognizer__