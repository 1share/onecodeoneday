// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: family.proto

#ifndef PROTOBUF_family_2eproto__INCLUDED
#define PROTOBUF_family_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_family_2eproto();
void protobuf_AssignDesc_family_2eproto();
void protobuf_ShutdownFile_family_2eproto();

class Person;
class Family;

// ===================================================================

class Person : public ::google::protobuf::Message {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  void Swap(Person* other);

  // implements Message ----------------------------------------------

  Person* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 age = 1;
  inline bool has_age() const;
  inline void clear_age();
  static const int kAgeFieldNumber = 1;
  inline ::google::protobuf::int32 age() const;
  inline void set_age(::google::protobuf::int32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:Person)
 private:
  inline void set_has_age();
  inline void clear_has_age();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::int32 age_;
  friend void  protobuf_AddDesc_family_2eproto();
  friend void protobuf_AssignDesc_family_2eproto();
  friend void protobuf_ShutdownFile_family_2eproto();

  void InitAsDefaultInstance();
  static Person* default_instance_;
};
// -------------------------------------------------------------------

class Family : public ::google::protobuf::Message {
 public:
  Family();
  virtual ~Family();

  Family(const Family& from);

  inline Family& operator=(const Family& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Family& default_instance();

  void Swap(Family* other);

  // implements Message ----------------------------------------------

  Family* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Family& from);
  void MergeFrom(const Family& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Person person = 1;
  inline int person_size() const;
  inline void clear_person();
  static const int kPersonFieldNumber = 1;
  inline const ::Person& person(int index) const;
  inline ::Person* mutable_person(int index);
  inline ::Person* add_person();
  inline const ::google::protobuf::RepeatedPtrField< ::Person >&
      person() const;
  inline ::google::protobuf::RepeatedPtrField< ::Person >*
      mutable_person();

  // @@protoc_insertion_point(class_scope:Family)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Person > person_;
  friend void  protobuf_AddDesc_family_2eproto();
  friend void protobuf_AssignDesc_family_2eproto();
  friend void protobuf_ShutdownFile_family_2eproto();

  void InitAsDefaultInstance();
  static Family* default_instance_;
};
// ===================================================================


// ===================================================================

// Person

// required int32 age = 1;
inline bool Person::has_age() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_age() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_age() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_age() {
  age_ = 0;
  clear_has_age();
}
inline ::google::protobuf::int32 Person::age() const {
  // @@protoc_insertion_point(field_get:Person.age)
  return age_;
}
inline void Person::set_age(::google::protobuf::int32 value) {
  set_has_age();
  age_ = value;
  // @@protoc_insertion_point(field_set:Person.age)
}

// required string name = 2;
inline bool Person::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:Person.name)
  return *name_;
}
inline void Person::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:Person.name)
}
inline void Person::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:Person.name)
}
inline void Person::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Person.name)
}
inline ::std::string* Person::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Person.name)
  return name_;
}
inline ::std::string* Person::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Person::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Person.name)
}

// -------------------------------------------------------------------

// Family

// repeated .Person person = 1;
inline int Family::person_size() const {
  return person_.size();
}
inline void Family::clear_person() {
  person_.Clear();
}
inline const ::Person& Family::person(int index) const {
  // @@protoc_insertion_point(field_get:Family.person)
  return person_.Get(index);
}
inline ::Person* Family::mutable_person(int index) {
  // @@protoc_insertion_point(field_mutable:Family.person)
  return person_.Mutable(index);
}
inline ::Person* Family::add_person() {
  // @@protoc_insertion_point(field_add:Family.person)
  return person_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Person >&
Family::person() const {
  // @@protoc_insertion_point(field_list:Family.person)
  return person_;
}
inline ::google::protobuf::RepeatedPtrField< ::Person >*
Family::mutable_person() {
  // @@protoc_insertion_point(field_mutable_list:Family.person)
  return &person_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_family_2eproto__INCLUDED