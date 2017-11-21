// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: order.proto

#ifndef PROTOBUF_order_2eproto__INCLUDED
#define PROTOBUF_order_2eproto__INCLUDED

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
void  protobuf_AddDesc_order_2eproto();
void protobuf_AssignDesc_order_2eproto();
void protobuf_ShutdownFile_order_2eproto();

class Order;

// ===================================================================

class Order : public ::google::protobuf::Message {
 public:
  Order();
  virtual ~Order();

  Order(const Order& from);

  inline Order& operator=(const Order& from) {
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
  static const Order& default_instance();

  void Swap(Order* other);

  // implements Message ----------------------------------------------

  Order* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Order& from);
  void MergeFrom(const Order& from);
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

  // required int32 time = 1;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 1;
  inline ::google::protobuf::int32 time() const;
  inline void set_time(::google::protobuf::int32 value);

  // required int32 userid = 2;
  inline bool has_userid() const;
  inline void clear_userid();
  static const int kUseridFieldNumber = 2;
  inline ::google::protobuf::int32 userid() const;
  inline void set_userid(::google::protobuf::int32 value);

  // required float price = 3;
  inline bool has_price() const;
  inline void clear_price();
  static const int kPriceFieldNumber = 3;
  inline float price() const;
  inline void set_price(float value);

  // optional string desc = 4;
  inline bool has_desc() const;
  inline void clear_desc();
  static const int kDescFieldNumber = 4;
  inline const ::std::string& desc() const;
  inline void set_desc(const ::std::string& value);
  inline void set_desc(const char* value);
  inline void set_desc(const char* value, size_t size);
  inline ::std::string* mutable_desc();
  inline ::std::string* release_desc();
  inline void set_allocated_desc(::std::string* desc);

  // @@protoc_insertion_point(class_scope:Order)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_userid();
  inline void clear_has_userid();
  inline void set_has_price();
  inline void clear_has_price();
  inline void set_has_desc();
  inline void clear_has_desc();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 time_;
  ::google::protobuf::int32 userid_;
  ::std::string* desc_;
  float price_;
  friend void  protobuf_AddDesc_order_2eproto();
  friend void protobuf_AssignDesc_order_2eproto();
  friend void protobuf_ShutdownFile_order_2eproto();

  void InitAsDefaultInstance();
  static Order* default_instance_;
};
// ===================================================================


// ===================================================================

// Order

// required int32 time = 1;
inline bool Order::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Order::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Order::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Order::clear_time() {
  time_ = 0;
  clear_has_time();
}
inline ::google::protobuf::int32 Order::time() const {
  // @@protoc_insertion_point(field_get:Order.time)
  return time_;
}
inline void Order::set_time(::google::protobuf::int32 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:Order.time)
}

// required int32 userid = 2;
inline bool Order::has_userid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Order::set_has_userid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Order::clear_has_userid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Order::clear_userid() {
  userid_ = 0;
  clear_has_userid();
}
inline ::google::protobuf::int32 Order::userid() const {
  // @@protoc_insertion_point(field_get:Order.userid)
  return userid_;
}
inline void Order::set_userid(::google::protobuf::int32 value) {
  set_has_userid();
  userid_ = value;
  // @@protoc_insertion_point(field_set:Order.userid)
}

// required float price = 3;
inline bool Order::has_price() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Order::set_has_price() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Order::clear_has_price() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Order::clear_price() {
  price_ = 0;
  clear_has_price();
}
inline float Order::price() const {
  // @@protoc_insertion_point(field_get:Order.price)
  return price_;
}
inline void Order::set_price(float value) {
  set_has_price();
  price_ = value;
  // @@protoc_insertion_point(field_set:Order.price)
}

// optional string desc = 4;
inline bool Order::has_desc() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Order::set_has_desc() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Order::clear_has_desc() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Order::clear_desc() {
  if (desc_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    desc_->clear();
  }
  clear_has_desc();
}
inline const ::std::string& Order::desc() const {
  // @@protoc_insertion_point(field_get:Order.desc)
  return *desc_;
}
inline void Order::set_desc(const ::std::string& value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
  // @@protoc_insertion_point(field_set:Order.desc)
}
inline void Order::set_desc(const char* value) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    desc_ = new ::std::string;
  }
  desc_->assign(value);
  // @@protoc_insertion_point(field_set_char:Order.desc)
}
inline void Order::set_desc(const char* value, size_t size) {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    desc_ = new ::std::string;
  }
  desc_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Order.desc)
}
inline ::std::string* Order::mutable_desc() {
  set_has_desc();
  if (desc_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    desc_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:Order.desc)
  return desc_;
}
inline ::std::string* Order::release_desc() {
  clear_has_desc();
  if (desc_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = desc_;
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Order::set_allocated_desc(::std::string* desc) {
  if (desc_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete desc_;
  }
  if (desc) {
    set_has_desc();
    desc_ = desc;
  } else {
    clear_has_desc();
    desc_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:Order.desc)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_order_2eproto__INCLUDED