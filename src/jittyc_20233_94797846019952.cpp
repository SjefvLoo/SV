#define INDEX_BOUND 710
#define ARITY_BOUND 12
#include "mcrl2/data/detail/rewrite/jittycpreamble.h"
namespace {
// Anonymous namespace so the compiler uses internal linkage for the generated
// rewrite code.

struct rewr_functions
{
  // A rewrite_term is a term that may or may not be in normal form. If the method
  // normal_form is invoked, it will calculate a normal form for itself as efficiently as possible.
  template <class REWRITE_TERM>
  static data_expression local_rewrite(const REWRITE_TERM& t)
  {
    return t.normal_form();
  }

  static const data_expression& local_rewrite(const data_expression& t)
  {
    return t;
  }

static application make_term_with_many_arguments(const data_expression& head, const data_expression& arg1, const data_expression& arg2, const data_expression& arg3, const data_expression& arg4, const data_expression& arg5, const data_expression& arg6, const data_expression& arg7)
{
  atermpp::detail::_aterm* buffer[7];
  buffer[0] = atermpp::detail::address(arg1);
  buffer[1] = atermpp::detail::address(arg2);
  buffer[2] = atermpp::detail::address(arg3);
  buffer[3] = atermpp::detail::address(arg4);
  buffer[4] = atermpp::detail::address(arg5);
  buffer[5] = atermpp::detail::address(arg6);
  buffer[6] = atermpp::detail::address(arg7);
  return application(head, reinterpret_cast<data_expression*>(buffer), reinterpret_cast<data_expression*>(buffer) + 7);
}

static application make_term_with_many_arguments(const data_expression& head, const data_expression& arg1, const data_expression& arg2, const data_expression& arg3, const data_expression& arg4, const data_expression& arg5, const data_expression& arg6, const data_expression& arg7, const data_expression& arg8)
{
  atermpp::detail::_aterm* buffer[8];
  buffer[0] = atermpp::detail::address(arg1);
  buffer[1] = atermpp::detail::address(arg2);
  buffer[2] = atermpp::detail::address(arg3);
  buffer[3] = atermpp::detail::address(arg4);
  buffer[4] = atermpp::detail::address(arg5);
  buffer[5] = atermpp::detail::address(arg6);
  buffer[6] = atermpp::detail::address(arg7);
  buffer[7] = atermpp::detail::address(arg8);
  return application(head, reinterpret_cast<data_expression*>(buffer), reinterpret_cast<data_expression*>(buffer) + 8);
}

  template < class HEAD, class DATA_EXPR0 >
  class delayed_application1
  {
    protected:
      const HEAD& m_head;
      const DATA_EXPR0& m_arg0;

    public:
      delayed_application1(const HEAD& head, const DATA_EXPR0& arg0)
        : m_head(head), m_arg0(arg0)
      {}

      data_expression normal_form() const
      {
        return rewrite_with_arguments_in_normal_form(application(local_rewrite(m_head), local_rewrite(m_arg0)));
      }

  };
  template < class HEAD, class DATA_EXPR0, class DATA_EXPR1 >
  class delayed_application2
  {
    protected:
      const HEAD& m_head;
      const DATA_EXPR0& m_arg0;
      const DATA_EXPR1& m_arg1;

    public:
      delayed_application2(const HEAD& head, const DATA_EXPR0& arg0, const DATA_EXPR1& arg1)
        : m_head(head), m_arg0(arg0), m_arg1(arg1)
      {}

      data_expression normal_form() const
      {
        return rewrite_with_arguments_in_normal_form(application(local_rewrite(m_head), local_rewrite(m_arg0), local_rewrite(m_arg1)));
      }

  };
  template < class HEAD, class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2 >
  class delayed_application3
  {
    protected:
      const HEAD& m_head;
      const DATA_EXPR0& m_arg0;
      const DATA_EXPR1& m_arg1;
      const DATA_EXPR2& m_arg2;

    public:
      delayed_application3(const HEAD& head, const DATA_EXPR0& arg0, const DATA_EXPR1& arg1, const DATA_EXPR2& arg2)
        : m_head(head), m_arg0(arg0), m_arg1(arg1), m_arg2(arg2)
      {}

      data_expression normal_form() const
      {
        return rewrite_with_arguments_in_normal_form(application(local_rewrite(m_head), local_rewrite(m_arg0), local_rewrite(m_arg1), local_rewrite(m_arg2)));
      }

  };
  template < class HEAD, class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3 >
  class delayed_application4
  {
    protected:
      const HEAD& m_head;
      const DATA_EXPR0& m_arg0;
      const DATA_EXPR1& m_arg1;
      const DATA_EXPR2& m_arg2;
      const DATA_EXPR3& m_arg3;

    public:
      delayed_application4(const HEAD& head, const DATA_EXPR0& arg0, const DATA_EXPR1& arg1, const DATA_EXPR2& arg2, const DATA_EXPR3& arg3)
        : m_head(head), m_arg0(arg0), m_arg1(arg1), m_arg2(arg2), m_arg3(arg3)
      {}

      data_expression normal_form() const
      {
        return rewrite_with_arguments_in_normal_form(application(local_rewrite(m_head), local_rewrite(m_arg0), local_rewrite(m_arg1), local_rewrite(m_arg2), local_rewrite(m_arg3)));
      }

  };
  template < class HEAD, class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4 >
  class delayed_application5
  {
    protected:
      const HEAD& m_head;
      const DATA_EXPR0& m_arg0;
      const DATA_EXPR1& m_arg1;
      const DATA_EXPR2& m_arg2;
      const DATA_EXPR3& m_arg3;
      const DATA_EXPR4& m_arg4;

    public:
      delayed_application5(const HEAD& head, const DATA_EXPR0& arg0, const DATA_EXPR1& arg1, const DATA_EXPR2& arg2, const DATA_EXPR3& arg3, const DATA_EXPR4& arg4)
        : m_head(head), m_arg0(arg0), m_arg1(arg1), m_arg2(arg2), m_arg3(arg3), m_arg4(arg4)
      {}

      data_expression normal_form() const
      {
        return rewrite_with_arguments_in_normal_form(application(local_rewrite(m_head), local_rewrite(m_arg0), local_rewrite(m_arg1), local_rewrite(m_arg2), local_rewrite(m_arg3), local_rewrite(m_arg4)));
      }

  };
  template < class HEAD, class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4, class DATA_EXPR5, class DATA_EXPR6 >
  class delayed_application7
  {
    protected:
      const HEAD& m_head;
      const DATA_EXPR0& m_arg0;
      const DATA_EXPR1& m_arg1;
      const DATA_EXPR2& m_arg2;
      const DATA_EXPR3& m_arg3;
      const DATA_EXPR4& m_arg4;
      const DATA_EXPR5& m_arg5;
      const DATA_EXPR6& m_arg6;

    public:
      delayed_application7(const HEAD& head, const DATA_EXPR0& arg0, const DATA_EXPR1& arg1, const DATA_EXPR2& arg2, const DATA_EXPR3& arg3, const DATA_EXPR4& arg4, const DATA_EXPR5& arg5, const DATA_EXPR6& arg6)
        : m_head(head), m_arg0(arg0), m_arg1(arg1), m_arg2(arg2), m_arg3(arg3), m_arg4(arg4), m_arg5(arg5), m_arg6(arg6)
      {}

      data_expression normal_form() const
      {
        return rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(local_rewrite(m_head), local_rewrite(m_arg0), local_rewrite(m_arg1), local_rewrite(m_arg2), local_rewrite(m_arg3), local_rewrite(m_arg4), local_rewrite(m_arg5), local_rewrite(m_arg6)));
      }

  };
  // We're declaring static members in a struct rather than simple functions in
  // the global scope, so that we don't have to worry about forward declarations.
  // [16] C3_5: Enum3 # Nat # Nat # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_16_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52390) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52330) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52360) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52cc0), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_16_4_term(const application& t) { return rewr_16_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_16_4_term_arg_in_normal_form(const application& t) { return rewr_16_4(t[0], t[1], t[2], t[3]); }


  // [16] C3_5: Enum3 # Nat # Nat # Nat -> Nat
  static inline const data_expression& rewr_16_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f84ba0);
  }

  static inline data_expression rewr_16_0_term(const application&) { return rewr_16_0(); }

  static inline data_expression rewr_16_0_term_arg_in_normal_form(const application&) { return rewr_16_0(); }


  // [13] C6_3: Enum6 # Position # Position # Position # Position # Position # Position -> Position
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4, class DATA_EXPR5, class DATA_EXPR6>
  static inline data_expression rewr_13_7(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4, const DATA_EXPR5& arg_not_nf5, const DATA_EXPR6& arg_not_nf6)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e5_6, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@N(@@N(@@R(@var_0))))))))), @@F(e0_6, @@D(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_5, @@R(@var_5))))))))), @@F(e4_6, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@N(@@N(@@R(@var_1))))))))), @@F(e1_6, @@D(@@N(@@N(@@N(@@N(@@N(@@S(@var_4, @@N(@@R(@var_4))))))))), @@F(e3_6, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@N(@@N(@@R(@var_2))))))))), @@F(e2_6, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@N(@@N(@@R(@var_3))))))))), @@X))))))
    {
      if (uint_address(arg0) == 0x5637d7e51dc0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7ed9210) // F1
        {
          const data_expression& var_5 = local_rewrite(arg_not_nf6); // S1
          return var_5; // R1 @var_5
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7ed92d0) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7ed9240) // F1
            {
              const data_expression& var_4 = local_rewrite(arg_not_nf5); // S1
              return var_4; // R1 @var_4
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7ed92a0) // F1
              {
                const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
                return var_2; // R1 @var_2
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ed9270) // F1
                {
                  const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
                  return var_3; // R1 @var_3
                }
                else
                {
                }
              }
            }
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@A(4)
    const data_expression arg4 = local_rewrite(arg_not_nf4);
    // Considering argument 4
    // @@A(5)
    const data_expression arg5 = local_rewrite(arg_not_nf5);
    // Considering argument 5
    // @@A(6)
    const data_expression arg6 = local_rewrite(arg_not_nf6);
    // Considering argument 6
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X)), @@X)), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          if (var_1 == arg4) // M
          {
            if (var_1 == arg5) // M
            {
              if (var_1 == arg6) // M
              {
                return var_1; // R1 @var_1
              }
              else
              {
              }
            }
            else
            {
            }
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return make_term_with_many_arguments(data_expression((atermpp::detail::_aterm*)0x5637d7e52d50), arg0, arg1, arg2, arg3, arg4, arg5, arg6);
  }

  static inline data_expression rewr_13_7_term(const application& t) { return rewr_13_7(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4]), term_not_in_normal_form(t[5]), term_not_in_normal_form(t[6])); }

  static inline data_expression rewr_13_7_term_arg_in_normal_form(const application& t) { return rewr_13_7(t[0], t[1], t[2], t[3], t[4], t[5], t[6]); }


  // [13] C6_3: Enum6 # Position # Position # Position # Position # Position # Position -> Position
  static inline const data_expression& rewr_13_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f8ccc0);
  }

  static inline data_expression rewr_13_0_term(const application&) { return rewr_13_0(); }

  static inline data_expression rewr_13_0_term_arg_in_normal_form(const application&) { return rewr_13_0(); }


  // [12] C6_2: Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4, class DATA_EXPR5, class DATA_EXPR6>
  static inline data_expression rewr_12_7(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4, const DATA_EXPR5& arg_not_nf5, const DATA_EXPR6& arg_not_nf6)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e5_6, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@N(@@N(@@R(@var_0))))))))), @@F(e0_6, @@D(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_5, @@R(@var_5))))))))), @@F(e4_6, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@N(@@N(@@R(@var_1))))))))), @@F(e1_6, @@D(@@N(@@N(@@N(@@N(@@N(@@S(@var_4, @@N(@@R(@var_4))))))))), @@F(e3_6, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@N(@@N(@@R(@var_2))))))))), @@F(e2_6, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@N(@@N(@@R(@var_3))))))))), @@X))))))
    {
      if (uint_address(arg0) == 0x5637d7e51dc0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7ed9210) // F1
        {
          const data_expression& var_5 = local_rewrite(arg_not_nf6); // S1
          return var_5; // R1 @var_5
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7ed92d0) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7ed9240) // F1
            {
              const data_expression& var_4 = local_rewrite(arg_not_nf5); // S1
              return var_4; // R1 @var_4
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7ed92a0) // F1
              {
                const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
                return var_2; // R1 @var_2
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ed9270) // F1
                {
                  const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
                  return var_3; // R1 @var_3
                }
                else
                {
                }
              }
            }
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@A(4)
    const data_expression arg4 = local_rewrite(arg_not_nf4);
    // Considering argument 4
    // @@A(5)
    const data_expression arg5 = local_rewrite(arg_not_nf5);
    // Considering argument 5
    // @@A(6)
    const data_expression arg6 = local_rewrite(arg_not_nf6);
    // Considering argument 6
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X)), @@X)), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          if (var_1 == arg4) // M
          {
            if (var_1 == arg5) // M
            {
              if (var_1 == arg6) // M
              {
                return var_1; // R1 @var_1
              }
              else
              {
              }
            }
            else
            {
            }
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return make_term_with_many_arguments(data_expression((atermpp::detail::_aterm*)0x5637d7e52d80), arg0, arg1, arg2, arg3, arg4, arg5, arg6);
  }

  static inline data_expression rewr_12_7_term(const application& t) { return rewr_12_7(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4]), term_not_in_normal_form(t[5]), term_not_in_normal_form(t[6])); }

  static inline data_expression rewr_12_7_term_arg_in_normal_form(const application& t) { return rewr_12_7(t[0], t[1], t[2], t[3], t[4], t[5], t[6]); }


  // [12] C6_2: Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot
  static inline const data_expression& rewr_12_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f933f0);
  }

  static inline data_expression rewr_12_0_term(const application&) { return rewr_12_0(); }

  static inline data_expression rewr_12_0_term_arg_in_normal_form(const application&) { return rewr_12_0(); }


  // [11] C6_1: Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4, class DATA_EXPR5, class DATA_EXPR6>
  static inline data_expression rewr_11_7(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4, const DATA_EXPR5& arg_not_nf5, const DATA_EXPR6& arg_not_nf6)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e5_6, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@N(@@N(@@R(@var_0))))))))), @@F(e0_6, @@D(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_5, @@R(@var_5))))))))), @@F(e4_6, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@N(@@N(@@R(@var_1))))))))), @@F(e1_6, @@D(@@N(@@N(@@N(@@N(@@N(@@S(@var_4, @@N(@@R(@var_4))))))))), @@F(e3_6, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@N(@@N(@@R(@var_2))))))))), @@F(e2_6, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@N(@@N(@@R(@var_3))))))))), @@X))))))
    {
      if (uint_address(arg0) == 0x5637d7e51dc0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7ed9210) // F1
        {
          const data_expression& var_5 = local_rewrite(arg_not_nf6); // S1
          return var_5; // R1 @var_5
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7ed92d0) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7ed9240) // F1
            {
              const data_expression& var_4 = local_rewrite(arg_not_nf5); // S1
              return var_4; // R1 @var_4
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7ed92a0) // F1
              {
                const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
                return var_2; // R1 @var_2
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ed9270) // F1
                {
                  const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
                  return var_3; // R1 @var_3
                }
                else
                {
                }
              }
            }
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@A(4)
    const data_expression arg4 = local_rewrite(arg_not_nf4);
    // Considering argument 4
    // @@A(5)
    const data_expression arg5 = local_rewrite(arg_not_nf5);
    // Considering argument 5
    // @@A(6)
    const data_expression arg6 = local_rewrite(arg_not_nf6);
    // Considering argument 6
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X)), @@X)), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          if (var_1 == arg4) // M
          {
            if (var_1 == arg5) // M
            {
              if (var_1 == arg6) // M
              {
                return var_1; // R1 @var_1
              }
              else
              {
              }
            }
            else
            {
            }
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return make_term_with_many_arguments(data_expression((atermpp::detail::_aterm*)0x5637d7e52db0), arg0, arg1, arg2, arg3, arg4, arg5, arg6);
  }

  static inline data_expression rewr_11_7_term(const application& t) { return rewr_11_7(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4]), term_not_in_normal_form(t[5]), term_not_in_normal_form(t[6])); }

  static inline data_expression rewr_11_7_term_arg_in_normal_form(const application& t) { return rewr_11_7(t[0], t[1], t[2], t[3], t[4], t[5], t[6]); }


  // [11] C6_1: Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool
  static inline const data_expression& rewr_11_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f93f80);
  }

  static inline data_expression rewr_11_0_term(const application&) { return rewr_11_0(); }

  static inline data_expression rewr_11_0_term_arg_in_normal_form(const application&) { return rewr_11_0(); }


  // [10] C6_: Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4, class DATA_EXPR5, class DATA_EXPR6>
  static inline data_expression rewr_10_7(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4, const DATA_EXPR5& arg_not_nf5, const DATA_EXPR6& arg_not_nf6)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e5_6, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@N(@@N(@@R(@var_0))))))))), @@F(e0_6, @@D(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_5, @@R(@var_5))))))))), @@F(e4_6, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@N(@@N(@@R(@var_1))))))))), @@F(e1_6, @@D(@@N(@@N(@@N(@@N(@@N(@@S(@var_4, @@N(@@R(@var_4))))))))), @@F(e3_6, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@N(@@N(@@R(@var_2))))))))), @@F(e2_6, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@N(@@N(@@R(@var_3))))))))), @@X))))))
    {
      if (uint_address(arg0) == 0x5637d7e51dc0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7ed9210) // F1
        {
          const data_expression& var_5 = local_rewrite(arg_not_nf6); // S1
          return var_5; // R1 @var_5
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7ed92d0) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7ed9240) // F1
            {
              const data_expression& var_4 = local_rewrite(arg_not_nf5); // S1
              return var_4; // R1 @var_4
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7ed92a0) // F1
              {
                const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
                return var_2; // R1 @var_2
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ed9270) // F1
                {
                  const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
                  return var_3; // R1 @var_3
                }
                else
                {
                }
              }
            }
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@A(4)
    const data_expression arg4 = local_rewrite(arg_not_nf4);
    // Considering argument 4
    // @@A(5)
    const data_expression arg5 = local_rewrite(arg_not_nf5);
    // Considering argument 5
    // @@A(6)
    const data_expression arg6 = local_rewrite(arg_not_nf6);
    // Considering argument 6
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X)), @@X)), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          if (var_1 == arg4) // M
          {
            if (var_1 == arg5) // M
            {
              if (var_1 == arg6) // M
              {
                return var_1; // R1 @var_1
              }
              else
              {
              }
            }
            else
            {
            }
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return make_term_with_many_arguments(data_expression((atermpp::detail::_aterm*)0x5637d7e52de0), arg0, arg1, arg2, arg3, arg4, arg5, arg6);
  }

  static inline data_expression rewr_10_7_term(const application& t) { return rewr_10_7(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4]), term_not_in_normal_form(t[5]), term_not_in_normal_form(t[6])); }

  static inline data_expression rewr_10_7_term_arg_in_normal_form(const application& t) { return rewr_10_7(t[0], t[1], t[2], t[3], t[4], t[5], t[6]); }


  // [10] C6_: Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos
  static inline const data_expression& rewr_10_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f94200);
  }

  static inline data_expression rewr_10_0_term(const application&) { return rewr_10_0(); }

  static inline data_expression rewr_10_0_term_arg_in_normal_form(const application&) { return rewr_10_0(); }


  // [9] C3_4: Enum3 # Recipe # Recipe # Recipe -> Recipe
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_9_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52390) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52330) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52360) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52e10), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_9_4_term(const application& t) { return rewr_9_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_9_4_term_arg_in_normal_form(const application& t) { return rewr_9_4(t[0], t[1], t[2], t[3]); }


  // [9] C3_4: Enum3 # Recipe # Recipe # Recipe -> Recipe
  static inline const data_expression& rewr_9_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f93fb0);
  }

  static inline data_expression rewr_9_0_term(const application&) { return rewr_9_0(); }

  static inline data_expression rewr_9_0_term_arg_in_normal_form(const application&) { return rewr_9_0(); }


  // [8] C3_3: Enum3 # Position # Position # Position -> Position
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_8_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52390) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52330) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52360) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52e40), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_8_4_term(const application& t) { return rewr_8_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_8_4_term_arg_in_normal_form(const application& t) { return rewr_8_4(t[0], t[1], t[2], t[3]); }


  // [8] C3_3: Enum3 # Position # Position # Position -> Position
  static inline const data_expression& rewr_8_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f949f0);
  }

  static inline data_expression rewr_8_0_term(const application&) { return rewr_8_0(); }

  static inline data_expression rewr_8_0_term_arg_in_normal_form(const application&) { return rewr_8_0(); }


  // [7] C3_2: Enum3 # Robot # Robot # Robot -> Robot
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_7_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52390) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52330) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52360) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52e70), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_7_4_term(const application& t) { return rewr_7_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_7_4_term_arg_in_normal_form(const application& t) { return rewr_7_4(t[0], t[1], t[2], t[3]); }


  // [7] C3_2: Enum3 # Robot # Robot # Robot -> Robot
  static inline const data_expression& rewr_7_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f94a20);
  }

  static inline data_expression rewr_7_0_term(const application&) { return rewr_7_0(); }

  static inline data_expression rewr_7_0_term_arg_in_normal_form(const application&) { return rewr_7_0(); }


  // [6] C3_1: Enum3 # Bool # Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_6_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52390) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52330) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52360) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52ea0), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_6_4_term(const application& t) { return rewr_6_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_6_4_term_arg_in_normal_form(const application& t) { return rewr_6_4(t[0], t[1], t[2], t[3]); }


  // [6] C3_1: Enum3 # Bool # Bool # Bool -> Bool
  static inline const data_expression& rewr_6_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f072a0);
  }

  static inline data_expression rewr_6_0_term(const application&) { return rewr_6_0(); }

  static inline data_expression rewr_6_0_term_arg_in_normal_form(const application&) { return rewr_6_0(); }


  // [5] C3_: Enum3 # Pos # Pos # Pos -> Pos
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_5_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52390) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52330) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52360) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52ed0), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_5_4_term(const application& t) { return rewr_5_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_5_4_term_arg_in_normal_form(const application& t) { return rewr_5_4(t[0], t[1], t[2], t[3]); }


  // [5] C3_: Enum3 # Pos # Pos # Pos -> Pos
  static inline const data_expression& rewr_5_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e83af0);
  }

  static inline data_expression rewr_5_0_term(const application&) { return rewr_5_0(); }

  static inline data_expression rewr_5_0_term_arg_in_normal_form(const application&) { return rewr_5_0(); }


  // [4] C4_3: Enum4 # Bool # Bool # Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_4_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@R(@var_0))))))), @@F(e0_4, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@R(@var_3))))))), @@F(e2_4, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@R(@var_1))))))), @@F(e1_4, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@R(@var_2))))))), @@X))))
    {
      if (uint_address(arg0) == 0x5637d7e528a0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52810) // F1
        {
          const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
          return var_3; // R1 @var_3
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52870) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7e52840) // F1
            {
              const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
              return var_2; // R1 @var_2
            }
            else
            {
            }
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@A(4)
    const data_expression arg4 = local_rewrite(arg_not_nf4);
    // Considering argument 4
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          if (var_1 == arg4) // M
          {
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52f00), arg0, arg1, arg2, arg3, arg4);
  }

  static inline data_expression rewr_4_5_term(const application& t) { return rewr_4_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_4_5_term_arg_in_normal_form(const application& t) { return rewr_4_5(t[0], t[1], t[2], t[3], t[4]); }


  // [4] C4_3: Enum4 # Bool # Bool # Bool # Bool -> Bool
  static inline const data_expression& rewr_4_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef6ef0);
  }

  static inline data_expression rewr_4_0_term(const application&) { return rewr_4_0(); }

  static inline data_expression rewr_4_0_term_arg_in_normal_form(const application&) { return rewr_4_0(); }


  // [3] C4_2: Enum4 # Pos # Pos # Pos # Pos -> Pos
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_3_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@R(@var_0))))))), @@F(e0_4, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@R(@var_3))))))), @@F(e2_4, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@R(@var_1))))))), @@F(e1_4, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@R(@var_2))))))), @@X))))
    {
      if (uint_address(arg0) == 0x5637d7e528a0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52810) // F1
        {
          const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
          return var_3; // R1 @var_3
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52870) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7e52840) // F1
            {
              const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
              return var_2; // R1 @var_2
            }
            else
            {
            }
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@A(4)
    const data_expression arg4 = local_rewrite(arg_not_nf4);
    // Considering argument 4
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          if (var_1 == arg4) // M
          {
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52f30), arg0, arg1, arg2, arg3, arg4);
  }

  static inline data_expression rewr_3_5_term(const application& t) { return rewr_3_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_3_5_term_arg_in_normal_form(const application& t) { return rewr_3_5(t[0], t[1], t[2], t[3], t[4]); }


  // [3] C4_2: Enum4 # Pos # Pos # Pos # Pos -> Pos
  static inline const data_expression& rewr_3_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e70c80);
  }

  static inline data_expression rewr_3_0_term(const application&) { return rewr_3_0(); }

  static inline data_expression rewr_3_0_term_arg_in_normal_form(const application&) { return rewr_3_0(); }


  // [2] C4_1: Enum4 # Position # Position # Position # Position -> Position
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_2_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@R(@var_0))))))), @@F(e0_4, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@R(@var_3))))))), @@F(e2_4, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@R(@var_1))))))), @@F(e1_4, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@R(@var_2))))))), @@X))))
    {
      if (uint_address(arg0) == 0x5637d7e528a0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52810) // F1
        {
          const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
          return var_3; // R1 @var_3
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52870) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7e52840) // F1
            {
              const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
              return var_2; // R1 @var_2
            }
            else
            {
            }
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@A(4)
    const data_expression arg4 = local_rewrite(arg_not_nf4);
    // Considering argument 4
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          if (var_1 == arg4) // M
          {
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52f60), arg0, arg1, arg2, arg3, arg4);
  }

  static inline data_expression rewr_2_5_term(const application& t) { return rewr_2_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_2_5_term_arg_in_normal_form(const application& t) { return rewr_2_5(t[0], t[1], t[2], t[3], t[4]); }


  // [2] C4_1: Enum4 # Position # Position # Position # Position -> Position
  static inline const data_expression& rewr_2_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9f5d0);
  }

  static inline data_expression rewr_2_0_term(const application&) { return rewr_2_0(); }

  static inline data_expression rewr_2_0_term_arg_in_normal_form(const application&) { return rewr_2_0(); }


  // [1] C4_: Enum4 # Robot # Robot # Robot # Robot -> Robot
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_1_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@R(@var_0))))))), @@F(e0_4, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@R(@var_3))))))), @@F(e2_4, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@R(@var_1))))))), @@F(e1_4, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@R(@var_2))))))), @@X))))
    {
      if (uint_address(arg0) == 0x5637d7e528a0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52810) // F1
        {
          const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
          return var_3; // R1 @var_3
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52870) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7e52840) // F1
            {
              const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
              return var_2; // R1 @var_2
            }
            else
            {
            }
          }
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(3)
    const data_expression arg3 = local_rewrite(arg_not_nf3);
    // Considering argument 3
    // @@A(4)
    const data_expression arg4 = local_rewrite(arg_not_nf4);
    // Considering argument 4
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X)), @@X)), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        if (var_1 == arg3) // M
        {
          if (var_1 == arg4) // M
          {
            return var_1; // R1 @var_1
          }
          else
          {
          }
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e52f90), arg0, arg1, arg2, arg3, arg4);
  }

  static inline data_expression rewr_1_5_term(const application& t) { return rewr_1_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_1_5_term_arg_in_normal_form(const application& t) { return rewr_1_5(t[0], t[1], t[2], t[3], t[4]); }


  // [1] C4_: Enum4 # Robot # Robot # Robot # Robot -> Robot
  static inline const data_expression& rewr_1_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e6c530);
  }

  static inline data_expression rewr_1_0_term(const application&) { return rewr_1_0(); }

  static inline data_expression rewr_1_0_term_arg_in_normal_form(const application&) { return rewr_1_0(); }


  // [0] allowed: Set(RobotPositionT)
  static inline const data_expression& rewr_0_0()

  {
    // @@R({rpt(RobotOne, Tray, ChuckIn), rpt(RobotOne, ChuckOut, Tray), rpt(RobotTwo, ChuckIn, ChuckMeas), rpt(RobotTwo, ChuckEmptyOne, ChuckMeas), rpt(RobotTwo, ChuckMeas, ChuckEmptyOne), rpt(RobotThree, ChuckMeas, ChuckOut), rpt(RobotThree, ChuckEmptyTwo, ChuckMeas), rpt(RobotThree, ChuckMeas, ChuckEmptyTwo)})
    {
      static data_expression static_term(local_rewrite(*reinterpret_cast<const data_expression*>(0x5637d7f05a40)));
      return static_term; // R2a
    }
    return *reinterpret_cast<const data_expression*>(0x5637d7f05a40);
  }

  static inline data_expression rewr_0_0_term(const application&) { return rewr_0_0(); }

  static inline data_expression rewr_0_0_term_arg_in_normal_form(const application&) { return rewr_0_0(); }


  // [698] @equal_arguments: Enum6 # Enum6 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_698_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e5_6, @@D(@@N(@@F(e5_6, @@R(true), @@X))), @@F(e0_6, @@D(@@N(@@F(e0_6, @@R(true), @@X))), @@F(e4_6, @@D(@@N(@@F(e4_6, @@R(true), @@X))), @@F(e1_6, @@D(@@N(@@F(e1_6, @@R(true), @@X))), @@F(e3_6, @@D(@@N(@@F(e3_6, @@R(true), @@X))), @@F(e2_6, @@D(@@N(@@F(e2_6, @@R(true), @@X))), @@X))))))
    {
      if (uint_address(arg0) == 0x5637d7e51dc0) // F1
      {
        if (uint_address(arg1) == 0x5637d7e51dc0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7ed9210) // F1
        {
          if (uint_address(arg1) == 0x5637d7ed9210) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7ed92d0) // F1
          {
            if (uint_address(arg1) == 0x5637d7ed92d0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7ed9240) // F1
            {
              if (uint_address(arg1) == 0x5637d7ed9240) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
              }
              else
              {
              }
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7ed92a0) // F1
              {
                if (uint_address(arg1) == 0x5637d7ed92a0) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
                }
                else
                {
                }
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ed9270) // F1
                {
                  if (uint_address(arg1) == 0x5637d7ed9270) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
                  }
                  else
                  {
                  }
                }
                else
                {
                }
              }
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecd740), arg0, arg1);
  }

  static inline data_expression rewr_698_2_term(const application& t) { return rewr_698_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_698_2_term_arg_in_normal_form(const application& t) { return rewr_698_2(t[0], t[1]); }


  // [698] @equal_arguments: Enum6 # Enum6 -> Bool
  static inline const data_expression& rewr_698_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f38300);
  }

  static inline data_expression rewr_698_0_term(const application&) { return rewr_698_0(); }

  static inline data_expression rewr_698_0_term_arg_in_normal_form(const application&) { return rewr_698_0(); }


  // [697] @to_pos: Enum6 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_697_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e5_6, @@R(1), @@F(e0_6, @@R(6), @@F(e4_6, @@R(2), @@F(e1_6, @@R(5), @@F(e3_6, @@R(3), @@F(e2_6, @@R(4), @@X))))))
    {
      if (uint_address(arg0) == 0x5637d7e51dc0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e75280); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7ed9210) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7e795b0); // R1 6
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7ed92d0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7e79790); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7ed9240) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7e798d0); // R1 5
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7ed92a0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7e79970); // R1 3
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ed9270) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x5637d7e79bf0); // R1 4
                }
                else
                {
                }
              }
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecd770), arg0);
  }

  static inline data_expression rewr_697_1_term(const application& t) { return rewr_697_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_697_1_term_arg_in_normal_form(const application& t) { return rewr_697_1(t[0]); }


  // [697] @to_pos: Enum6 -> Pos
  static inline const data_expression& rewr_697_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e79c90);
  }

  static inline data_expression rewr_697_0_term(const application&) { return rewr_697_0(); }

  static inline data_expression rewr_697_0_term_arg_in_normal_form(const application&) { return rewr_697_0(); }


  // [677] @equal_arguments: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_677_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e2_3, @@D(@@N(@@F(e2_3, @@R(true), @@X))), @@F(e0_3, @@D(@@N(@@F(e0_3, @@R(true), @@X))), @@F(e1_3, @@D(@@N(@@F(e1_3, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52390) // F1
      {
        if (uint_address(arg1) == 0x5637d7e52390) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52330) // F1
        {
          if (uint_address(arg1) == 0x5637d7e52330) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52360) // F1
          {
            if (uint_address(arg1) == 0x5637d7e52360) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
            }
            else
            {
            }
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ece400), arg0, arg1);
  }

  static inline data_expression rewr_677_2_term(const application& t) { return rewr_677_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_677_2_term_arg_in_normal_form(const application& t) { return rewr_677_2(t[0], t[1]); }


  // [677] @equal_arguments: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_677_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7aff0);
  }

  static inline data_expression rewr_677_0_term(const application&) { return rewr_677_0(); }

  static inline data_expression rewr_677_0_term_arg_in_normal_form(const application&) { return rewr_677_0(); }


  // [676] @to_pos: Enum3 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_676_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@R(1), @@F(e0_3, @@R(3), @@F(e1_3, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52390) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e75280); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52330) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7e79970); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52360) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7e79790); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ece430), arg0);
  }

  static inline data_expression rewr_676_1_term(const application& t) { return rewr_676_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_676_1_term_arg_in_normal_form(const application& t) { return rewr_676_1(t[0]); }


  // [676] @to_pos: Enum3 -> Pos
  static inline const data_expression& rewr_676_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb01c0);
  }

  static inline data_expression rewr_676_0_term(const application&) { return rewr_676_0(); }

  static inline data_expression rewr_676_0_term_arg_in_normal_form(const application&) { return rewr_676_0(); }


  // [659] @equal_arguments: Enum4 # Enum4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_659_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e3_4, @@D(@@N(@@F(e3_4, @@R(true), @@X))), @@F(e0_4, @@D(@@N(@@F(e0_4, @@R(true), @@X))), @@F(e2_4, @@D(@@N(@@F(e2_4, @@R(true), @@X))), @@F(e1_4, @@D(@@N(@@F(e1_4, @@R(true), @@X))), @@X))))
    {
      if (uint_address(arg0) == 0x5637d7e528a0) // F1
      {
        if (uint_address(arg1) == 0x5637d7e528a0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52810) // F1
        {
          if (uint_address(arg1) == 0x5637d7e52810) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52870) // F1
          {
            if (uint_address(arg1) == 0x5637d7e52870) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7e52840) // F1
            {
              if (uint_address(arg1) == 0x5637d7e52840) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
              }
              else
              {
              }
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecf150), arg0, arg1);
  }

  static inline data_expression rewr_659_2_term(const application& t) { return rewr_659_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_659_2_term_arg_in_normal_form(const application& t) { return rewr_659_2(t[0], t[1]); }


  // [659] @equal_arguments: Enum4 # Enum4 -> Bool
  static inline const data_expression& rewr_659_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9ed10);
  }

  static inline data_expression rewr_659_0_term(const application&) { return rewr_659_0(); }

  static inline data_expression rewr_659_0_term_arg_in_normal_form(const application&) { return rewr_659_0(); }


  // [658] @to_pos: Enum4 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_658_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@R(1), @@F(e0_4, @@R(4), @@F(e2_4, @@R(2), @@F(e1_4, @@R(3), @@X))))
    {
      if (uint_address(arg0) == 0x5637d7e528a0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e75280); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52810) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7e79bf0); // R1 4
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7e52870) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7e79790); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7e52840) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7e79970); // R1 3
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecf180), arg0);
  }

  static inline data_expression rewr_658_1_term(const application& t) { return rewr_658_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_658_1_term_arg_in_normal_form(const application& t) { return rewr_658_1(t[0]); }


  // [658] @to_pos: Enum4 -> Pos
  static inline const data_expression& rewr_658_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f3d470);
  }

  static inline data_expression rewr_658_0_term(const application&) { return rewr_658_0(); }

  static inline data_expression rewr_658_0_term_arg_in_normal_form(const application&) { return rewr_658_0(); }


  // [641] @less_arguments: RobotPositionT # RobotPositionT -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_641_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(rpt, @@S(@var_0, @@N(@@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@F(rpt, @@S(@var_3, @@N(@@S(@var_4, @@N(@@S(@var_5, @@R(@var_0 < @var_3 || @var_0 == @var_3 && (@var_1 < @var_4 || @var_1 == @var_4 && @var_2 < @var_5))))))), @@X)))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7ed0110) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7ed0110) // F1
        {
          const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
          const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
          const data_expression& var_5 = down_cast<data_expression>(arg1[3]); // S2
          return rewr_242_2(rewr_280_2(var_0, var_3), delayed_rewr_45_2<delayed_rewr_46_2<data_expression, data_expression>, delayed_rewr_242_2<delayed_rewr_291_2<data_expression, data_expression>, delayed_rewr_45_2<delayed_rewr_48_2<data_expression, data_expression>, delayed_rewr_291_2<data_expression, data_expression>>>>(delayed_rewr_46_2<data_expression, data_expression>(var_0, var_3), delayed_rewr_242_2<delayed_rewr_291_2<data_expression, data_expression>, delayed_rewr_45_2<delayed_rewr_48_2<data_expression, data_expression>, delayed_rewr_291_2<data_expression, data_expression>>>(delayed_rewr_291_2<data_expression, data_expression>(var_1, var_4), delayed_rewr_45_2<delayed_rewr_48_2<data_expression, data_expression>, delayed_rewr_291_2<data_expression, data_expression>>(delayed_rewr_48_2<data_expression, data_expression>(var_1, var_4), delayed_rewr_291_2<data_expression, data_expression>(var_2, var_5))))); // R1 @var_0 < @var_3 || @var_0 == @var_3 && (@var_1 < @var_4 || @var_1 == @var_4 && @var_2 < @var_5)
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecff30), arg0, arg1);
  }

  static inline data_expression rewr_641_2_term(const application& t) { return rewr_641_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_641_2_term_arg_in_normal_form(const application& t) { return rewr_641_2(t[0], t[1]); }


  // [242] ||: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_242_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_242_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_242_2(m_t0, m_t1);
      }
  };
  
  // [45] &&: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_45_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_45_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_45_2(m_t0, m_t1);
      }
  };
  
  // [48] ==: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_48_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_48_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_48_2(m_t0, m_t1);
      }
  };
  
  // [291] <: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_291_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_291_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_291_2(m_t0, m_t1);
      }
  };
  
  // [46] ==: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_46_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_46_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_46_2(m_t0, m_t1);
      }
  };
  
  // [641] @less_arguments: RobotPositionT # RobotPositionT -> Bool
  static inline const data_expression& rewr_641_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e71180);
  }

  static inline data_expression rewr_641_0_term(const application&) { return rewr_641_0(); }

  static inline data_expression rewr_641_0_term_arg_in_normal_form(const application&) { return rewr_641_0(); }


  // [640] @equal_arguments: RobotPositionT # RobotPositionT -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_640_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(rpt, @@S(@var_0, @@N(@@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@F(rpt, @@S(@var_3, @@N(@@S(@var_4, @@N(@@S(@var_5, @@R(@var_0 == @var_3 && @var_1 == @var_4 && @var_2 == @var_5)))))), @@X)))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7ed0110) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7ed0110) // F1
        {
          const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
          const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
          const data_expression& var_5 = down_cast<data_expression>(arg1[3]); // S2
          return rewr_45_2(rewr_46_2(var_0, var_3), delayed_rewr_45_2<delayed_rewr_48_2<data_expression, data_expression>, delayed_rewr_48_2<data_expression, data_expression>>(delayed_rewr_48_2<data_expression, data_expression>(var_1, var_4), delayed_rewr_48_2<data_expression, data_expression>(var_2, var_5))); // R1 @var_0 == @var_3 && @var_1 == @var_4 && @var_2 == @var_5
        }
        else
        {
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecff60), arg0, arg1);
  }

  static inline data_expression rewr_640_2_term(const application& t) { return rewr_640_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_640_2_term_arg_in_normal_form(const application& t) { return rewr_640_2(t[0], t[1]); }


  // [640] @equal_arguments: RobotPositionT # RobotPositionT -> Bool
  static inline const data_expression& rewr_640_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef8750);
  }

  static inline data_expression rewr_640_0_term(const application&) { return rewr_640_0(); }

  static inline data_expression rewr_640_0_term_arg_in_normal_form(const application&) { return rewr_640_0(); }


  // [639] @to_pos: RobotPositionT -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_639_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(rpt, @@N(@@N(@@R(1))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7ed0110) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e75280); // R1 1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecff90), arg0);
  }

  static inline data_expression rewr_639_1_term(const application& t) { return rewr_639_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_639_1_term_arg_in_normal_form(const application& t) { return rewr_639_1(t[0]); }


  // [639] @to_pos: RobotPositionT -> Pos
  static inline const data_expression& rewr_639_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f11a60);
  }

  static inline data_expression rewr_639_0_term(const application&) { return rewr_639_0(); }

  static inline data_expression rewr_639_0_term_arg_in_normal_form(const application&) { return rewr_639_0(); }


  // [50] to: RobotPositionT -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_50_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(rpt, @@N(@@N(@@S(@var_2, @@R(@var_2)))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7ed0110) // F1
      {
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        return var_2; // R1 @var_2
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f205d0), arg0);
  }

  static inline data_expression rewr_50_1_term(const application& t) { return rewr_50_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_50_1_term_arg_in_normal_form(const application& t) { return rewr_50_1(t[0]); }


  // [50] to: RobotPositionT -> Position
  static inline const data_expression& rewr_50_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f21b30);
  }

  static inline data_expression rewr_50_0_term(const application&) { return rewr_50_0(); }

  static inline data_expression rewr_50_0_term_arg_in_normal_form(const application&) { return rewr_50_0(); }


  // [49] from: RobotPositionT -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_49_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(rpt, @@N(@@S(@var_1, @@N(@@R(@var_1)))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7ed0110) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20660), arg0);
  }

  static inline data_expression rewr_49_1_term(const application& t) { return rewr_49_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_49_1_term_arg_in_normal_form(const application& t) { return rewr_49_1(t[0]); }


  // [49] from: RobotPositionT -> Position
  static inline const data_expression& rewr_49_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9ee50);
  }

  static inline data_expression rewr_49_0_term(const application&) { return rewr_49_0(); }

  static inline data_expression rewr_49_0_term_arg_in_normal_form(const application&) { return rewr_49_0(); }


  // [47] robot: RobotPositionT -> Robot
  template < class DATA_EXPR0>
  static inline data_expression rewr_47_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(rpt, @@S(@var_0, @@N(@@N(@@R(@var_0)))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7ed0110) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f206f0), arg0);
  }

  static inline data_expression rewr_47_1_term(const application& t) { return rewr_47_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_47_1_term_arg_in_normal_form(const application& t) { return rewr_47_1(t[0]); }


  // [47] robot: RobotPositionT -> Robot
  static inline const data_expression& rewr_47_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7a7d0);
  }

  static inline data_expression rewr_47_0_term(const application&) { return rewr_47_0(); }

  static inline data_expression rewr_47_0_term_arg_in_normal_form(const application&) { return rewr_47_0(); }


  // [621] @equal_arguments: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_621_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(Empty, @@D(@@N(@@F(Empty, @@R(true), @@X))), @@F(Notifying, @@D(@@N(@@F(Notifying, @@R(true), @@X))), @@F(Wafer, @@D(@@N(@@F(Wafer, @@R(true), @@X))), @@F(Processed, @@D(@@N(@@F(Processed, @@R(true), @@X))), @@X))))
    {
      if (uint_address(arg0) == 0x5637d7f1ffd0) // F1
      {
        if (uint_address(arg1) == 0x5637d7f1ffd0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1ed70) // F1
        {
          if (uint_address(arg1) == 0x5637d7f1ed70) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f20150) // F1
          {
            if (uint_address(arg1) == 0x5637d7f20150) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7f1eef0) // F1
            {
              if (uint_address(arg1) == 0x5637d7f1eef0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
              }
              else
              {
              }
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ed0ce0), arg0, arg1);
  }

  static inline data_expression rewr_621_2_term(const application& t) { return rewr_621_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_621_2_term_arg_in_normal_form(const application& t) { return rewr_621_2(t[0], t[1]); }


  // [621] @equal_arguments: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_621_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f06c60);
  }

  static inline data_expression rewr_621_0_term(const application&) { return rewr_621_0(); }

  static inline data_expression rewr_621_0_term_arg_in_normal_form(const application&) { return rewr_621_0(); }


  // [620] @to_pos: ChuckStatus -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_620_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(Empty, @@R(1), @@F(Notifying, @@R(4), @@F(Wafer, @@R(2), @@F(Processed, @@R(3), @@X))))
    {
      if (uint_address(arg0) == 0x5637d7f1ffd0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e75280); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1ed70) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7e79bf0); // R1 4
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f20150) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7e79790); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7f1eef0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7e79970); // R1 3
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ed0d10), arg0);
  }

  static inline data_expression rewr_620_1_term(const application& t) { return rewr_620_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_620_1_term_arg_in_normal_form(const application& t) { return rewr_620_1(t[0]); }


  // [620] @to_pos: ChuckStatus -> Pos
  static inline const data_expression& rewr_620_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f06da0);
  }

  static inline data_expression rewr_620_0_term(const application&) { return rewr_620_0(); }

  static inline data_expression rewr_620_0_term_arg_in_normal_form(const application&) { return rewr_620_0(); }


  // [603] @less_arguments: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_603_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(RobotOne, @@D(@@N(@@F(RobotOne, @@R(false), @@X))), @@F(RobotThree, @@D(@@N(@@F(RobotThree, @@R(false), @@X))), @@F(RobotTwo, @@D(@@N(@@F(RobotTwo, @@R(false), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7f203c0) // F1
      {
        if (uint_address(arg1) == 0x5637d7f203c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fc70) // F1
        {
          if (uint_address(arg1) == 0x5637d7f1fc70) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f1fc40) // F1
          {
            if (uint_address(arg1) == 0x5637d7f1fc40) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
            }
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ec9910), arg0, arg1);
  }

  static inline data_expression rewr_603_2_term(const application& t) { return rewr_603_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_603_2_term_arg_in_normal_form(const application& t) { return rewr_603_2(t[0], t[1]); }


  // [603] @less_arguments: Robot # Robot -> Bool
  static inline const data_expression& rewr_603_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f09d20);
  }

  static inline data_expression rewr_603_0_term(const application&) { return rewr_603_0(); }

  static inline data_expression rewr_603_0_term_arg_in_normal_form(const application&) { return rewr_603_0(); }


  // [602] @equal_arguments: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_602_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(RobotOne, @@D(@@N(@@F(RobotOne, @@R(true), @@X))), @@F(RobotThree, @@D(@@N(@@F(RobotThree, @@R(true), @@X))), @@F(RobotTwo, @@D(@@N(@@F(RobotTwo, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7f203c0) // F1
      {
        if (uint_address(arg1) == 0x5637d7f203c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fc70) // F1
        {
          if (uint_address(arg1) == 0x5637d7f1fc70) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f1fc40) // F1
          {
            if (uint_address(arg1) == 0x5637d7f1fc40) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
            }
            else
            {
            }
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ec9940), arg0, arg1);
  }

  static inline data_expression rewr_602_2_term(const application& t) { return rewr_602_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_602_2_term_arg_in_normal_form(const application& t) { return rewr_602_2(t[0], t[1]); }


  // [602] @equal_arguments: Robot # Robot -> Bool
  static inline const data_expression& rewr_602_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0a860);
  }

  static inline data_expression rewr_602_0_term(const application&) { return rewr_602_0(); }

  static inline data_expression rewr_602_0_term_arg_in_normal_form(const application&) { return rewr_602_0(); }


  // [601] @to_pos: Robot -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_601_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(RobotOne, @@R(1), @@F(RobotThree, @@R(3), @@F(RobotTwo, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7f203c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e75280); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fc70) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7e79970); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f1fc40) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7e79790); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ec9970), arg0);
  }

  static inline data_expression rewr_601_1_term(const application& t) { return rewr_601_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_601_1_term_arg_in_normal_form(const application& t) { return rewr_601_1(t[0]); }


  // [601] @to_pos: Robot -> Pos
  static inline const data_expression& rewr_601_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f2ebb0);
  }

  static inline data_expression rewr_601_0_term(const application&) { return rewr_601_0(); }

  static inline data_expression rewr_601_0_term_arg_in_normal_form(const application&) { return rewr_601_0(); }


  // [587] @equal_arguments: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_587_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(RecipeOne, @@D(@@N(@@F(RecipeOne, @@R(true), @@X))), @@F(RecipeThree, @@D(@@N(@@F(RecipeThree, @@R(true), @@X))), @@F(RecipeTwo, @@D(@@N(@@F(RecipeTwo, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7f1d570) // F1
      {
        if (uint_address(arg1) == 0x5637d7f1d570) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1d510) // F1
        {
          if (uint_address(arg1) == 0x5637d7f1d510) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f1d540) // F1
          {
            if (uint_address(arg1) == 0x5637d7f1d540) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
            }
            else
            {
            }
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7eca4e0), arg0, arg1);
  }

  static inline data_expression rewr_587_2_term(const application& t) { return rewr_587_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_587_2_term_arg_in_normal_form(const application& t) { return rewr_587_2(t[0], t[1]); }


  // [587] @equal_arguments: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_587_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e72760);
  }

  static inline data_expression rewr_587_0_term(const application&) { return rewr_587_0(); }

  static inline data_expression rewr_587_0_term_arg_in_normal_form(const application&) { return rewr_587_0(); }


  // [586] @to_pos: Recipe -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_586_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(RecipeOne, @@R(1), @@F(RecipeThree, @@R(3), @@F(RecipeTwo, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7f1d570) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e75280); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1d510) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7e79970); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f1d540) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7e79790); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7eca510), arg0);
  }

  static inline data_expression rewr_586_1_term(const application& t) { return rewr_586_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_586_1_term_arg_in_normal_form(const application& t) { return rewr_586_1(t[0]); }


  // [586] @to_pos: Recipe -> Pos
  static inline const data_expression& rewr_586_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e705a0);
  }

  static inline data_expression rewr_586_0_term(const application&) { return rewr_586_0(); }

  static inline data_expression rewr_586_0_term_arg_in_normal_form(const application&) { return rewr_586_0(); }


  // [570] @less_arguments: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_570_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(Tray, @@D(@@N(@@F(Tray, @@R(false), @@X))), @@F(ChuckEmptyTwo, @@D(@@N(@@F(ChuckEmptyTwo, @@R(false), @@X))), @@F(ChuckIn, @@D(@@N(@@F(ChuckIn, @@R(false), @@X))), @@F(ChuckEmptyOne, @@D(@@N(@@F(ChuckEmptyOne, @@R(false), @@X))), @@F(ChuckOut, @@D(@@N(@@F(ChuckOut, @@R(false), @@X))), @@F(ChuckProj, @@D(@@N(@@F(ChuckProj, @@R(false), @@X))), @@F(ChuckMeas, @@D(@@N(@@F(ChuckMeas, @@R(false), @@X))), @@X)))))))
    {
      if (uint_address(arg0) == 0x5637d7f20300) // F1
      {
        if (uint_address(arg1) == 0x5637d7f20300) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fbe0) // F1
        {
          if (uint_address(arg1) == 0x5637d7f1fbe0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f20270) // F1
          {
            if (uint_address(arg1) == 0x5637d7f20270) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7f1fbb0) // F1
            {
              if (uint_address(arg1) == 0x5637d7f1fbb0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
              }
              else
              {
              }
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7f20330) // F1
              {
                if (uint_address(arg1) == 0x5637d7f20330) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
                }
                else
                {
                }
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ecb6b0) // F1
                {
                  if (uint_address(arg1) == 0x5637d7ecb6b0) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
                  }
                  else
                  {
                  }
                }
                else
                {
                  if (uint_address(arg0) == 0x5637d7f1fb80) // F1
                  {
                    if (uint_address(arg1) == 0x5637d7f1fb80) // F1
                    {
                      return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                  }
                }
              }
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecb560), arg0, arg1);
  }

  static inline data_expression rewr_570_2_term(const application& t) { return rewr_570_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_570_2_term_arg_in_normal_form(const application& t) { return rewr_570_2(t[0], t[1]); }


  // [570] @less_arguments: Position # Position -> Bool
  static inline const data_expression& rewr_570_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f07200);
  }

  static inline data_expression rewr_570_0_term(const application&) { return rewr_570_0(); }

  static inline data_expression rewr_570_0_term_arg_in_normal_form(const application&) { return rewr_570_0(); }


  // [569] @equal_arguments: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_569_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(Tray, @@D(@@N(@@F(Tray, @@R(true), @@X))), @@F(ChuckEmptyTwo, @@D(@@N(@@F(ChuckEmptyTwo, @@R(true), @@X))), @@F(ChuckIn, @@D(@@N(@@F(ChuckIn, @@R(true), @@X))), @@F(ChuckEmptyOne, @@D(@@N(@@F(ChuckEmptyOne, @@R(true), @@X))), @@F(ChuckOut, @@D(@@N(@@F(ChuckOut, @@R(true), @@X))), @@F(ChuckProj, @@D(@@N(@@F(ChuckProj, @@R(true), @@X))), @@F(ChuckMeas, @@D(@@N(@@F(ChuckMeas, @@R(true), @@X))), @@X)))))))
    {
      if (uint_address(arg0) == 0x5637d7f20300) // F1
      {
        if (uint_address(arg1) == 0x5637d7f20300) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fbe0) // F1
        {
          if (uint_address(arg1) == 0x5637d7f1fbe0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f20270) // F1
          {
            if (uint_address(arg1) == 0x5637d7f20270) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7f1fbb0) // F1
            {
              if (uint_address(arg1) == 0x5637d7f1fbb0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
              }
              else
              {
              }
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7f20330) // F1
              {
                if (uint_address(arg1) == 0x5637d7f20330) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
                }
                else
                {
                }
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ecb6b0) // F1
                {
                  if (uint_address(arg1) == 0x5637d7ecb6b0) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
                  }
                  else
                  {
                  }
                }
                else
                {
                  if (uint_address(arg0) == 0x5637d7f1fb80) // F1
                  {
                    if (uint_address(arg1) == 0x5637d7f1fb80) // F1
                    {
                      return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                  }
                }
              }
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecb590), arg0, arg1);
  }

  static inline data_expression rewr_569_2_term(const application& t) { return rewr_569_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_569_2_term_arg_in_normal_form(const application& t) { return rewr_569_2(t[0], t[1]); }


  // [569] @equal_arguments: Position # Position -> Bool
  static inline const data_expression& rewr_569_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f08a60);
  }

  static inline data_expression rewr_569_0_term(const application&) { return rewr_569_0(); }

  static inline data_expression rewr_569_0_term_arg_in_normal_form(const application&) { return rewr_569_0(); }


  // [568] @to_pos: Position -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_568_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(Tray, @@R(1), @@F(ChuckEmptyTwo, @@R(7), @@F(ChuckIn, @@R(2), @@F(ChuckEmptyOne, @@R(6), @@F(ChuckOut, @@R(3), @@F(ChuckProj, @@R(5), @@F(ChuckMeas, @@R(4), @@X)))))))
    {
      if (uint_address(arg0) == 0x5637d7f20300) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e75280); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fbe0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f08600); // R1 7
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f20270) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7e79790); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x5637d7f1fbb0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7e795b0); // R1 6
            }
            else
            {
              if (uint_address(arg0) == 0x5637d7f20330) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7e79970); // R1 3
              }
              else
              {
                if (uint_address(arg0) == 0x5637d7ecb6b0) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x5637d7e798d0); // R1 5
                }
                else
                {
                  if (uint_address(arg0) == 0x5637d7f1fb80) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x5637d7e79bf0); // R1 4
                  }
                  else
                  {
                  }
                }
              }
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecb5c0), arg0);
  }

  static inline data_expression rewr_568_1_term(const application& t) { return rewr_568_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_568_1_term_arg_in_normal_form(const application& t) { return rewr_568_1(t[0]); }


  // [568] @to_pos: Position -> Pos
  static inline const data_expression& rewr_568_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f093c0);
  }

  static inline data_expression rewr_568_0_term(const application&) { return rewr_568_0(); }

  static inline data_expression rewr_568_0_term_arg_in_normal_form(const application&) { return rewr_568_0(); }


  // [558] !=: FSet(RobotPositionT) # FSet(RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_558_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_534_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecb9e0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_558_2_term(const application& t) { return rewr_558_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_558_2_term_arg_in_normal_form(const application& t) { return rewr_558_2(t[0], t[1]); }


  // [558] !=: FSet(RobotPositionT) # FSet(RobotPositionT) -> Bool
  static inline const data_expression& rewr_558_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e92880);
  }

  static inline data_expression rewr_558_0_term(const application&) { return rewr_558_0(); }

  static inline data_expression rewr_558_0_term_arg_in_normal_form(const application&) { return rewr_558_0(); }


  // [534] ==: FSet(RobotPositionT) # FSet(RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_534_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F({}, @@D(@@N(@@M(@var_0, @@R(true), @@F(@fset_cons, @@N(@@R(false)), @@X)))), @@F(@fset_cons, @@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@M(@var_0, @@R(true), @@F({}, @@R(false), @@F(@fset_cons, @@S(@var_3, @@N(@@S(@var_4, @@R(@var_1 == @var_3 && @var_2 == @var_4)))), @@X)))))))), @@N(@@M(@var_0, @@R(true), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address(arg0) == 0x5637d7f57370) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7ecc700) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7ecc700) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
            if (uint_address(arg1) == 0x5637d7f57370) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
              if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7ecc700) // F1
              {
                const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
                const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
                return rewr_45_2(rewr_267_2(var_1, var_3), delayed_rewr_534_2<data_expression, data_expression>(var_2, var_4)); // R1 @var_1 == @var_3 && @var_2 == @var_4
              }
              else
              {
              }
            }
          }
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f123f0), arg0, arg1);
  }

  static inline data_expression rewr_534_2_term(const application& t) { return rewr_534_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_534_2_term_arg_in_normal_form(const application& t) { return rewr_534_2(t[0], t[1]); }


  // [534] ==: FSet(RobotPositionT) # FSet(RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_534_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_534_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_534_2(m_t0, m_t1);
      }
  };
  
  // [534] ==: FSet(RobotPositionT) # FSet(RobotPositionT) -> Bool
  static inline const data_expression& rewr_534_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ea7f50);
  }

  static inline data_expression rewr_534_0_term(const application&) { return rewr_534_0(); }

  static inline data_expression rewr_534_0_term_arg_in_normal_form(const application&) { return rewr_534_0(); }


  // [233] in: RobotPositionT # FSet(RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_233_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@N(@@F({}, @@R(false), @@X))
    {
      if (uint_address(arg1) == 0x5637d7f57370) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
      }
      else
      {
      }
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@S(@var_0, @@N(@@F(@fset_insert, @@S(@var_1, @@N(@@S(@var_2, @@R(@var_0 == @var_1 || @var_0 in @var_2)))), @@F(@fset_cons, @@S(@var_1, @@N(@@S(@var_2, @@R(@var_0 == @var_1 || @var_0 in @var_2)))), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7ecc730) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
        return rewr_242_2(rewr_267_2(var_0, var_1), delayed_rewr_233_2<data_expression, data_expression>(var_0, var_2)); // R1 @var_0 == @var_1 || @var_0 in @var_2
      }
      else
      {
        if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7ecc700) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
          const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
          return rewr_242_2(rewr_267_2(var_0, var_1), delayed_rewr_233_2<data_expression, data_expression>(var_0, var_2)); // R1 @var_0 == @var_1 || @var_0 in @var_2
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f57310), arg0, arg1);
  }

  static inline data_expression rewr_233_2_term(const application& t) { return rewr_233_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_233_2_term_arg_in_normal_form(const application& t) { return rewr_233_2(t[0], t[1]); }


  // [233] in: RobotPositionT # FSet(RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_233_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_233_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_233_2(m_t0, m_t1);
      }
  };
  
  // [233] in: RobotPositionT # FSet(RobotPositionT) -> Bool
  static inline const data_expression& rewr_233_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e8e160);
  }

  static inline data_expression rewr_233_0_term(const application&) { return rewr_233_0(); }

  static inline data_expression rewr_233_0_term_arg_in_normal_form(const application&) { return rewr_233_0(); }


  // [550] @fset_cons: RobotPositionT # FSet(RobotPositionT) -> FSet(RobotPositionT)
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_550_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecc700), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_550_2_term(const application& t) { return rewr_550_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_550_2_term_arg_in_normal_form(const application& t) { return rewr_550_2(t[0], t[1]); }


  // [550] @fset_cons: RobotPositionT # FSet(RobotPositionT) -> FSet(RobotPositionT)
  static inline const data_expression& rewr_550_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ea6b50);
  }

  static inline data_expression rewr_550_0_term(const application&) { return rewr_550_0(); }

  static inline data_expression rewr_550_0_term_arg_in_normal_form(const application&) { return rewr_550_0(); }


  // [543] !=: (RobotPositionT -> Bool) # (RobotPositionT -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_543_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_241_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7eccaf0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_543_2_term(const application& t) { return rewr_543_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_543_2_term_arg_in_normal_form(const application& t) { return rewr_543_2(t[0], t[1]); }


  // [543] !=: (RobotPositionT -> Bool) # (RobotPositionT -> Bool) -> Bool
  static inline const data_expression& rewr_543_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ea5860);
  }

  static inline data_expression rewr_543_0_term(const application&) { return rewr_543_0(); }

  static inline data_expression rewr_543_0_term_arg_in_normal_form(const application&) { return rewr_543_0(); }


  // [241] ==: (RobotPositionT -> Bool) # (RobotPositionT -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_241_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: RobotPositionT. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(0), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), true, sigma())); // R1 forall x0: RobotPositionT. @var_0(x0) == @var_1(x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f56a10), arg0, arg1);
  }

  static inline data_expression rewr_241_2_term(const application& t) { return rewr_241_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_241_2_term_arg_in_normal_form(const application& t) { return rewr_241_2(t[0], t[1]); }


  // [241] ==: (RobotPositionT -> Bool) # (RobotPositionT -> Bool) -> Bool
  static inline const data_expression& rewr_241_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e868a0);
  }

  static inline data_expression rewr_241_0_term(const application&) { return rewr_241_0(); }

  static inline data_expression rewr_241_0_term_arg_in_normal_form(const application&) { return rewr_241_0(); }


  // [536] !=: (Robot # Position # Position -> RobotPositionT) # (Robot # Position # Position -> RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_536_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_535_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7eccf70), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_536_2_term(const application& t) { return rewr_536_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_536_2_term_arg_in_normal_form(const application& t) { return rewr_536_2(t[0], t[1]); }


  // [536] !=: (Robot # Position # Position -> RobotPositionT) # (Robot # Position # Position -> RobotPositionT) -> Bool
  static inline const data_expression& rewr_536_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb3810);
  }

  static inline data_expression rewr_536_0_term(const application&) { return rewr_536_0(); }

  static inline data_expression rewr_536_0_term_arg_in_normal_form(const application&) { return rewr_536_0(); }


  // [535] ==: (Robot # Position # Position -> RobotPositionT) # (Robot # Position # Position -> RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_535_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Robot, x0,x0: Position. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(1), rewr_267_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Robot, x0,x0: Position. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7eccfa0), arg0, arg1);
  }

  static inline data_expression rewr_535_2_term(const application& t) { return rewr_535_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_535_2_term_arg_in_normal_form(const application& t) { return rewr_535_2(t[0], t[1]); }


  // [535] ==: (Robot # Position # Position -> RobotPositionT) # (Robot # Position # Position -> RobotPositionT) -> Bool
  static inline const data_expression& rewr_535_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb4610);
  }

  static inline data_expression rewr_535_0_term(const application&) { return rewr_535_0(); }

  static inline data_expression rewr_535_0_term_arg_in_normal_form(const application&) { return rewr_535_0(); }


  // [528] !=: (RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT -> FSet(RobotPositionT)) # (RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT -> FSet(RobotPositionT)) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_528_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_527_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f12780), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_528_2_term(const application& t) { return rewr_528_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_528_2_term_arg_in_normal_form(const application& t) { return rewr_528_2(t[0], t[1]); }


  // [528] !=: (RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT -> FSet(RobotPositionT)) # (RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT -> FSet(RobotPositionT)) -> Bool
  static inline const data_expression& rewr_528_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e93390);
  }

  static inline data_expression rewr_528_0_term(const application&) { return rewr_528_0(); }

  static inline data_expression rewr_528_0_term_arg_in_normal_form(const application&) { return rewr_528_0(); }


  // [527] ==: (RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT -> FSet(RobotPositionT)) # (RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT -> FSet(RobotPositionT)) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_527_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0,x0,x0,x0,x0,x0,x0: RobotPositionT. @var_0(x0, x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(2), rewr_534_2(rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0))))), true, sigma())); // R1 forall x0,x0,x0,x0,x0,x0,x0,x0: RobotPositionT. @var_0(x0, x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f127b0), arg0, arg1);
  }

  static inline data_expression rewr_527_2_term(const application& t) { return rewr_527_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_527_2_term_arg_in_normal_form(const application& t) { return rewr_527_2(t[0], t[1]); }


  // [527] ==: (RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT -> FSet(RobotPositionT)) # (RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT # RobotPositionT -> FSet(RobotPositionT)) -> Bool
  static inline const data_expression& rewr_527_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f94f00);
  }

  static inline data_expression rewr_527_0_term(const application&) { return rewr_527_0(); }

  static inline data_expression rewr_527_0_term_arg_in_normal_form(const application&) { return rewr_527_0(); }


  // [521] !=: ((RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)) # ((RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_521_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_520_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f12c90), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_521_2_term(const application& t) { return rewr_521_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_521_2_term_arg_in_normal_form(const application& t) { return rewr_521_2(t[0], t[1]); }


  // [521] !=: ((RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)) # ((RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)) -> Bool
  static inline const data_expression& rewr_521_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f944e0);
  }

  static inline data_expression rewr_521_0_term(const application&) { return rewr_521_0(); }

  static inline data_expression rewr_521_0_term_arg_in_normal_form(const application&) { return rewr_521_0(); }


  // [520] ==: ((RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)) # ((RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_520_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: RobotPositionT -> Bool, x0: FSet(RobotPositionT). @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(3), rewr_235_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(4))))), true, sigma())); // R1 forall x0: RobotPositionT -> Bool, x0: FSet(RobotPositionT). @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f12cc0), arg0, arg1);
  }

  static inline data_expression rewr_520_2_term(const application& t) { return rewr_520_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_520_2_term_arg_in_normal_form(const application& t) { return rewr_520_2(t[0], t[1]); }


  // [520] ==: ((RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)) # ((RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)) -> Bool
  static inline const data_expression& rewr_520_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb3500);
  }

  static inline data_expression rewr_520_0_term(const application&) { return rewr_520_0(); }

  static inline data_expression rewr_520_0_term_arg_in_normal_form(const application&) { return rewr_520_0(); }


  // [516] !=: @NatPair # @NatPair -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_516_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_343_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f12f90), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_516_2_term(const application& t) { return rewr_516_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_516_2_term_arg_in_normal_form(const application& t) { return rewr_516_2(t[0], t[1]); }


  // [516] !=: @NatPair # @NatPair -> Bool
  static inline const data_expression& rewr_516_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f09f00);
  }

  static inline data_expression rewr_516_0_term(const application&) { return rewr_516_0(); }

  static inline data_expression rewr_516_0_term_arg_in_normal_form(const application&) { return rewr_516_0(); }


  // [343] ==: @NatPair # @NatPair -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_343_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(@cPair, @@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@M(@var_0, @@R(true), @@F(@cPair, @@S(@var_3, @@N(@@S(@var_4, @@R(@var_1 == @var_3 && @var_2 == @var_4)))), @@X))))))), @@N(@@M(@var_0, @@R(true), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f5fad0) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f5fad0) // F1
          {
            const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
            const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
            return rewr_45_2(rewr_81_2(var_1, var_3), delayed_rewr_81_2<data_expression, data_expression>(var_2, var_4)); // R1 @var_1 == @var_3 && @var_2 == @var_4
          }
          else
          {
          }
        }
      }
      else
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5e2d0), arg0, arg1);
  }

  static inline data_expression rewr_343_2_term(const application& t) { return rewr_343_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_343_2_term_arg_in_normal_form(const application& t) { return rewr_343_2(t[0], t[1]); }


  // [81] ==: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_81_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_81_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_81_2(m_t0, m_t1);
      }
  };
  
  // [343] ==: @NatPair # @NatPair -> Bool
  static inline const data_expression& rewr_343_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e80990);
  }

  static inline data_expression rewr_343_0_term(const application&) { return rewr_343_0(); }

  static inline data_expression rewr_343_0_term_arg_in_normal_form(const application&) { return rewr_343_0(); }


  // [510] !=: (Recipe # Recipe -> Bool) # (Recipe # Recipe -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_510_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_509_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f13410), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_510_2_term(const application& t) { return rewr_510_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_510_2_term_arg_in_normal_form(const application& t) { return rewr_510_2(t[0], t[1]); }


  // [510] !=: (Recipe # Recipe -> Bool) # (Recipe # Recipe -> Bool) -> Bool
  static inline const data_expression& rewr_510_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef69f0);
  }

  static inline data_expression rewr_510_0_term(const application&) { return rewr_510_0(); }

  static inline data_expression rewr_510_0_term_arg_in_normal_form(const application&) { return rewr_510_0(); }


  // [509] ==: (Recipe # Recipe -> Bool) # (Recipe # Recipe -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_509_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Recipe. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(5)),static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), true, sigma())); // R1 forall x0,x0: Recipe. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f13440), arg0, arg1);
  }

  static inline data_expression rewr_509_2_term(const application& t) { return rewr_509_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_509_2_term_arg_in_normal_form(const application& t) { return rewr_509_2(t[0], t[1]); }


  // [509] ==: (Recipe # Recipe -> Bool) # (Recipe # Recipe -> Bool) -> Bool
  static inline const data_expression& rewr_509_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f116a0);
  }

  static inline data_expression rewr_509_0_term(const application&) { return rewr_509_0(); }

  static inline data_expression rewr_509_0_term_arg_in_normal_form(const application&) { return rewr_509_0(); }


  // [503] !=: (Bool -> Bool) # (Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_503_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_502_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f13830), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_503_2_term(const application& t) { return rewr_503_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_503_2_term_arg_in_normal_form(const application& t) { return rewr_503_2(t[0], t[1]); }


  // [503] !=: (Bool -> Bool) # (Bool -> Bool) -> Bool
  static inline const data_expression& rewr_503_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f08060);
  }

  static inline data_expression rewr_503_0_term(const application&) { return rewr_503_0(); }

  static inline data_expression rewr_503_0_term_arg_in_normal_form(const application&) { return rewr_503_0(); }


  // [502] ==: (Bool -> Bool) # (Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_502_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(5), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), true, sigma())); // R1 forall x0: Bool. @var_0(x0) == @var_1(x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f13860), arg0, arg1);
  }

  static inline data_expression rewr_502_2_term(const application& t) { return rewr_502_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_502_2_term_arg_in_normal_form(const application& t) { return rewr_502_2(t[0], t[1]); }


  // [502] ==: (Bool -> Bool) # (Bool -> Bool) -> Bool
  static inline const data_expression& rewr_502_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f29dd0);
  }

  static inline data_expression rewr_502_0_term(const application&) { return rewr_502_0(); }

  static inline data_expression rewr_502_0_term_arg_in_normal_form(const application&) { return rewr_502_0(); }


  // [495] !=: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_495_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_494_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f13dd0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_495_2_term(const application& t) { return rewr_495_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_495_2_term_arg_in_normal_form(const application& t) { return rewr_495_2(t[0], t[1]); }


  // [495] !=: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_495_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f098c0);
  }

  static inline data_expression rewr_495_0_term(const application&) { return rewr_495_0(); }

  static inline data_expression rewr_495_0_term_arg_in_normal_form(const application&) { return rewr_495_0(); }


  // [494] ==: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_494_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Bool. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(6), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), true, sigma())); // R1 forall x0,x0: Bool. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f13e00), arg0, arg1);
  }

  static inline data_expression rewr_494_2_term(const application& t) { return rewr_494_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_494_2_term_arg_in_normal_form(const application& t) { return rewr_494_2(t[0], t[1]); }


  // [494] ==: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_494_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f06d00);
  }

  static inline data_expression rewr_494_0_term(const application&) { return rewr_494_0(); }

  static inline data_expression rewr_494_0_term_arg_in_normal_form(const application&) { return rewr_494_0(); }


  // [488] !=: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_488_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_487_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f14280), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_488_2_term(const application& t) { return rewr_488_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_488_2_term_arg_in_normal_form(const application& t) { return rewr_488_2(t[0], t[1]); }


  // [488] !=: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  static inline const data_expression& rewr_488_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb3650);
  }

  static inline data_expression rewr_488_0_term(const application&) { return rewr_488_0(); }

  static inline data_expression rewr_488_0_term_arg_in_normal_form(const application&) { return rewr_488_0(); }


  // [487] ==: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_487_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Robot. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(7), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(1)),static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), true, sigma())); // R1 forall x0,x0: Robot. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f142b0), arg0, arg1);
  }

  static inline data_expression rewr_487_2_term(const application& t) { return rewr_487_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_487_2_term_arg_in_normal_form(const application& t) { return rewr_487_2(t[0], t[1]); }


  // [487] ==: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  static inline const data_expression& rewr_487_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eace40);
  }

  static inline data_expression rewr_487_0_term(const application&) { return rewr_487_0(); }

  static inline data_expression rewr_487_0_term_arg_in_normal_form(const application&) { return rewr_487_0(); }


  // [481] !=: (RobotPositionT -> Robot) # (RobotPositionT -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_481_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_480_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f146a0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_481_2_term(const application& t) { return rewr_481_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_481_2_term_arg_in_normal_form(const application& t) { return rewr_481_2(t[0], t[1]); }


  // [481] !=: (RobotPositionT -> Robot) # (RobotPositionT -> Robot) -> Bool
  static inline const data_expression& rewr_481_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10df0);
  }

  static inline data_expression rewr_481_0_term(const application&) { return rewr_481_0(); }

  static inline data_expression rewr_481_0_term_arg_in_normal_form(const application&) { return rewr_481_0(); }


  // [480] ==: (RobotPositionT -> Robot) # (RobotPositionT -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_480_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: RobotPositionT. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(0), rewr_46_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0))))), true, sigma())); // R1 forall x0: RobotPositionT. @var_0(x0) == @var_1(x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f146d0), arg0, arg1);
  }

  static inline data_expression rewr_480_2_term(const application& t) { return rewr_480_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_480_2_term_arg_in_normal_form(const application& t) { return rewr_480_2(t[0], t[1]); }


  // [480] ==: (RobotPositionT -> Robot) # (RobotPositionT -> Robot) -> Bool
  static inline const data_expression& rewr_480_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb3030);
  }

  static inline data_expression rewr_480_0_term(const application&) { return rewr_480_0(); }

  static inline data_expression rewr_480_0_term_arg_in_normal_form(const application&) { return rewr_480_0(); }


  // [473] !=: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_473_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_472_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f14c40), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_473_2_term(const application& t) { return rewr_473_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_473_2_term_arg_in_normal_form(const application& t) { return rewr_473_2(t[0], t[1]); }


  // [473] !=: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  static inline const data_expression& rewr_473_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb31f0);
  }

  static inline data_expression rewr_473_0_term(const application&) { return rewr_473_0(); }

  static inline data_expression rewr_473_0_term_arg_in_normal_form(const application&) { return rewr_473_0(); }


  // [472] ==: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_472_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Position. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(8), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(2)),static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), true, sigma())); // R1 forall x0,x0: Position. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f14c70), arg0, arg1);
  }

  static inline data_expression rewr_472_2_term(const application& t) { return rewr_472_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_472_2_term_arg_in_normal_form(const application& t) { return rewr_472_2(t[0], t[1]); }


  // [472] ==: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  static inline const data_expression& rewr_472_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10dc0);
  }

  static inline data_expression rewr_472_0_term(const application&) { return rewr_472_0(); }

  static inline data_expression rewr_472_0_term_arg_in_normal_form(const application&) { return rewr_472_0(); }


  // [466] !=: (RobotPositionT -> Position) # (RobotPositionT -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_466_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_465_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f15060), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_466_2_term(const application& t) { return rewr_466_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_466_2_term_arg_in_normal_form(const application& t) { return rewr_466_2(t[0], t[1]); }


  // [466] !=: (RobotPositionT -> Position) # (RobotPositionT -> Position) -> Bool
  static inline const data_expression& rewr_466_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb30a0);
  }

  static inline data_expression rewr_466_0_term(const application&) { return rewr_466_0(); }

  static inline data_expression rewr_466_0_term_arg_in_normal_form(const application&) { return rewr_466_0(); }


  // [465] ==: (RobotPositionT -> Position) # (RobotPositionT -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_465_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: RobotPositionT. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(0), rewr_48_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0))))), true, sigma())); // R1 forall x0: RobotPositionT. @var_0(x0) == @var_1(x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f15090), arg0, arg1);
  }

  static inline data_expression rewr_465_2_term(const application& t) { return rewr_465_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_465_2_term_arg_in_normal_form(const application& t) { return rewr_465_2(t[0], t[1]); }


  // [465] ==: (RobotPositionT -> Position) # (RobotPositionT -> Position) -> Bool
  static inline const data_expression& rewr_465_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef7a30);
  }

  static inline data_expression rewr_465_0_term(const application&) { return rewr_465_0(); }

  static inline data_expression rewr_465_0_term_arg_in_normal_form(const application&) { return rewr_465_0(); }


  // [458] !=: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_458_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_457_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f15600), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_458_2_term(const application& t) { return rewr_458_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_458_2_term_arg_in_normal_form(const application& t) { return rewr_458_2(t[0], t[1]); }


  // [458] !=: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  static inline const data_expression& rewr_458_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f06a80);
  }

  static inline data_expression rewr_458_0_term(const application&) { return rewr_458_0(); }

  static inline data_expression rewr_458_0_term_arg_in_normal_form(const application&) { return rewr_458_0(); }


  // [457] ==: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_457_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(9), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(7)),static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), true, sigma())); // R1 forall x0,x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f15630), arg0, arg1);
  }

  static inline data_expression rewr_457_2_term(const application& t) { return rewr_457_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_457_2_term_arg_in_normal_form(const application& t) { return rewr_457_2(t[0], t[1]); }


  // [457] ==: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  static inline const data_expression& rewr_457_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eaadc0);
  }

  static inline data_expression rewr_457_0_term(const application&) { return rewr_457_0(); }

  static inline data_expression rewr_457_0_term_arg_in_normal_form(const application&) { return rewr_457_0(); }


  // [451] !=: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_451_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_450_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f15ab0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_451_2_term(const application& t) { return rewr_451_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_451_2_term_arg_in_normal_form(const application& t) { return rewr_451_2(t[0], t[1]); }


  // [451] !=: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_451_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10780);
  }

  static inline data_expression rewr_451_0_term(const application&) { return rewr_451_0(); }

  static inline data_expression rewr_451_0_term_arg_in_normal_form(const application&) { return rewr_451_0(); }


  // [450] ==: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_450_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(10), rewr_51_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Bool, x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f15ae0), arg0, arg1);
  }

  static inline data_expression rewr_450_2_term(const application& t) { return rewr_450_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_450_2_term_arg_in_normal_form(const application& t) { return rewr_450_2(t[0], t[1]); }


  // [450] ==: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_450_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f108f0);
  }

  static inline data_expression rewr_450_0_term(const application&) { return rewr_450_0(); }

  static inline data_expression rewr_450_0_term_arg_in_normal_form(const application&) { return rewr_450_0(); }


  // [444] !=: (RobotPositionT # Set(RobotPositionT) -> Bool) # (RobotPositionT # Set(RobotPositionT) -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_444_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_443_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f15fc0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_444_2_term(const application& t) { return rewr_444_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_444_2_term_arg_in_normal_form(const application& t) { return rewr_444_2(t[0], t[1]); }


  // [444] !=: (RobotPositionT # Set(RobotPositionT) -> Bool) # (RobotPositionT # Set(RobotPositionT) -> Bool) -> Bool
  static inline const data_expression& rewr_444_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f105a0);
  }

  static inline data_expression rewr_444_0_term(const application&) { return rewr_444_0(); }

  static inline data_expression rewr_444_0_term_arg_in_normal_form(const application&) { return rewr_444_0(); }


  // [443] ==: (RobotPositionT # Set(RobotPositionT) -> Bool) # (RobotPositionT # Set(RobotPositionT) -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_443_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: RobotPositionT, x0: Set(RobotPositionT). @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(11), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(8)))), true, sigma())); // R1 forall x0: RobotPositionT, x0: Set(RobotPositionT). @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f15ff0), arg0, arg1);
  }

  static inline data_expression rewr_443_2_term(const application& t) { return rewr_443_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_443_2_term_arg_in_normal_form(const application& t) { return rewr_443_2(t[0], t[1]); }


  // [443] ==: (RobotPositionT # Set(RobotPositionT) -> Bool) # (RobotPositionT # Set(RobotPositionT) -> Bool) -> Bool
  static inline const data_expression& rewr_443_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10500);
  }

  static inline data_expression rewr_443_0_term(const application&) { return rewr_443_0(); }

  static inline data_expression rewr_443_0_term_arg_in_normal_form(const application&) { return rewr_443_0(); }


  // [437] !=: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_437_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_436_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5bcf0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_437_2_term(const application& t) { return rewr_437_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_437_2_term_arg_in_normal_form(const application& t) { return rewr_437_2(t[0], t[1]); }


  // [437] !=: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_437_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f108c0);
  }

  static inline data_expression rewr_437_0_term(const application&) { return rewr_437_0(); }

  static inline data_expression rewr_437_0_term_arg_in_normal_form(const application&) { return rewr_437_0(); }


  // [436] ==: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_436_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Position. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(12), rewr_48_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Position. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5bd20), arg0, arg1);
  }

  static inline data_expression rewr_436_2_term(const application& t) { return rewr_436_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_436_2_term_arg_in_normal_form(const application& t) { return rewr_436_2(t[0], t[1]); }


  // [436] ==: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_436_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10530);
  }

  static inline data_expression rewr_436_0_term(const application&) { return rewr_436_0(); }

  static inline data_expression rewr_436_0_term_arg_in_normal_form(const application&) { return rewr_436_0(); }


  // [430] !=: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_430_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_429_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1cd90), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_430_2_term(const application& t) { return rewr_430_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_430_2_term_arg_in_normal_form(const application& t) { return rewr_430_2(t[0], t[1]); }


  // [430] !=: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_430_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0c2b0);
  }

  static inline data_expression rewr_430_0_term(const application&) { return rewr_430_0(); }

  static inline data_expression rewr_430_0_term_arg_in_normal_form(const application&) { return rewr_430_0(); }


  // [429] ==: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_429_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0,x0: Bool. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(13), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), delayed_application3<data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), true, sigma())); // R1 forall x0,x0,x0: Bool. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1cdc0), arg0, arg1);
  }

  static inline data_expression rewr_429_2_term(const application& t) { return rewr_429_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_429_2_term_arg_in_normal_form(const application& t) { return rewr_429_2(t[0], t[1]); }


  // [429] ==: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_429_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f107b0);
  }

  static inline data_expression rewr_429_0_term(const application&) { return rewr_429_0(); }

  static inline data_expression rewr_429_0_term_arg_in_normal_form(const application&) { return rewr_429_0(); }


  // [423] !=: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_423_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_422_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e531d0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_423_2_term(const application& t) { return rewr_423_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_423_2_term_arg_in_normal_form(const application& t) { return rewr_423_2(t[0], t[1]); }


  // [423] !=: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  static inline const data_expression& rewr_423_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0c280);
  }

  static inline data_expression rewr_423_0_term(const application&) { return rewr_423_0(); }

  static inline data_expression rewr_423_0_term_arg_in_normal_form(const application&) { return rewr_423_0(); }


  // [422] ==: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_422_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: ChuckStatus. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(14), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(9)),static_cast<data_expression>(this_rewriter->bound_variable_get(9)))), true, sigma())); // R1 forall x0,x0: ChuckStatus. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e53200), arg0, arg1);
  }

  static inline data_expression rewr_422_2_term(const application& t) { return rewr_422_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_422_2_term_arg_in_normal_form(const application& t) { return rewr_422_2(t[0], t[1]); }


  // [422] ==: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  static inline const data_expression& rewr_422_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0c000);
  }

  static inline data_expression rewr_422_0_term(const application&) { return rewr_422_0(); }

  static inline data_expression rewr_422_0_term_arg_in_normal_form(const application&) { return rewr_422_0(); }


  // [416] !=: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_416_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_415_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e53680), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_416_2_term(const application& t) { return rewr_416_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_416_2_term_arg_in_normal_form(const application& t) { return rewr_416_2(t[0], t[1]); }


  // [416] !=: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  static inline const data_expression& rewr_416_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f105d0);
  }

  static inline data_expression rewr_416_0_term(const application&) { return rewr_416_0(); }

  static inline data_expression rewr_416_0_term_arg_in_normal_form(const application&) { return rewr_416_0(); }


  // [415] ==: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_415_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(15), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(10)),static_cast<data_expression>(this_rewriter->bound_variable_get(10)))), true, sigma())); // R1 forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e536b0), arg0, arg1);
  }

  static inline data_expression rewr_415_2_term(const application& t) { return rewr_415_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_415_2_term_arg_in_normal_form(const application& t) { return rewr_415_2(t[0], t[1]); }


  // [415] ==: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  static inline const data_expression& rewr_415_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0a0e0);
  }

  static inline data_expression rewr_415_0_term(const application&) { return rewr_415_0(); }

  static inline data_expression rewr_415_0_term_arg_in_normal_form(const application&) { return rewr_415_0(); }


  // [409] !=: (Bool # Robot # Robot -> Robot) # (Bool # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_409_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_408_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e53ad0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_409_2_term(const application& t) { return rewr_409_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_409_2_term_arg_in_normal_form(const application& t) { return rewr_409_2(t[0], t[1]); }


  // [409] !=: (Bool # Robot # Robot -> Robot) # (Bool # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_409_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f93320);
  }

  static inline data_expression rewr_409_0_term(const application&) { return rewr_409_0(); }

  static inline data_expression rewr_409_0_term_arg_in_normal_form(const application&) { return rewr_409_0(); }


  // [408] ==: (Bool # Robot # Robot -> Robot) # (Bool # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_408_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Robot. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(16), rewr_46_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Robot. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e53b00), arg0, arg1);
  }

  static inline data_expression rewr_408_2_term(const application& t) { return rewr_408_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_408_2_term_arg_in_normal_form(const application& t) { return rewr_408_2(t[0], t[1]); }


  // [408] ==: (Bool # Robot # Robot -> Robot) # (Bool # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_408_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0b3b0);
  }

  static inline data_expression rewr_408_0_term(const application&) { return rewr_408_0(); }

  static inline data_expression rewr_408_0_term_arg_in_normal_form(const application&) { return rewr_408_0(); }


  // [402] !=: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_402_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_401_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e53f20), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_402_2_term(const application& t) { return rewr_402_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_402_2_term_arg_in_normal_form(const application& t) { return rewr_402_2(t[0], t[1]); }


  // [402] !=: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_402_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0b4f0);
  }

  static inline data_expression rewr_402_0_term(const application&) { return rewr_402_0(); }

  static inline data_expression rewr_402_0_term_arg_in_normal_form(const application&) { return rewr_402_0(); }


  // [401] ==: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_401_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Nat. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(17), rewr_81_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Nat. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e53f50), arg0, arg1);
  }

  static inline data_expression rewr_401_2_term(const application& t) { return rewr_401_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_401_2_term_arg_in_normal_form(const application& t) { return rewr_401_2(t[0], t[1]); }


  // [401] ==: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_401_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0b7e0);
  }

  static inline data_expression rewr_401_0_term(const application&) { return rewr_401_0(); }

  static inline data_expression rewr_401_0_term_arg_in_normal_form(const application&) { return rewr_401_0(); }


  // [395] !=: (Int -> Nat) # (Int -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_395_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_394_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e54370), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_395_2_term(const application& t) { return rewr_395_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_395_2_term_arg_in_normal_form(const application& t) { return rewr_395_2(t[0], t[1]); }


  // [395] !=: (Int -> Nat) # (Int -> Nat) -> Bool
  static inline const data_expression& rewr_395_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0b380);
  }

  static inline data_expression rewr_395_0_term(const application&) { return rewr_395_0(); }

  static inline data_expression rewr_395_0_term_arg_in_normal_form(const application&) { return rewr_395_0(); }


  // [394] ==: (Int -> Nat) # (Int -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_394_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Int. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(18), rewr_81_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(11)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(11))))), true, sigma())); // R1 forall x0: Int. @var_0(x0) == @var_1(x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e543a0), arg0, arg1);
  }

  static inline data_expression rewr_394_2_term(const application& t) { return rewr_394_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_394_2_term_arg_in_normal_form(const application& t) { return rewr_394_2(t[0], t[1]); }


  // [394] ==: (Int -> Nat) # (Int -> Nat) -> Bool
  static inline const data_expression& rewr_394_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0b4c0);
  }

  static inline data_expression rewr_394_0_term(const application&) { return rewr_394_0(); }

  static inline data_expression rewr_394_0_term_arg_in_normal_form(const application&) { return rewr_394_0(); }


  // [102] !=: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_102_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_101_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e548b0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_102_2_term(const application& t) { return rewr_102_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_102_2_term_arg_in_normal_form(const application& t) { return rewr_102_2(t[0], t[1]); }


  // [102] !=: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  static inline const data_expression& rewr_102_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0b810);
  }

  static inline data_expression rewr_102_0_term(const application&) { return rewr_102_0(); }

  static inline data_expression rewr_102_0_term_arg_in_normal_form(const application&) { return rewr_102_0(); }


  // [101] ==: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_101_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(15), rewr_374_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10))))), true, sigma())); // R1 forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e548e0), arg0, arg1);
  }

  static inline data_expression rewr_101_2_term(const application& t) { return rewr_101_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_101_2_term_arg_in_normal_form(const application& t) { return rewr_101_2(t[0], t[1]); }


  // [101] ==: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  static inline const data_expression& rewr_101_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef6bd0);
  }

  static inline data_expression rewr_101_0_term(const application&) { return rewr_101_0(); }

  static inline data_expression rewr_101_0_term_arg_in_normal_form(const application&) { return rewr_101_0(); }


  // [95] !=: (Pos -> Nat) # (Pos -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_95_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_94_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e54cd0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_95_2_term(const application& t) { return rewr_95_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_95_2_term_arg_in_normal_form(const application& t) { return rewr_95_2(t[0], t[1]); }


  // [95] !=: (Pos -> Nat) # (Pos -> Nat) -> Bool
  static inline const data_expression& rewr_95_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0bbd0);
  }

  static inline data_expression rewr_95_0_term(const application&) { return rewr_95_0(); }

  static inline data_expression rewr_95_0_term_arg_in_normal_form(const application&) { return rewr_95_0(); }


  // [94] ==: (Pos -> Nat) # (Pos -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_94_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Pos. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(19), rewr_81_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Pos. @var_0(x0) == @var_1(x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e54d00), arg0, arg1);
  }

  static inline data_expression rewr_94_2_term(const application& t) { return rewr_94_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_94_2_term_arg_in_normal_form(const application& t) { return rewr_94_2(t[0], t[1]); }


  // [94] ==: (Pos -> Nat) # (Pos -> Nat) -> Bool
  static inline const data_expression& rewr_94_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0bce0);
  }

  static inline data_expression rewr_94_0_term(const application&) { return rewr_94_0(); }

  static inline data_expression rewr_94_0_term_arg_in_normal_form(const application&) { return rewr_94_0(); }


  // [87] !=: (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) # (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_87_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_86_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e55210), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_87_2_term(const application& t) { return rewr_87_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_87_2_term_arg_in_normal_form(const application& t) { return rewr_87_2(t[0], t[1]); }


  // [87] !=: (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) # (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) -> Bool
  static inline const data_expression& rewr_87_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0bba0);
  }

  static inline data_expression rewr_87_0_term(const application&) { return rewr_87_0(); }

  static inline data_expression rewr_87_0_term_arg_in_normal_form(const application&) { return rewr_87_0(); }


  // [86] ==: (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) # (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_86_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: ChuckStatus. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(20), rewr_61_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9))))), true, sigma())); // R1 forall x0: Bool, x0,x0: ChuckStatus. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7e55240), arg0, arg1);
  }

  static inline data_expression rewr_86_2_term(const application& t) { return rewr_86_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_86_2_term_arg_in_normal_form(const application& t) { return rewr_86_2(t[0], t[1]); }


  // [86] ==: (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) # (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) -> Bool
  static inline const data_expression& rewr_86_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f06b00);
  }

  static inline data_expression rewr_86_0_term(const application&) { return rewr_86_0(); }

  static inline data_expression rewr_86_0_term_arg_in_normal_form(const application&) { return rewr_86_0(); }


  // [386] !=: (Bool # Pos # Pos -> Pos) # (Bool # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_386_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_385_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5c0e0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_386_2_term(const application& t) { return rewr_386_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_386_2_term_arg_in_normal_form(const application& t) { return rewr_386_2(t[0], t[1]); }


  // [386] !=: (Bool # Pos # Pos -> Pos) # (Bool # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_386_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7fc80);
  }

  static inline data_expression rewr_386_0_term(const application&) { return rewr_386_0(); }

  static inline data_expression rewr_386_0_term_arg_in_normal_form(const application&) { return rewr_386_0(); }


  // [385] ==: (Bool # Pos # Pos -> Pos) # (Bool # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_385_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Pos. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(21), rewr_51_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Pos. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5c110), arg0, arg1);
  }

  static inline data_expression rewr_385_2_term(const application& t) { return rewr_385_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_385_2_term_arg_in_normal_form(const application& t) { return rewr_385_2(t[0], t[1]); }


  // [385] ==: (Bool # Pos # Pos -> Pos) # (Bool # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_385_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7fc50);
  }

  static inline data_expression rewr_385_0_term(const application&) { return rewr_385_0(); }

  static inline data_expression rewr_385_0_term_arg_in_normal_form(const application&) { return rewr_385_0(); }


  // [60] if: Bool # Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_60_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f201e0), arg0, arg1, arg2);
  }

  static inline data_expression rewr_60_3_term(const application& t) { return rewr_60_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_60_3_term_arg_in_normal_form(const application& t) { return rewr_60_3(t[0], t[1], t[2]); }


  // [60] if: Bool # Bool # Bool -> Bool
  static inline const data_expression& rewr_60_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f06b30);
  }

  static inline data_expression rewr_60_0_term(const application&) { return rewr_60_0(); }

  static inline data_expression rewr_60_0_term_arg_in_normal_form(const application&) { return rewr_60_0(); }


  // [234] !=: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_234_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_149_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f572b0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_234_2_term(const application& t) { return rewr_234_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_234_2_term_arg_in_normal_form(const application& t) { return rewr_234_2(t[0], t[1]); }


  // [234] !=: Bool # Bool -> Bool
  static inline const data_expression& rewr_234_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0bd10);
  }

  static inline data_expression rewr_234_0_term(const application&) { return rewr_234_0(); }

  static inline data_expression rewr_234_0_term_arg_in_normal_form(const application&) { return rewr_234_0(); }


  // [149] ==: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_149_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(!@var_0)))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
          return rewr_44_1(var_0); // R1 !@var_0
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@F(false, @@R(!@var_0), @@F(true, @@R(@var_0), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
        if (uint_address(arg1) == 0x5637d7f1fd90) // F1
        {
          return rewr_44_1(var_0); // R1 !@var_0
        }
        else
        {
          if (uint_address(arg1) == 0x5637d7e52c90) // F1
          {
            return var_0; // R1 @var_0
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efba30), arg0, arg1);
  }

  static inline data_expression rewr_149_2_term(const application& t) { return rewr_149_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_149_2_term_arg_in_normal_form(const application& t) { return rewr_149_2(t[0], t[1]); }


  // [149] ==: Bool # Bool -> Bool
  static inline const data_expression& rewr_149_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f2ee30);
  }

  static inline data_expression rewr_149_0_term(const application&) { return rewr_149_0(); }

  static inline data_expression rewr_149_0_term_arg_in_normal_form(const application&) { return rewr_149_0(); }


  // [305] =>: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_305_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(true)))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F(false, @@R(!@var_0), @@F(true, @@R(true), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address(arg1) == 0x5637d7f1fd90) // F1
      {
        return rewr_44_1(var_0); // R1 !@var_0
      }
      else
      {
        if (uint_address(arg1) == 0x5637d7e52c90) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f54520), arg0, arg1);
  }

  static inline data_expression rewr_305_2_term(const application& t) { return rewr_305_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_305_2_term_arg_in_normal_form(const application& t) { return rewr_305_2(t[0], t[1]); }


  // [305] =>: Bool # Bool -> Bool
  static inline const data_expression& rewr_305_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82d30);
  }

  static inline data_expression rewr_305_0_term(const application&) { return rewr_305_0(); }

  static inline data_expression rewr_305_0_term_arg_in_normal_form(const application&) { return rewr_305_0(); }


  // [242] ||: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_242_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(true)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
          return var_0; // R1 @var_0
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F(false, @@R(@var_0), @@F(true, @@R(true), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address(arg1) == 0x5637d7f1fd90) // F1
      {
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg1) == 0x5637d7e52c90) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f56770), arg0, arg1);
  }

  static inline data_expression rewr_242_2_term(const application& t) { return rewr_242_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_242_2_term_arg_in_normal_form(const application& t) { return rewr_242_2(t[0], t[1]); }


  // [242] ||: Bool # Bool -> Bool
  static inline const data_expression& rewr_242_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef7850);
  }

  static inline data_expression rewr_242_0_term(const application&) { return rewr_242_0(); }

  static inline data_expression rewr_242_0_term_arg_in_normal_form(const application&) { return rewr_242_0(); }


  // [45] &&: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_45_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(false)))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F(false, @@R(false), @@F(true, @@R(@var_0), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address(arg1) == 0x5637d7f1fd90) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
      }
      else
      {
        if (uint_address(arg1) == 0x5637d7e52c90) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20750), arg0, arg1);
  }

  static inline data_expression rewr_45_2_term(const application& t) { return rewr_45_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_45_2_term_arg_in_normal_form(const application& t) { return rewr_45_2(t[0], t[1]); }


  // [45] &&: Bool # Bool -> Bool
  static inline const data_expression& rewr_45_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f38760);
  }

  static inline data_expression rewr_45_0_term(const application&) { return rewr_45_0(); }

  static inline data_expression rewr_45_0_term_arg_in_normal_form(const application&) { return rewr_45_0(); }


  // [44] !: Bool -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_44_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@R(false), @@F(!, @@S(@var_0, @@R(@var_0)), @@F(false, @@R(true), @@X)))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f20780) // F1
        {
          const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
          return var_0; // R1 @var_0
        }
        else
        {
          if (uint_address(arg0) == 0x5637d7f1fd90) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20780), arg0);
  }

  static inline data_expression rewr_44_1_term(const application& t) { return rewr_44_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_44_1_term_arg_in_normal_form(const application& t) { return rewr_44_1(t[0]); }


  // [44] !: Bool -> Bool
  static inline const data_expression& rewr_44_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f38bd0);
  }

  static inline data_expression rewr_44_0_term(const application&) { return rewr_44_0(); }

  static inline data_expression rewr_44_0_term_arg_in_normal_form(const application&) { return rewr_44_0(); }


  // [378] !=: Int # Int -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_378_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_374_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5caa0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_378_2_term(const application& t) { return rewr_378_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_378_2_term_arg_in_normal_form(const application& t) { return rewr_378_2(t[0], t[1]); }


  // [378] !=: Int # Int -> Bool
  static inline const data_expression& rewr_378_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f07dc0);
  }

  static inline data_expression rewr_378_0_term(const application&) { return rewr_378_0(); }

  static inline data_expression rewr_378_0_term_arg_in_normal_form(const application&) { return rewr_378_0(); }


  // [374] ==: Int # Int -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_374_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(@cInt, @@S(@var_1, @@D(@@N(@@M(@var_0, @@R(true), @@F(@cInt, @@S(@var_2, @@R(@var_1 == @var_2)), @@F(@cNeg, @@R(false), @@X)))))), @@F(@cNeg, @@S(@var_1, @@D(@@N(@@M(@var_0, @@R(true), @@F(@cNeg, @@S(@var_2, @@R(@var_1 == @var_2)), @@F(@cInt, @@R(false), @@X)))))), @@N(@@M(@var_0, @@R(true), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f5dbb0) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f5dbb0) // F1
          {
            const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
            return rewr_81_2(var_1, var_2); // R1 @var_1 == @var_2
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f5db80) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
            }
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f5db80) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f5db80) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_51_2(var_1, var_2); // R1 @var_1 == @var_2
            }
            else
            {
              if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f5dbb0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
              }
              else
              {
              }
            }
          }
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5d640), arg0, arg1);
  }

  static inline data_expression rewr_374_2_term(const application& t) { return rewr_374_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_374_2_term_arg_in_normal_form(const application& t) { return rewr_374_2(t[0], t[1]); }


  // [374] ==: Int # Int -> Bool
  static inline const data_expression& rewr_374_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f07f30);
  }

  static inline data_expression rewr_374_0_term(const application&) { return rewr_374_0(); }

  static inline data_expression rewr_374_0_term_arg_in_normal_form(const application&) { return rewr_374_0(); }


  // [76] -: Nat # Nat -> Int
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_76_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@var_1 <= @var_0, @@R(@monus(@var_0, @var_1)), @@C(@var_0 < @var_1, @@R(-@monus(@var_1, @var_0)), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_341_2(var_1, var_0) == sort_bool::true_()) // C
      {
        return rewr_348_1(rewr_329_2(var_0, var_1)); // R1 @monus(@var_0, @var_1)
      }
      else
      {
        if (rewr_63_2(var_0, var_1) == sort_bool::true_()) // C
        {
          return rewr_361_1(rewr_329_2(var_1, var_0)); // R1 -@monus(@var_1, @var_0)
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1ee30), arg0, arg1);
  }

  static inline data_expression rewr_76_2_term(const application& t) { return rewr_76_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_76_2_term_arg_in_normal_form(const application& t) { return rewr_76_2(t[0], t[1]); }


  // [76] -: Nat # Nat -> Int
  static inline const data_expression& rewr_76_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f07df0);
  }

  static inline data_expression rewr_76_0_term(const application&) { return rewr_76_0(); }

  static inline data_expression rewr_76_0_term_arg_in_normal_form(const application&) { return rewr_76_0(); }


  // [361] -: Nat -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_361_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@R(0), @@F(@cNat, @@S(@var_0, @@R(-@var_0)), @@X))
    {
      if (uint_address(arg0) == 0x5637d7f200c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e82ac0); // R1 0
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f1ee00) // F1
        {
          const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
          return rewr_349_1(var_0); // R1 -@var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5d940), arg0);
  }

  static inline data_expression rewr_361_1_term(const application& t) { return rewr_361_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_361_1_term_arg_in_normal_form(const application& t) { return rewr_361_1(t[0]); }


  // [361] -: Nat -> Int
  static inline const data_expression& rewr_361_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82a90);
  }

  static inline data_expression rewr_361_0_term(const application&) { return rewr_361_0(); }

  static inline data_expression rewr_361_0_term_arg_in_normal_form(const application&) { return rewr_361_0(); }


  // [75] Int2Nat: Int -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_75_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(@cInt, @@S(@var_0, @@R(@var_0)), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f5dbb0) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1ee60), arg0);
  }

  static inline data_expression rewr_75_1_term(const application& t) { return rewr_75_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_75_1_term_arg_in_normal_form(const application& t) { return rewr_75_1(t[0]); }


  // [75] Int2Nat: Int -> Nat
  static inline const data_expression& rewr_75_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f07fa0);
  }

  static inline data_expression rewr_75_0_term(const application&) { return rewr_75_0(); }

  static inline data_expression rewr_75_0_term_arg_in_normal_form(const application&) { return rewr_75_0(); }


  // [341] <=: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_341_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@D(@@N(@@S(@var_0, @@R(true)))), @@X)
    {
      if (uint_address(arg0) == 0x5637d7f200c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(@cNat, @@S(@var_1, @@D(@@N(@@M(@var_0, @@R(true), @@F(0, @@R(false), @@F(@cNat, @@S(@var_2, @@R(@var_1 <= @var_2)), @@X)))))), @@N(@@M(@var_0, @@R(true), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f1ee00) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
          if (uint_address(arg1) == 0x5637d7f200c0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f1ee00) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_304_2(var_1, var_2); // R1 @var_1 <= @var_2
            }
            else
            {
            }
          }
        }
      }
      else
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5f2f0), arg0, arg1);
  }

  static inline data_expression rewr_341_2_term(const application& t) { return rewr_341_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_341_2_term_arg_in_normal_form(const application& t) { return rewr_341_2(t[0], t[1]); }


  // [341] <=: Nat # Nat -> Bool
  static inline const data_expression& rewr_341_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f07f00);
  }

  static inline data_expression rewr_341_0_term(const application&) { return rewr_341_0(); }

  static inline data_expression rewr_341_0_term_arg_in_normal_form(const application&) { return rewr_341_0(); }


  // [63] <: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_63_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@N(@@F(0, @@R(false), @@X))
    {
      if (uint_address(arg1) == 0x5637d7f200c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
      }
      else
      {
      }
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@S(@var_0, @@F(0, @@D(@@N(@@M(@var_0, @@R(false), @@F(@cNat, @@R(true), @@X)))), @@F(@cNat, @@S(@var_1, @@D(@@N(@@M(@var_0, @@R(false), @@F(@cNat, @@S(@var_2, @@R(@var_1 < @var_2)), @@X))))), @@N(@@M(@var_0, @@R(false), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address(arg0) == 0x5637d7f200c0) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f1ee00) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f1ee00) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f1ee00) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_303_2(var_1, var_2); // R1 @var_1 < @var_2
            }
            else
            {
            }
          }
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f200f0), arg0, arg1);
  }

  static inline data_expression rewr_63_2_term(const application& t) { return rewr_63_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_63_2_term_arg_in_normal_form(const application& t) { return rewr_63_2(t[0], t[1]); }


  // [63] <: Nat # Nat -> Bool
  static inline const data_expression& rewr_63_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f07fd0);
  }

  static inline data_expression rewr_63_0_term(const application&) { return rewr_63_0(); }

  static inline data_expression rewr_63_0_term_arg_in_normal_form(const application&) { return rewr_63_0(); }


  // [74] if: Bool # Nat # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_74_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1ee90), arg0, arg1, arg2);
  }

  static inline data_expression rewr_74_3_term(const application& t) { return rewr_74_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_74_3_term_arg_in_normal_form(const application& t) { return rewr_74_3(t[0], t[1], t[2]); }


  // [74] if: Bool # Nat # Nat -> Nat
  static inline const data_expression& rewr_74_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e830d0);
  }

  static inline data_expression rewr_74_0_term(const application&) { return rewr_74_0(); }

  static inline data_expression rewr_74_0_term_arg_in_normal_form(const application&) { return rewr_74_0(); }


  // [346] !=: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_346_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_81_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5de20), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_346_2_term(const application& t) { return rewr_346_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_346_2_term_arg_in_normal_form(const application& t) { return rewr_346_2(t[0], t[1]); }


  // [346] !=: Nat # Nat -> Bool
  static inline const data_expression& rewr_346_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82b30);
  }

  static inline data_expression rewr_346_0_term(const application&) { return rewr_346_0(); }

  static inline data_expression rewr_346_0_term_arg_in_normal_form(const application&) { return rewr_346_0(); }


  // [81] ==: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_81_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(0, @@D(@@N(@@M(@var_0, @@R(true), @@F(@cNat, @@R(false), @@X)))), @@F(@cNat, @@S(@var_1, @@D(@@N(@@M(@var_0, @@R(true), @@F(@cNat, @@S(@var_2, @@R(@var_1 == @var_2)), @@F(0, @@R(false), @@X)))))), @@N(@@M(@var_0, @@R(true), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address(arg0) == 0x5637d7f200c0) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f1ee00) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f1ee00) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f1ee00) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_51_2(var_1, var_2); // R1 @var_1 == @var_2
            }
            else
            {
              if (uint_address(arg1) == 0x5637d7f200c0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
              }
              else
              {
              }
            }
          }
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1d960), arg0, arg1);
  }

  static inline data_expression rewr_81_2_term(const application& t) { return rewr_81_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_81_2_term_arg_in_normal_form(const application& t) { return rewr_81_2(t[0], t[1]); }


  // [81] ==: Nat # Nat -> Bool
  static inline const data_expression& rewr_81_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82c00);
  }

  static inline data_expression rewr_81_0_term(const application&) { return rewr_81_0(); }

  static inline data_expression rewr_81_0_term_arg_in_normal_form(const application&) { return rewr_81_0(); }


  // [329] @monus: Nat # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_329_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@D(@@N(@@S(@var_0, @@R(0)))), @@X)
    {
      if (uint_address(arg0) == 0x5637d7f200c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e82b60); // R1 0
      }
      else
      {
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(@cNat, @@S(@var_1, @@D(@@N(@@F(0, @@R(@var_0), @@F(@cNat, @@S(@var_2, @@R(@gtesubtb(false, @var_1, @var_2))), @@X))))), @@N(@@F(0, @@R(@var_0), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f1ee00) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (uint_address(arg1) == 0x5637d7f200c0) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f1ee00) // F1
          {
            const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
            return rewr_322_3(*reinterpret_cast<const data_expression*>(0x5637d7f09c80), var_1, var_2); // R1 @gtesubtb(false, @var_1, @var_2)
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address(arg1) == 0x5637d7f200c0) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5f710), arg0, arg1);
  }

  static inline data_expression rewr_329_2_term(const application& t) { return rewr_329_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_329_2_term_arg_in_normal_form(const application& t) { return rewr_329_2(t[0], t[1]); }


  // [329] @monus: Nat # Nat -> Nat
  static inline const data_expression& rewr_329_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e83100);
  }

  static inline data_expression rewr_329_0_term(const application&) { return rewr_329_0(); }

  static inline data_expression rewr_329_0_term_arg_in_normal_form(const application&) { return rewr_329_0(); }


  // [322] @gtesubtb: Bool # Pos # Pos -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_322_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(false, @@D(@@N(@@S(@var_0, @@N(@@F(1, @@R(pred(@var_0)), @@X))))), @@F(true, @@D(@@N(@@S(@var_0, @@N(@@F(1, @@R(pred(Nat2Pos(pred(@var_0)))), @@X))))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7f1fd90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        if (uint_address(arg2) == 0x5637d7f204e0) // F1
        {
          return rewr_317_1(var_0); // R1 pred(@var_0)
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52c90) // F1
        {
          const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
          if (uint_address(arg2) == 0x5637d7f204e0) // F1
          {
            return rewr_317_1(rewr_311_1(rewr_317_1(var_0))); // R1 pred(Nat2Pos(pred(@var_0)))
          }
          else
          {
          }
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F(@cDub, @@S(@var_1, @@F(true, @@D(@@N(@@S(@var_2, @@D(@@N(@@F(@cDub, @@M(@var_1, @@F(false, @@D(@@N(@@S(@var_3, @@R(@dub(!@var_0, @gtesubtb(false, @var_2, @var_3)))))), @@N(@@S(@var_3, @@R(@dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3)))))), @@F(false, @@D(@@N(@@S(@var_3, @@R(@dub(!@var_0, @gtesubtb(false, @var_2, @var_3)))))), @@D(@@X))), @@X)))))), @@F(false, @@D(@@N(@@S(@var_2, @@D(@@N(@@F(@cDub, @@M(@var_1, @@F(true, @@D(@@N(@@S(@var_3, @@R(@dub(!@var_0, @gtesubtb(true, @var_2, @var_3)))))), @@N(@@S(@var_3, @@R(@dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3)))))), @@F(true, @@D(@@N(@@S(@var_3, @@R(@dub(!@var_0, @gtesubtb(true, @var_2, @var_3)))))), @@D(@@X))), @@X)))))), @@N(@@S(@var_2, @@D(@@N(@@F(@cDub, @@M(@var_1, @@N(@@S(@var_3, @@R(@dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))))), @@D(@@X)), @@X)))))))), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f20510) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        if (uint_address(arg1[1]) == 0x5637d7e52c90) // F2a true
        {
          const data_expression& t1 = down_cast<data_expression>(arg1[1]);
          const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
          if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x5637d7f20510) // F1
          {
            if (var_1 == arg2[1]) // M
            {
              if (uint_address(arg2[1]) == 0x5637d7f1fd90) // F2a false
              {
                const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_318_2(delayed_rewr_44_1<data_expression>(var_0), rewr_322_3(*reinterpret_cast<const data_expression*>(0x5637d7f09c80), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(false, @var_2, @var_3))
              }
              else
              {
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_318_2(var_0, rewr_322_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
              }
            }
            else
            {
              if (uint_address(arg2[1]) == 0x5637d7f1fd90) // F2a false
              {
                const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_318_2(delayed_rewr_44_1<data_expression>(var_0), rewr_322_3(*reinterpret_cast<const data_expression*>(0x5637d7f09c80), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(false, @var_2, @var_3))
              }
              else
              {
              }
            }
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg1[1]) == 0x5637d7f1fd90) // F2a false
          {
            const data_expression& t1 = down_cast<data_expression>(arg1[1]);
            const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
            if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x5637d7f20510) // F1
            {
              if (var_1 == arg2[1]) // M
              {
                if (uint_address(arg2[1]) == 0x5637d7e52c90) // F2a true
                {
                  const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_318_2(delayed_rewr_44_1<data_expression>(var_0), rewr_322_3(*reinterpret_cast<const data_expression*>(0x5637d7f07160), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(true, @var_2, @var_3))
                }
                else
                {
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_318_2(var_0, rewr_322_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
                }
              }
              else
              {
                if (uint_address(arg2[1]) == 0x5637d7e52c90) // F2a true
                {
                  const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_318_2(delayed_rewr_44_1<data_expression>(var_0), rewr_322_3(*reinterpret_cast<const data_expression*>(0x5637d7f07160), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(true, @var_2, @var_3))
                }
                else
                {
                }
              }
            }
            else
            {
            }
          }
          else
          {
            const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
            if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x5637d7f20510) // F1
            {
              if (var_1 == arg2[1]) // M
              {
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_318_2(var_0, rewr_322_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
              }
              else
              {
              }
            }
            else
            {
            }
          }
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5f860), arg0, arg1, arg2);
  }

  static inline data_expression rewr_322_3_term(const application& t) { return rewr_322_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_322_3_term_arg_in_normal_form(const application& t) { return rewr_322_3(t[0], t[1], t[2]); }


  // [44] !: Bool -> Bool
  template < class DATA_EXPR0>
  class delayed_rewr_44_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_44_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_44_1(m_t0);
      }
  };
  
  // [322] @gtesubtb: Bool # Pos # Pos -> Nat
  static inline const data_expression& rewr_322_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82bd0);
  }

  static inline data_expression rewr_322_0_term(const application&) { return rewr_322_0(); }

  static inline data_expression rewr_322_0_term_arg_in_normal_form(const application&) { return rewr_322_0(); }


  // [318] @dub: Bool # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_318_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F(@cNat, @@S(@var_1, @@R(2 * @var_1 + if(@var_0, 1, 0))), @@X)))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f1ee00) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        return rewr_77_1(rewr_52_2(var_0, var_1)); // R1 2 * @var_1 + if(@var_0, 1, 0)
      }
      else
      {
      }
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(false, @@D(@@N(@@F(0, @@R(0), @@X))), @@F(true, @@D(@@N(@@F(0, @@R(1), @@X))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7f1fd90) // F1
      {
        if (uint_address(arg1) == 0x5637d7f200c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7e82b60); // R1 0
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7e52c90) // F1
        {
          if (uint_address(arg1) == 0x5637d7f200c0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7e6fcd0); // R1 1
          }
          else
          {
          }
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5f920), arg0, arg1);
  }

  static inline data_expression rewr_318_2_term(const application& t) { return rewr_318_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_318_2_term_arg_in_normal_form(const application& t) { return rewr_318_2(t[0], t[1]); }


  // [318] @dub: Bool # Nat -> Nat
  static inline const data_expression& rewr_318_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f935c0);
  }

  static inline data_expression rewr_318_0_term(const application&) { return rewr_318_0(); }

  static inline data_expression rewr_318_0_term_arg_in_normal_form(const application&) { return rewr_318_0(); }


  // [317] pred: Pos -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_317_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(1, @@R(0), @@F(@cDub, @@F(false, @@D(@@N(@@S(@var_0, @@R(@dub(true, pred(@var_0)))))), @@F(true, @@D(@@N(@@S(@var_0, @@R(2 * @var_0)))), @@D(@@X))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7f204e0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7e82b60); // R1 0
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f20510) // F1
        {
          if (uint_address(arg0[1]) == 0x5637d7f1fd90) // F2a false
          {
            const data_expression& t1 = down_cast<data_expression>(arg0[1]);
            const data_expression& var_0 = down_cast<data_expression>(arg0[2]); // S2
            return rewr_318_2(*reinterpret_cast<const data_expression*>(0x5637d7f07160), rewr_317_1(var_0)); // R1 @dub(true, pred(@var_0))
          }
          else
          {
            if (uint_address(arg0[1]) == 0x5637d7e52c90) // F2a true
            {
              const data_expression& t1 = down_cast<data_expression>(arg0[1]);
              const data_expression& var_0 = down_cast<data_expression>(arg0[2]); // S2
              return rewr_77_1(rewr_52_2(*reinterpret_cast<const data_expression*>(0x5637d7f09c80), var_0)); // R1 2 * @var_0
            }
            else
            {
            }
          }
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5f950), arg0);
  }

  static inline data_expression rewr_317_1_term(const application& t) { return rewr_317_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_317_1_term_arg_in_normal_form(const application& t) { return rewr_317_1(t[0]); }


  // [317] pred: Pos -> Nat
  static inline const data_expression& rewr_317_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7b1d0);
  }

  static inline data_expression rewr_317_0_term(const application&) { return rewr_317_0(); }

  static inline data_expression rewr_317_0_term_arg_in_normal_form(const application&) { return rewr_317_0(); }


  // [311] Nat2Pos: Nat -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_311_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(@cNat, @@S(@var_0, @@R(@var_0)), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f1ee00) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5fa70), arg0);
  }

  static inline data_expression rewr_311_1_term(const application& t) { return rewr_311_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_311_1_term_arg_in_normal_form(const application& t) { return rewr_311_1(t[0]); }


  // [311] Nat2Pos: Nat -> Pos
  static inline const data_expression& rewr_311_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e72da0);
  }

  static inline data_expression rewr_311_0_term(const application&) { return rewr_311_0(); }

  static inline data_expression rewr_311_0_term_arg_in_normal_form(const application&) { return rewr_311_0(); }


  // [308] >: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_308_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(@var_1 < @var_0))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_303_2(var_1, var_0); // R1 @var_1 < @var_0
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f53d10), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_308_2_term(const application& t) { return rewr_308_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_308_2_term_arg_in_normal_form(const application& t) { return rewr_308_2(t[0], t[1]); }


  // [308] >: Pos # Pos -> Bool
  static inline const data_expression& rewr_308_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e735c0);
  }

  static inline data_expression rewr_308_0_term(const application&) { return rewr_308_0(); }

  static inline data_expression rewr_308_0_term_arg_in_normal_form(const application&) { return rewr_308_0(); }


  // [304] <=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_304_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(1, @@D(@@N(@@S(@var_0, @@R(true)))), @@X)
    {
      if (uint_address(arg0) == 0x5637d7f204e0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(@cDub, @@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@M(@var_0, @@R(true), @@F(@cDub, @@S(@var_3, @@N(@@S(@var_4, @@R(if(@var_1 => @var_3, @var_2 <= @var_4, @var_2 < @var_4))))), @@F(1, @@R(false), @@X)))))))), @@N(@@M(@var_0, @@R(true), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f20510) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f20510) // F1
          {
            const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
            const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
            return rewr_60_3(rewr_305_2(var_1, var_3), delayed_rewr_304_2<data_expression, data_expression>(var_2, var_4), delayed_rewr_303_2<data_expression, data_expression>(var_2, var_4)); // R1 if(@var_1 => @var_3, @var_2 <= @var_4, @var_2 < @var_4)
          }
          else
          {
            if (uint_address(arg1) == 0x5637d7f204e0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
            }
          }
        }
      }
      else
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f545b0), arg0, arg1);
  }

  static inline data_expression rewr_304_2_term(const application& t) { return rewr_304_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_304_2_term_arg_in_normal_form(const application& t) { return rewr_304_2(t[0], t[1]); }


  // [303] <: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_303_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_303_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_303_2(m_t0, m_t1);
      }
  };
  
  // [304] <=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_304_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_304_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_304_2(m_t0, m_t1);
      }
  };
  
  // [304] <=: Pos # Pos -> Bool
  static inline const data_expression& rewr_304_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eae300);
  }

  static inline data_expression rewr_304_0_term(const application&) { return rewr_304_0(); }

  static inline data_expression rewr_304_0_term_arg_in_normal_form(const application&) { return rewr_304_0(); }


  // [303] <: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_303_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@N(@@F(1, @@R(false), @@X))
    {
      if (uint_address(arg1) == 0x5637d7f204e0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
      }
      else
      {
      }
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@S(@var_0, @@F(1, @@D(@@N(@@M(@var_0, @@R(false), @@F(@cDub, @@N(@@R(true)), @@X)))), @@F(@cDub, @@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@M(@var_0, @@R(false), @@F(@cDub, @@S(@var_3, @@N(@@S(@var_4, @@R(if(@var_3 => @var_1, @var_2 < @var_4, @var_2 <= @var_4))))), @@X))))))), @@N(@@M(@var_0, @@R(false), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address(arg0) == 0x5637d7f204e0) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f20510) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f20510) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f20510) // F1
            {
              const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
              const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
              return rewr_60_3(rewr_305_2(var_3, var_1), delayed_rewr_303_2<data_expression, data_expression>(var_2, var_4), delayed_rewr_304_2<data_expression, data_expression>(var_2, var_4)); // R1 if(@var_3 => @var_1, @var_2 < @var_4, @var_2 <= @var_4)
            }
            else
            {
            }
          }
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f54640), arg0, arg1);
  }

  static inline data_expression rewr_303_2_term(const application& t) { return rewr_303_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_303_2_term_arg_in_normal_form(const application& t) { return rewr_303_2(t[0], t[1]); }


  // [303] <: Pos # Pos -> Bool
  static inline const data_expression& rewr_303_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e74400);
  }

  static inline data_expression rewr_303_0_term(const application&) { return rewr_303_0(); }

  static inline data_expression rewr_303_0_term_arg_in_normal_form(const application&) { return rewr_303_0(); }


  // [80] if: Bool # Pos # Pos -> Pos
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_80_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1ed10), arg0, arg1, arg2);
  }

  static inline data_expression rewr_80_3_term(const application& t) { return rewr_80_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_80_3_term_arg_in_normal_form(const application& t) { return rewr_80_3(t[0], t[1], t[2]); }


  // [80] if: Bool # Pos # Pos -> Pos
  static inline const data_expression& rewr_80_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e81b20);
  }

  static inline data_expression rewr_80_0_term(const application&) { return rewr_80_0(); }

  static inline data_expression rewr_80_0_term_arg_in_normal_form(const application&) { return rewr_80_0(); }


  // [306] !=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_306_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_51_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f53d70), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_306_2_term(const application& t) { return rewr_306_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_306_2_term_arg_in_normal_form(const application& t) { return rewr_306_2(t[0], t[1]); }


  // [306] !=: Pos # Pos -> Bool
  static inline const data_expression& rewr_306_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e71840);
  }

  static inline data_expression rewr_306_0_term(const application&) { return rewr_306_0(); }

  static inline data_expression rewr_306_0_term_arg_in_normal_form(const application&) { return rewr_306_0(); }


  // [51] ==: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_51_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(1, @@D(@@N(@@M(@var_0, @@R(true), @@F(@cDub, @@N(@@R(false)), @@X)))), @@F(@cDub, @@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@M(@var_0, @@R(true), @@F(1, @@R(false), @@F(@cDub, @@S(@var_3, @@N(@@S(@var_4, @@R(@var_1 == @var_3 && @var_2 == @var_4)))), @@X)))))))), @@N(@@M(@var_0, @@R(true), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address(arg0) == 0x5637d7f204e0) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f20510) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f20510) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
            if (uint_address(arg1) == 0x5637d7f204e0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
              if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f20510) // F1
              {
                const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
                const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
                return rewr_45_2(rewr_149_2(var_1, var_3), delayed_rewr_51_2<data_expression, data_expression>(var_2, var_4)); // R1 @var_1 == @var_3 && @var_2 == @var_4
              }
              else
              {
              }
            }
          }
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20540), arg0, arg1);
  }

  static inline data_expression rewr_51_2_term(const application& t) { return rewr_51_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_51_2_term_arg_in_normal_form(const application& t) { return rewr_51_2(t[0], t[1]); }


  // [51] ==: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_51_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_51_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_51_2(m_t0, m_t1);
      }
  };
  
  // [51] ==: Pos # Pos -> Bool
  static inline const data_expression& rewr_51_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e6f3f0);
  }

  static inline data_expression rewr_51_0_term(const application&) { return rewr_51_0(); }

  static inline data_expression rewr_51_0_term_arg_in_normal_form(const application&) { return rewr_51_0(); }


  // [291] <: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_291_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) < @to_pos(@var_1), @@R(true), @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@less_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) > @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(false), @@X)))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_303_2(delayed_rewr_568_1<data_expression>(var_0), rewr_568_1(var_1)) == sort_bool::true_()) // C
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
        if (rewr_51_2(rewr_568_1(var_0), rewr_568_1(var_1)) == sort_bool::true_()) // C
        {
          return rewr_570_2(var_0, var_1); // R1 @less_arguments(@var_0, @var_1)
        }
        else
        {
          if (rewr_308_2(delayed_rewr_568_1<data_expression>(var_0), delayed_rewr_568_1<data_expression>(var_1)) == sort_bool::true_()) // C
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
            if (var_0 == arg1) // M
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f54e20), arg0, arg1);
  }

  static inline data_expression rewr_291_2_term(const application& t) { return rewr_291_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_291_2_term_arg_in_normal_form(const application& t) { return rewr_291_2(t[0], t[1]); }


  // [568] @to_pos: Position -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_568_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_568_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_568_1(m_t0);
      }
  };
  
  // [291] <: Position # Position -> Bool
  static inline const data_expression& rewr_291_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e6f4c0);
  }

  static inline data_expression rewr_291_0_term(const application&) { return rewr_291_0(); }

  static inline data_expression rewr_291_0_term_arg_in_normal_form(const application&) { return rewr_291_0(); }


  // [56] if: Bool # Position # Position -> Position
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_56_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20360), arg0, arg1, arg2);
  }

  static inline data_expression rewr_56_3_term(const application& t) { return rewr_56_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_56_3_term_arg_in_normal_form(const application& t) { return rewr_56_3(t[0], t[1], t[2]); }


  // [56] if: Bool # Position # Position -> Position
  static inline const data_expression& rewr_56_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e71870);
  }

  static inline data_expression rewr_56_0_term(const application&) { return rewr_56_0(); }

  static inline data_expression rewr_56_0_term_arg_in_normal_form(const application&) { return rewr_56_0(); }


  // [290] !=: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_290_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_48_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f54e50), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_290_2_term(const application& t) { return rewr_290_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_290_2_term_arg_in_normal_form(const application& t) { return rewr_290_2(t[0], t[1]); }


  // [290] !=: Position # Position -> Bool
  static inline const data_expression& rewr_290_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e73dc0);
  }

  static inline data_expression rewr_290_0_term(const application&) { return rewr_290_0(); }

  static inline data_expression rewr_290_0_term_arg_in_normal_form(const application&) { return rewr_290_0(); }


  // [48] ==: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_48_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_51_2(rewr_568_1(var_0), rewr_568_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_569_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_306_2(delayed_rewr_568_1<data_expression>(var_0), delayed_rewr_568_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20690), arg0, arg1);
  }

  static inline data_expression rewr_48_2_term(const application& t) { return rewr_48_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_48_2_term_arg_in_normal_form(const application& t) { return rewr_48_2(t[0], t[1]); }


  // [48] ==: Position # Position -> Bool
  static inline const data_expression& rewr_48_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eae2d0);
  }

  static inline data_expression rewr_48_0_term(const application&) { return rewr_48_0(); }

  static inline data_expression rewr_48_0_term_arg_in_normal_form(const application&) { return rewr_48_0(); }


  // [284] !=: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_284_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_85_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55180), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_284_2_term(const application& t) { return rewr_284_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_284_2_term_arg_in_normal_form(const application& t) { return rewr_284_2(t[0], t[1]); }


  // [284] !=: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_284_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e74430);
  }

  static inline data_expression rewr_284_0_term(const application&) { return rewr_284_0(); }

  static inline data_expression rewr_284_0_term_arg_in_normal_form(const application&) { return rewr_284_0(); }


  // [85] ==: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_85_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_51_2(rewr_586_1(var_0), rewr_586_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_587_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_306_2(delayed_rewr_586_1<data_expression>(var_0), delayed_rewr_586_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1d0f0), arg0, arg1);
  }

  static inline data_expression rewr_85_2_term(const application& t) { return rewr_85_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_85_2_term_arg_in_normal_form(const application& t) { return rewr_85_2(t[0], t[1]); }


  // [586] @to_pos: Recipe -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_586_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_586_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_586_1(m_t0);
      }
  };
  
  // [85] ==: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_85_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e6f420);
  }

  static inline data_expression rewr_85_0_term(const application&) { return rewr_85_0(); }

  static inline data_expression rewr_85_0_term_arg_in_normal_form(const application&) { return rewr_85_0(); }


  // [280] <: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_280_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) < @to_pos(@var_1), @@R(true), @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@less_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) > @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(false), @@X)))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_303_2(delayed_rewr_601_1<data_expression>(var_0), rewr_601_1(var_1)) == sort_bool::true_()) // C
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
        if (rewr_51_2(rewr_601_1(var_0), rewr_601_1(var_1)) == sort_bool::true_()) // C
        {
          return rewr_603_2(var_0, var_1); // R1 @less_arguments(@var_0, @var_1)
        }
        else
        {
          if (rewr_308_2(delayed_rewr_601_1<data_expression>(var_0), delayed_rewr_601_1<data_expression>(var_1)) == sort_bool::true_()) // C
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
            if (var_0 == arg1) // M
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55450), arg0, arg1);
  }

  static inline data_expression rewr_280_2_term(const application& t) { return rewr_280_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_280_2_term_arg_in_normal_form(const application& t) { return rewr_280_2(t[0], t[1]); }


  // [601] @to_pos: Robot -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_601_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_601_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_601_1(m_t0);
      }
  };
  
  // [280] <: Robot # Robot -> Bool
  static inline const data_expression& rewr_280_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e6f490);
  }

  static inline data_expression rewr_280_0_term(const application&) { return rewr_280_0(); }

  static inline data_expression rewr_280_0_term_arg_in_normal_form(const application&) { return rewr_280_0(); }


  // [72] if: Bool # Robot # Robot -> Robot
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_72_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1f8e0), arg0, arg1, arg2);
  }

  static inline data_expression rewr_72_3_term(const application& t) { return rewr_72_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_72_3_term_arg_in_normal_form(const application& t) { return rewr_72_3(t[0], t[1], t[2]); }


  // [72] if: Bool # Robot # Robot -> Robot
  static inline const data_expression& rewr_72_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e81af0);
  }

  static inline data_expression rewr_72_0_term(const application&) { return rewr_72_0(); }

  static inline data_expression rewr_72_0_term_arg_in_normal_form(const application&) { return rewr_72_0(); }


  // [279] !=: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_279_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_46_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55480), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_279_2_term(const application& t) { return rewr_279_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_279_2_term_arg_in_normal_form(const application& t) { return rewr_279_2(t[0], t[1]); }


  // [279] !=: Robot # Robot -> Bool
  static inline const data_expression& rewr_279_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f08cc0);
  }

  static inline data_expression rewr_279_0_term(const application&) { return rewr_279_0(); }

  static inline data_expression rewr_279_0_term_arg_in_normal_form(const application&) { return rewr_279_0(); }


  // [46] ==: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_46_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_51_2(rewr_601_1(var_0), rewr_601_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_602_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_306_2(delayed_rewr_601_1<data_expression>(var_0), delayed_rewr_601_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20720), arg0, arg1);
  }

  static inline data_expression rewr_46_2_term(const application& t) { return rewr_46_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_46_2_term_arg_in_normal_form(const application& t) { return rewr_46_2(t[0], t[1]); }


  // [46] ==: Robot # Robot -> Bool
  static inline const data_expression& rewr_46_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e72c40);
  }

  static inline data_expression rewr_46_0_term(const application&) { return rewr_46_0(); }

  static inline data_expression rewr_46_0_term_arg_in_normal_form(const application&) { return rewr_46_0(); }


  // [78] if: Bool # ChuckStatus # ChuckStatus -> ChuckStatus
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_78_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5637d7e52c90) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5637d7f1fd90) // F1
        {
          const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
          return var_1; // R1 @var_1
        }
        else
        {
        }
      }
    }
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@N(@@S(@var_1, @@N(@@M(@var_1, @@R(@var_1), @@X))))
    {
      const data_expression& var_1 = arg1; // S1
      if (var_1 == arg2) // M
      {
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1eda0), arg0, arg1, arg2);
  }

  static inline data_expression rewr_78_3_term(const application& t) { return rewr_78_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_78_3_term_arg_in_normal_form(const application& t) { return rewr_78_3(t[0], t[1], t[2]); }


  // [78] if: Bool # ChuckStatus # ChuckStatus -> ChuckStatus
  static inline const data_expression& rewr_78_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e73df0);
  }

  static inline data_expression rewr_78_0_term(const application&) { return rewr_78_0(); }

  static inline data_expression rewr_78_0_term_arg_in_normal_form(const application&) { return rewr_78_0(); }


  // [274] !=: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_274_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_61_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55780), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_274_2_term(const application& t) { return rewr_274_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_274_2_term_arg_in_normal_form(const application& t) { return rewr_274_2(t[0], t[1]); }


  // [274] !=: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_274_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f05ac0);
  }

  static inline data_expression rewr_274_0_term(const application&) { return rewr_274_0(); }

  static inline data_expression rewr_274_0_term_arg_in_normal_form(const application&) { return rewr_274_0(); }


  // [61] ==: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_61_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_51_2(rewr_620_1(var_0), rewr_620_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_621_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_306_2(delayed_rewr_620_1<data_expression>(var_0), delayed_rewr_620_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20180), arg0, arg1);
  }

  static inline data_expression rewr_61_2_term(const application& t) { return rewr_61_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_61_2_term_arg_in_normal_form(const application& t) { return rewr_61_2(t[0], t[1]); }


  // [620] @to_pos: ChuckStatus -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_620_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_620_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_620_1(m_t0);
      }
  };
  
  // [61] ==: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_61_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e72c70);
  }

  static inline data_expression rewr_61_0_term(const application&) { return rewr_61_0(); }

  static inline data_expression rewr_61_0_term_arg_in_normal_form(const application&) { return rewr_61_0(); }


  // [270] <: RobotPositionT # RobotPositionT -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_270_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) < @to_pos(@var_1), @@R(true), @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@less_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) > @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(false), @@X)))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_303_2(delayed_rewr_639_1<data_expression>(var_0), rewr_639_1(var_1)) == sort_bool::true_()) // C
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
        if (rewr_51_2(rewr_639_1(var_0), rewr_639_1(var_1)) == sort_bool::true_()) // C
        {
          return rewr_641_2(var_0, var_1); // R1 @less_arguments(@var_0, @var_1)
        }
        else
        {
          if (rewr_308_2(delayed_rewr_639_1<data_expression>(var_0), delayed_rewr_639_1<data_expression>(var_1)) == sort_bool::true_()) // C
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
          }
          else
          {
            if (var_0 == arg1) // M
            {
              return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55a50), arg0, arg1);
  }

  static inline data_expression rewr_270_2_term(const application& t) { return rewr_270_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_270_2_term_arg_in_normal_form(const application& t) { return rewr_270_2(t[0], t[1]); }


  // [639] @to_pos: RobotPositionT -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_639_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_639_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_639_1(m_t0);
      }
  };
  
  // [270] <: RobotPositionT # RobotPositionT -> Bool
  static inline const data_expression& rewr_270_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f08cf0);
  }

  static inline data_expression rewr_270_0_term(const application&) { return rewr_270_0(); }

  static inline data_expression rewr_270_0_term_arg_in_normal_form(const application&) { return rewr_270_0(); }


  // [268] !=: RobotPositionT # RobotPositionT -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_268_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_267_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55ab0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_268_2_term(const application& t) { return rewr_268_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_268_2_term_arg_in_normal_form(const application& t) { return rewr_268_2(t[0], t[1]); }


  // [268] !=: RobotPositionT # RobotPositionT -> Bool
  static inline const data_expression& rewr_268_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e72ba0);
  }

  static inline data_expression rewr_268_0_term(const application&) { return rewr_268_0(); }

  static inline data_expression rewr_268_0_term_arg_in_normal_form(const application&) { return rewr_268_0(); }


  // [267] ==: RobotPositionT # RobotPositionT -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_267_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_51_2(rewr_639_1(var_0), rewr_639_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_640_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_306_2(delayed_rewr_639_1<data_expression>(var_0), delayed_rewr_639_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55ae0), arg0, arg1);
  }

  static inline data_expression rewr_267_2_term(const application& t) { return rewr_267_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_267_2_term_arg_in_normal_form(const application& t) { return rewr_267_2(t[0], t[1]); }


  // [267] ==: RobotPositionT # RobotPositionT -> Bool
  static inline const data_expression& rewr_267_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e79ac0);
  }

  static inline data_expression rewr_267_0_term(const application&) { return rewr_267_0(); }

  static inline data_expression rewr_267_0_term_arg_in_normal_form(const application&) { return rewr_267_0(); }


  // [261] !=: Enum4 # Enum4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_261_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_260_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55e10), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_261_2_term(const application& t) { return rewr_261_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_261_2_term_arg_in_normal_form(const application& t) { return rewr_261_2(t[0], t[1]); }


  // [261] !=: Enum4 # Enum4 -> Bool
  static inline const data_expression& rewr_261_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb1000);
  }

  static inline data_expression rewr_261_0_term(const application&) { return rewr_261_0(); }

  static inline data_expression rewr_261_0_term_arg_in_normal_form(const application&) { return rewr_261_0(); }


  // [260] ==: Enum4 # Enum4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_260_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_51_2(rewr_658_1(var_0), rewr_658_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_659_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_306_2(delayed_rewr_658_1<data_expression>(var_0), delayed_rewr_658_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f55e40), arg0, arg1);
  }

  static inline data_expression rewr_260_2_term(const application& t) { return rewr_260_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_260_2_term_arg_in_normal_form(const application& t) { return rewr_260_2(t[0], t[1]); }


  // [658] @to_pos: Enum4 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_658_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_658_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_658_1(m_t0);
      }
  };
  
  // [260] ==: Enum4 # Enum4 -> Bool
  static inline const data_expression& rewr_260_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e72bd0);
  }

  static inline data_expression rewr_260_0_term(const application&) { return rewr_260_0(); }

  static inline data_expression rewr_260_0_term_arg_in_normal_form(const application&) { return rewr_260_0(); }


  // [254] !=: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_254_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_253_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f56170), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_254_2_term(const application& t) { return rewr_254_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_254_2_term_arg_in_normal_form(const application& t) { return rewr_254_2(t[0], t[1]); }


  // [254] !=: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_254_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e79a90);
  }

  static inline data_expression rewr_254_0_term(const application&) { return rewr_254_0(); }

  static inline data_expression rewr_254_0_term_arg_in_normal_form(const application&) { return rewr_254_0(); }


  // [253] ==: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_253_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_51_2(rewr_676_1(var_0), rewr_676_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_677_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_306_2(delayed_rewr_676_1<data_expression>(var_0), delayed_rewr_676_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f561a0), arg0, arg1);
  }

  static inline data_expression rewr_253_2_term(const application& t) { return rewr_253_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_253_2_term_arg_in_normal_form(const application& t) { return rewr_253_2(t[0], t[1]); }


  // [676] @to_pos: Enum3 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_676_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_676_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_676_1(m_t0);
      }
  };
  
  // [253] ==: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_253_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0bef0);
  }

  static inline data_expression rewr_253_0_term(const application&) { return rewr_253_0(); }

  static inline data_expression rewr_253_0_term_arg_in_normal_form(const application&) { return rewr_253_0(); }


  // [247] !=: Enum6 # Enum6 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_247_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_246_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f564d0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_247_2_term(const application& t) { return rewr_247_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_247_2_term_arg_in_normal_form(const application& t) { return rewr_247_2(t[0], t[1]); }


  // [247] !=: Enum6 # Enum6 -> Bool
  static inline const data_expression& rewr_247_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f05af0);
  }

  static inline data_expression rewr_247_0_term(const application&) { return rewr_247_0(); }

  static inline data_expression rewr_247_0_term_arg_in_normal_form(const application&) { return rewr_247_0(); }


  // [246] ==: Enum6 # Enum6 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_246_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_51_2(rewr_697_1(var_0), rewr_697_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_698_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_306_2(delayed_rewr_697_1<data_expression>(var_0), delayed_rewr_697_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f56500), arg0, arg1);
  }

  static inline data_expression rewr_246_2_term(const application& t) { return rewr_246_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_246_2_term_arg_in_normal_form(const application& t) { return rewr_246_2(t[0], t[1]); }


  // [697] @to_pos: Enum6 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_697_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_697_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_697_1(m_t0);
      }
  };
  
  // [246] ==: Enum6 # Enum6 -> Bool
  static inline const data_expression& rewr_246_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ea8110);
  }

  static inline data_expression rewr_246_0_term(const application&) { return rewr_246_0(); }

  static inline data_expression rewr_246_0_term_arg_in_normal_form(const application&) { return rewr_246_0(); }


  // [236] !=: Set(RobotPositionT) # Set(RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_236_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_235_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f57040), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_236_2_term(const application& t) { return rewr_236_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_236_2_term_arg_in_normal_form(const application& t) { return rewr_236_2(t[0], t[1]); }


  // [236] !=: Set(RobotPositionT) # Set(RobotPositionT) -> Bool
  static inline const data_expression& rewr_236_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f11890);
  }

  static inline data_expression rewr_236_0_term(const application&) { return rewr_236_0(); }

  static inline data_expression rewr_236_0_term_arg_in_normal_form(const application&) { return rewr_236_0(); }


  // [235] ==: Set(RobotPositionT) # Set(RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_235_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(@set, @@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@M(@var_0, @@R(true), @@F(@set, @@S(@var_3, @@N(@@S(@var_4, @@R(forall c: RobotPositionT. @var_1(c) == @var_3(c) == c in @var_2 == c in @var_4)))), @@X))))))), @@N(@@M(@var_0, @@R(true), @@X))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5637d7f57760) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f57760) // F1
          {
            const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
            const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
            return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(22), rewr_149_2(rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), delayed_application1<data_expression,data_expression>(var_3,static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), delayed_rewr_149_2<delayed_rewr_233_2<data_expression, data_expression>, delayed_rewr_233_2<data_expression, data_expression>>(delayed_rewr_233_2<data_expression, data_expression>(static_cast<data_expression>(this_rewriter->bound_variable_get(12)), var_2), delayed_rewr_233_2<data_expression, data_expression>(static_cast<data_expression>(this_rewriter->bound_variable_get(12)), var_4))), true, sigma())); // R1 forall c: RobotPositionT. @var_1(c) == @var_3(c) == c in @var_2 == c in @var_4
          }
          else
          {
          }
        }
      }
      else
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f570a0), arg0, arg1);
  }

  static inline data_expression rewr_235_2_term(const application& t) { return rewr_235_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_235_2_term_arg_in_normal_form(const application& t) { return rewr_235_2(t[0], t[1]); }


  // [149] ==: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_149_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_149_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_149_2(m_t0, m_t1);
      }
  };
  
  // [235] ==: Set(RobotPositionT) # Set(RobotPositionT) -> Bool
  static inline const data_expression& rewr_235_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eaac80);
  }

  static inline data_expression rewr_235_0_term(const application&) { return rewr_235_0(); }

  static inline data_expression rewr_235_0_term_arg_in_normal_form(const application&) { return rewr_235_0(); }


  // [227] @false_: RobotPositionT -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_227_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@S(@var_0, @@R(false))
    {
      return *reinterpret_cast<const data_expression*>(0x5637d7f09c80); // R1 false
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f57610), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_227_1_term(const application& t) { return rewr_227_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_227_1_term_arg_in_normal_form(const application& t) { return rewr_227_1(t[0]); }


  // [227] @false_: RobotPositionT -> Bool
  static inline const data_expression& rewr_227_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f11860);
  }

  static inline data_expression rewr_227_0_term(const application&) { return rewr_227_0(); }

  static inline data_expression rewr_227_0_term_arg_in_normal_form(const application&) { return rewr_227_0(); }


  // [54] in: RobotPositionT # Set(RobotPositionT) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_54_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F(@set, @@S(@var_1, @@N(@@S(@var_2, @@R(@var_1(@var_0) != @var_0 in @var_2)))), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7f57760) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
        return rewr_234_2(delayed_application1<data_expression,data_expression>(var_1,var_0), delayed_rewr_233_2<data_expression, data_expression>(var_0, var_2)); // R1 @var_1(@var_0) != @var_0 in @var_2
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20450), arg0, arg1);
  }

  static inline data_expression rewr_54_2_term(const application& t) { return rewr_54_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_54_2_term_arg_in_normal_form(const application& t) { return rewr_54_2(t[0], t[1]); }


  // [54] in: RobotPositionT # Set(RobotPositionT) -> Bool
  static inline const data_expression& rewr_54_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0bec0);
  }

  static inline data_expression rewr_54_0_term(const application&) { return rewr_54_0(); }

  static inline data_expression rewr_54_0_term_arg_in_normal_form(const application&) { return rewr_54_0(); }


  // [214] !=: (Enum4 # Robot # Robot # Robot # Robot -> Robot) # (Enum4 # Robot # Robot # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_214_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_213_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f57b80), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_214_2_term(const application& t) { return rewr_214_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_214_2_term_arg_in_normal_form(const application& t) { return rewr_214_2(t[0], t[1]); }


  // [214] !=: (Enum4 # Robot # Robot # Robot # Robot -> Robot) # (Enum4 # Robot # Robot # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_214_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb1030);
  }

  static inline data_expression rewr_214_0_term(const application&) { return rewr_214_0(); }

  static inline data_expression rewr_214_0_term_arg_in_normal_form(const application&) { return rewr_214_0(); }


  // [213] ==: (Enum4 # Robot # Robot # Robot # Robot -> Robot) # (Enum4 # Robot # Robot # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_213_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum4, x0,x0,x0,x0: Robot. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(23), rewr_46_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Robot. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f57bb0), arg0, arg1);
  }

  static inline data_expression rewr_213_2_term(const application& t) { return rewr_213_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_213_2_term_arg_in_normal_form(const application& t) { return rewr_213_2(t[0], t[1]); }


  // [213] ==: (Enum4 # Robot # Robot # Robot # Robot -> Robot) # (Enum4 # Robot # Robot # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_213_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10670);
  }

  static inline data_expression rewr_213_0_term(const application&) { return rewr_213_0(); }

  static inline data_expression rewr_213_0_term_arg_in_normal_form(const application&) { return rewr_213_0(); }


  // [207] !=: (Enum4 # Position # Position # Position # Position -> Position) # (Enum4 # Position # Position # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_207_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_206_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ef9690), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_207_2_term(const application& t) { return rewr_207_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_207_2_term_arg_in_normal_form(const application& t) { return rewr_207_2(t[0], t[1]); }


  // [207] !=: (Enum4 # Position # Position # Position # Position -> Position) # (Enum4 # Position # Position # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_207_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10640);
  }

  static inline data_expression rewr_207_0_term(const application&) { return rewr_207_0(); }

  static inline data_expression rewr_207_0_term_arg_in_normal_form(const application&) { return rewr_207_0(); }


  // [206] ==: (Enum4 # Position # Position # Position # Position -> Position) # (Enum4 # Position # Position # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_206_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum4, x0,x0,x0,x0: Position. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(24), rewr_48_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Position. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ef96c0), arg0, arg1);
  }

  static inline data_expression rewr_206_2_term(const application& t) { return rewr_206_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_206_2_term_arg_in_normal_form(const application& t) { return rewr_206_2(t[0], t[1]); }


  // [206] ==: (Enum4 # Position # Position # Position # Position -> Position) # (Enum4 # Position # Position # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_206_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ea02f0);
  }

  static inline data_expression rewr_206_0_term(const application&) { return rewr_206_0(); }

  static inline data_expression rewr_206_0_term_arg_in_normal_form(const application&) { return rewr_206_0(); }


  // [200] !=: (Enum4 # Pos # Pos # Pos # Pos -> Pos) # (Enum4 # Pos # Pos # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_200_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_199_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ef9ae0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_200_2_term(const application& t) { return rewr_200_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_200_2_term_arg_in_normal_form(const application& t) { return rewr_200_2(t[0], t[1]); }


  // [200] !=: (Enum4 # Pos # Pos # Pos # Pos -> Pos) # (Enum4 # Pos # Pos # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_200_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e81f70);
  }

  static inline data_expression rewr_200_0_term(const application&) { return rewr_200_0(); }

  static inline data_expression rewr_200_0_term_arg_in_normal_form(const application&) { return rewr_200_0(); }


  // [199] ==: (Enum4 # Pos # Pos # Pos # Pos -> Pos) # (Enum4 # Pos # Pos # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_199_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum4, x0,x0,x0,x0: Pos. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(25), rewr_51_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Pos. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ef9b10), arg0, arg1);
  }

  static inline data_expression rewr_199_2_term(const application& t) { return rewr_199_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_199_2_term_arg_in_normal_form(const application& t) { return rewr_199_2(t[0], t[1]); }


  // [199] ==: (Enum4 # Pos # Pos # Pos # Pos -> Pos) # (Enum4 # Pos # Pos # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_199_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e84270);
  }

  static inline data_expression rewr_199_0_term(const application&) { return rewr_199_0(); }

  static inline data_expression rewr_199_0_term_arg_in_normal_form(const application&) { return rewr_199_0(); }


  // [193] !=: (Enum4 # Bool # Bool # Bool # Bool -> Bool) # (Enum4 # Bool # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_193_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_192_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ef9f30), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_193_2_term(const application& t) { return rewr_193_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_193_2_term_arg_in_normal_form(const application& t) { return rewr_193_2(t[0], t[1]); }


  // [193] !=: (Enum4 # Bool # Bool # Bool # Bool -> Bool) # (Enum4 # Bool # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_193_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e81750);
  }

  static inline data_expression rewr_193_0_term(const application&) { return rewr_193_0(); }

  static inline data_expression rewr_193_0_term_arg_in_normal_form(const application&) { return rewr_193_0(); }


  // [192] ==: (Enum4 # Bool # Bool # Bool # Bool -> Bool) # (Enum4 # Bool # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_192_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum4, x0,x0,x0,x0: Bool. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(26), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), delayed_application5<data_expression,data_expression,data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(13)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Bool. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ef9f60), arg0, arg1);
  }

  static inline data_expression rewr_192_2_term(const application& t) { return rewr_192_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_192_2_term_arg_in_normal_form(const application& t) { return rewr_192_2(t[0], t[1]); }


  // [192] ==: (Enum4 # Bool # Bool # Bool # Bool -> Bool) # (Enum4 # Bool # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_192_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e813a0);
  }

  static inline data_expression rewr_192_0_term(const application&) { return rewr_192_0(); }

  static inline data_expression rewr_192_0_term_arg_in_normal_form(const application&) { return rewr_192_0(); }


  // [186] !=: (Enum3 # Pos # Pos # Pos -> Pos) # (Enum3 # Pos # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_186_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_185_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efa380), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_186_2_term(const application& t) { return rewr_186_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_186_2_term_arg_in_normal_form(const application& t) { return rewr_186_2(t[0], t[1]); }


  // [186] !=: (Enum3 # Pos # Pos # Pos -> Pos) # (Enum3 # Pos # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_186_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f11600);
  }

  static inline data_expression rewr_186_0_term(const application&) { return rewr_186_0(); }

  static inline data_expression rewr_186_0_term_arg_in_normal_form(const application&) { return rewr_186_0(); }


  // [185] ==: (Enum3 # Pos # Pos # Pos -> Pos) # (Enum3 # Pos # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_185_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Pos. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(27), rewr_51_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Pos. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efa3b0), arg0, arg1);
  }

  static inline data_expression rewr_185_2_term(const application& t) { return rewr_185_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_185_2_term_arg_in_normal_form(const application& t) { return rewr_185_2(t[0], t[1]); }


  // [185] ==: (Enum3 # Pos # Pos # Pos -> Pos) # (Enum3 # Pos # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_185_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e85c10);
  }

  static inline data_expression rewr_185_0_term(const application&) { return rewr_185_0(); }

  static inline data_expression rewr_185_0_term_arg_in_normal_form(const application&) { return rewr_185_0(); }


  // [179] !=: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_179_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_178_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efa7d0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_179_2_term(const application& t) { return rewr_179_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_179_2_term_arg_in_normal_form(const application& t) { return rewr_179_2(t[0], t[1]); }


  // [179] !=: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_179_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82790);
  }

  static inline data_expression rewr_179_0_term(const application&) { return rewr_179_0(); }

  static inline data_expression rewr_179_0_term_arg_in_normal_form(const application&) { return rewr_179_0(); }


  // [178] ==: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_178_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Bool. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(28), rewr_149_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), delayed_application4<data_expression,data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(14)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Bool. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efa800), arg0, arg1);
  }

  static inline data_expression rewr_178_2_term(const application& t) { return rewr_178_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_178_2_term_arg_in_normal_form(const application& t) { return rewr_178_2(t[0], t[1]); }


  // [178] ==: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_178_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e80fe0);
  }

  static inline data_expression rewr_178_0_term(const application&) { return rewr_178_0(); }

  static inline data_expression rewr_178_0_term_arg_in_normal_form(const application&) { return rewr_178_0(); }


  // [172] !=: (Enum3 # Robot # Robot # Robot -> Robot) # (Enum3 # Robot # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_172_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_171_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efac20), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_172_2_term(const application& t) { return rewr_172_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_172_2_term_arg_in_normal_form(const application& t) { return rewr_172_2(t[0], t[1]); }


  // [172] !=: (Enum3 # Robot # Robot # Robot -> Robot) # (Enum3 # Robot # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_172_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef87f0);
  }

  static inline data_expression rewr_172_0_term(const application&) { return rewr_172_0(); }

  static inline data_expression rewr_172_0_term_arg_in_normal_form(const application&) { return rewr_172_0(); }


  // [171] ==: (Enum3 # Robot # Robot # Robot -> Robot) # (Enum3 # Robot # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_171_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Robot. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(29), rewr_46_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Robot. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efac50), arg0, arg1);
  }

  static inline data_expression rewr_171_2_term(const application& t) { return rewr_171_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_171_2_term_arg_in_normal_form(const application& t) { return rewr_171_2(t[0], t[1]); }


  // [171] ==: (Enum3 # Robot # Robot # Robot -> Robot) # (Enum3 # Robot # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_171_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eadd50);
  }

  static inline data_expression rewr_171_0_term(const application&) { return rewr_171_0(); }

  static inline data_expression rewr_171_0_term_arg_in_normal_form(const application&) { return rewr_171_0(); }


  // [165] !=: (Enum3 # Position # Position # Position -> Position) # (Enum3 # Position # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_165_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_164_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efb070), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_165_2_term(const application& t) { return rewr_165_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_165_2_term_arg_in_normal_form(const application& t) { return rewr_165_2(t[0], t[1]); }


  // [165] !=: (Enum3 # Position # Position # Position -> Position) # (Enum3 # Position # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_165_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9fcb0);
  }

  static inline data_expression rewr_165_0_term(const application&) { return rewr_165_0(); }

  static inline data_expression rewr_165_0_term_arg_in_normal_form(const application&) { return rewr_165_0(); }


  // [164] ==: (Enum3 # Position # Position # Position -> Position) # (Enum3 # Position # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_164_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Position. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(30), rewr_48_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Position. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efb0a0), arg0, arg1);
  }

  static inline data_expression rewr_164_2_term(const application& t) { return rewr_164_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_164_2_term_arg_in_normal_form(const application& t) { return rewr_164_2(t[0], t[1]); }


  // [164] ==: (Enum3 # Position # Position # Position -> Position) # (Enum3 # Position # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_164_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e6f190);
  }

  static inline data_expression rewr_164_0_term(const application&) { return rewr_164_0(); }

  static inline data_expression rewr_164_0_term_arg_in_normal_form(const application&) { return rewr_164_0(); }


  // [158] !=: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_158_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_157_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efb4c0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_158_2_term(const application& t) { return rewr_158_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_158_2_term_arg_in_normal_form(const application& t) { return rewr_158_2(t[0], t[1]); }


  // [158] !=: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_158_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb3570);
  }

  static inline data_expression rewr_158_0_term(const application&) { return rewr_158_0(); }

  static inline data_expression rewr_158_0_term_arg_in_normal_form(const application&) { return rewr_158_0(); }


  // [157] ==: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_157_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(31), rewr_85_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efb4f0), arg0, arg1);
  }

  static inline data_expression rewr_157_2_term(const application& t) { return rewr_157_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_157_2_term_arg_in_normal_form(const application& t) { return rewr_157_2(t[0], t[1]); }


  // [157] ==: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_157_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e807c0);
  }

  static inline data_expression rewr_157_0_term(const application&) { return rewr_157_0(); }

  static inline data_expression rewr_157_0_term_arg_in_normal_form(const application&) { return rewr_157_0(); }


  // [151] !=: (Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos) # (Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_151_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_150_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efb940), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_151_2_term(const application& t) { return rewr_151_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_151_2_term_arg_in_normal_form(const application& t) { return rewr_151_2(t[0], t[1]); }


  // [151] !=: (Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos) # (Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_151_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e80790);
  }

  static inline data_expression rewr_151_0_term(const application&) { return rewr_151_0(); }

  static inline data_expression rewr_151_0_term_arg_in_normal_form(const application&) { return rewr_151_0(); }


  // [150] ==: (Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos) # (Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_150_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum6, x0,x0,x0,x0,x0,x0: Pos. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(32), rewr_51_2(rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Enum6, x0,x0,x0,x0,x0,x0: Pos. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efb970), arg0, arg1);
  }

  static inline data_expression rewr_150_2_term(const application& t) { return rewr_150_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_150_2_term_arg_in_normal_form(const application& t) { return rewr_150_2(t[0], t[1]); }


  // [150] ==: (Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos) # (Enum6 # Pos # Pos # Pos # Pos # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_150_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e803d0);
  }

  static inline data_expression rewr_150_0_term(const application&) { return rewr_150_0(); }

  static inline data_expression rewr_150_0_term_arg_in_normal_form(const application&) { return rewr_150_0(); }


  // [143] !=: (Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool) # (Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_143_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_142_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efbdf0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_143_2_term(const application& t) { return rewr_143_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_143_2_term_arg_in_normal_form(const application& t) { return rewr_143_2(t[0], t[1]); }


  // [143] !=: (Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool) # (Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_143_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e80400);
  }

  static inline data_expression rewr_143_0_term(const application&) { return rewr_143_0(); }

  static inline data_expression rewr_143_0_term_arg_in_normal_form(const application&) { return rewr_143_0(); }


  // [142] ==: (Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool) # (Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_142_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum6, x0,x0,x0,x0,x0,x0: Bool. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(33), rewr_149_2(rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), delayed_application7<data_expression,data_expression,data_expression,data_expression,data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(15)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), true, sigma())); // R1 forall x0: Enum6, x0,x0,x0,x0,x0,x0: Bool. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efbe20), arg0, arg1);
  }

  static inline data_expression rewr_142_2_term(const application& t) { return rewr_142_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_142_2_term_arg_in_normal_form(const application& t) { return rewr_142_2(t[0], t[1]); }


  // [142] ==: (Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool) # (Enum6 # Bool # Bool # Bool # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_142_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0b8b0);
  }

  static inline data_expression rewr_142_0_term(const application&) { return rewr_142_0(); }

  static inline data_expression rewr_142_0_term_arg_in_normal_form(const application&) { return rewr_142_0(); }


  // [136] !=: (Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot) # (Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_136_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_135_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efc270), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_136_2_term(const application& t) { return rewr_136_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_136_2_term_arg_in_normal_form(const application& t) { return rewr_136_2(t[0], t[1]); }


  // [136] !=: (Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot) # (Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_136_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f389e0);
  }

  static inline data_expression rewr_136_0_term(const application&) { return rewr_136_0(); }

  static inline data_expression rewr_136_0_term_arg_in_normal_form(const application&) { return rewr_136_0(); }


  // [135] ==: (Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot) # (Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_135_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum6, x0,x0,x0,x0,x0,x0: Robot. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(34), rewr_46_2(rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Enum6, x0,x0,x0,x0,x0,x0: Robot. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efc2a0), arg0, arg1);
  }

  static inline data_expression rewr_135_2_term(const application& t) { return rewr_135_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_135_2_term_arg_in_normal_form(const application& t) { return rewr_135_2(t[0], t[1]); }


  // [135] ==: (Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot) # (Enum6 # Robot # Robot # Robot # Robot # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_135_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7b7f0);
  }

  static inline data_expression rewr_135_0_term(const application&) { return rewr_135_0(); }

  static inline data_expression rewr_135_0_term_arg_in_normal_form(const application&) { return rewr_135_0(); }


  // [129] !=: (Enum6 # Position # Position # Position # Position # Position # Position -> Position) # (Enum6 # Position # Position # Position # Position # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_129_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_128_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efc6f0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_129_2_term(const application& t) { return rewr_129_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_129_2_term_arg_in_normal_form(const application& t) { return rewr_129_2(t[0], t[1]); }


  // [129] !=: (Enum6 # Position # Position # Position # Position # Position # Position -> Position) # (Enum6 # Position # Position # Position # Position # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_129_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7b6e0);
  }

  static inline data_expression rewr_129_0_term(const application&) { return rewr_129_0(); }

  static inline data_expression rewr_129_0_term_arg_in_normal_form(const application&) { return rewr_129_0(); }


  // [128] ==: (Enum6 # Position # Position # Position # Position # Position # Position -> Position) # (Enum6 # Position # Position # Position # Position # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_128_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum6, x0,x0,x0,x0,x0,x0: Position. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(35), rewr_48_2(rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Enum6, x0,x0,x0,x0,x0,x0: Position. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efc720), arg0, arg1);
  }

  static inline data_expression rewr_128_2_term(const application& t) { return rewr_128_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_128_2_term_arg_in_normal_form(const application& t) { return rewr_128_2(t[0], t[1]); }


  // [128] ==: (Enum6 # Position # Position # Position # Position # Position # Position -> Position) # (Enum6 # Position # Position # Position # Position # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_128_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7b610);
  }

  static inline data_expression rewr_128_0_term(const application&) { return rewr_128_0(); }

  static inline data_expression rewr_128_0_term_arg_in_normal_form(const application&) { return rewr_128_0(); }


  // [122] !=: (Enum6 # Recipe # Recipe # Recipe # Recipe # Recipe # Recipe -> Recipe) # (Enum6 # Recipe # Recipe # Recipe # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_122_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_121_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efcb70), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_122_2_term(const application& t) { return rewr_122_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_122_2_term_arg_in_normal_form(const application& t) { return rewr_122_2(t[0], t[1]); }


  // [122] !=: (Enum6 # Recipe # Recipe # Recipe # Recipe # Recipe # Recipe -> Recipe) # (Enum6 # Recipe # Recipe # Recipe # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_122_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7b640);
  }

  static inline data_expression rewr_122_0_term(const application&) { return rewr_122_0(); }

  static inline data_expression rewr_122_0_term_arg_in_normal_form(const application&) { return rewr_122_0(); }


  // [121] ==: (Enum6 # Recipe # Recipe # Recipe # Recipe # Recipe # Recipe -> Recipe) # (Enum6 # Recipe # Recipe # Recipe # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_121_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum6, x0,x0,x0,x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(36), rewr_85_2(rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(15)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Enum6, x0,x0,x0,x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efcba0), arg0, arg1);
  }

  static inline data_expression rewr_121_2_term(const application& t) { return rewr_121_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_121_2_term_arg_in_normal_form(const application& t) { return rewr_121_2(t[0], t[1]); }


  // [121] ==: (Enum6 # Recipe # Recipe # Recipe # Recipe # Recipe # Recipe -> Recipe) # (Enum6 # Recipe # Recipe # Recipe # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_121_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7b6b0);
  }

  static inline data_expression rewr_121_0_term(const application&) { return rewr_121_0(); }

  static inline data_expression rewr_121_0_term_arg_in_normal_form(const application&) { return rewr_121_0(); }


  // [115] !=: (Enum4 # Recipe # Recipe # Recipe # Recipe -> Recipe) # (Enum4 # Recipe # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_115_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_114_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efd020), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_115_2_term(const application& t) { return rewr_115_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_115_2_term_arg_in_normal_form(const application& t) { return rewr_115_2(t[0], t[1]); }


  // [115] !=: (Enum4 # Recipe # Recipe # Recipe # Recipe -> Recipe) # (Enum4 # Recipe # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_115_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f11180);
  }

  static inline data_expression rewr_115_0_term(const application&) { return rewr_115_0(); }

  static inline data_expression rewr_115_0_term_arg_in_normal_form(const application&) { return rewr_115_0(); }


  // [114] ==: (Enum4 # Recipe # Recipe # Recipe # Recipe -> Recipe) # (Enum4 # Recipe # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_114_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum4, x0,x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(37), rewr_85_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7efd050), arg0, arg1);
  }

  static inline data_expression rewr_114_2_term(const application& t) { return rewr_114_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_114_2_term_arg_in_normal_form(const application& t) { return rewr_114_2(t[0], t[1]); }


  // [114] ==: (Enum4 # Recipe # Recipe # Recipe # Recipe -> Recipe) # (Enum4 # Recipe # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_114_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f111b0);
  }

  static inline data_expression rewr_114_0_term(const application&) { return rewr_114_0(); }

  static inline data_expression rewr_114_0_term_arg_in_normal_form(const application&) { return rewr_114_0(); }


  // [108] !=: (Enum3 # Nat # Nat # Nat -> Nat) # (Enum3 # Nat # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_108_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_44_1(rewr_107_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1cbb0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_108_2_term(const application& t) { return rewr_108_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_108_2_term_arg_in_normal_form(const application& t) { return rewr_108_2(t[0], t[1]); }


  // [108] !=: (Enum3 # Nat # Nat # Nat -> Nat) # (Enum3 # Nat # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_108_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7b820);
  }

  static inline data_expression rewr_108_0_term(const application&) { return rewr_108_0(); }

  static inline data_expression rewr_108_0_term_arg_in_normal_form(const application&) { return rewr_108_0(); }


  // [107] ==: (Enum3 # Nat # Nat # Nat -> Nat) # (Enum3 # Nat # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_107_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Nat. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(38), rewr_81_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Nat. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@M(@var_0, @@R(true), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (var_0 == arg1) // M
      {
        return *reinterpret_cast<const data_expression*>(0x5637d7f07160); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1cbe0), arg0, arg1);
  }

  static inline data_expression rewr_107_2_term(const application& t) { return rewr_107_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_107_2_term_arg_in_normal_form(const application& t) { return rewr_107_2(t[0], t[1]); }


  // [107] ==: (Enum3 # Nat # Nat # Nat -> Nat) # (Enum3 # Nat # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_107_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10e90);
  }

  static inline data_expression rewr_107_0_term(const application&) { return rewr_107_0(); }

  static inline data_expression rewr_107_0_term_arg_in_normal_form(const application&) { return rewr_107_0(); }


  // [43] e0_6: Enum6
  static inline const data_expression& rewr_43_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f10e60);
  }

  static inline data_expression rewr_43_0_term(const application&) { return rewr_43_0(); }

  static inline data_expression rewr_43_0_term_arg_in_normal_form(const application&) { return rewr_43_0(); }


  // [42] e1_6: Enum6
  static inline const data_expression& rewr_42_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb10d0);
  }

  static inline data_expression rewr_42_0_term(const application&) { return rewr_42_0(); }

  static inline data_expression rewr_42_0_term_arg_in_normal_form(const application&) { return rewr_42_0(); }


  // [41] e2_6: Enum6
  static inline const data_expression& rewr_41_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82dd0);
  }

  static inline data_expression rewr_41_0_term(const application&) { return rewr_41_0(); }

  static inline data_expression rewr_41_0_term_arg_in_normal_form(const application&) { return rewr_41_0(); }


  // [40] e3_6: Enum6
  static inline const data_expression& rewr_40_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f42eb0);
  }

  static inline data_expression rewr_40_0_term(const application&) { return rewr_40_0(); }

  static inline data_expression rewr_40_0_term_arg_in_normal_form(const application&) { return rewr_40_0(); }


  // [39] e4_6: Enum6
  static inline const data_expression& rewr_39_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef8610);
  }

  static inline data_expression rewr_39_0_term(const application&) { return rewr_39_0(); }

  static inline data_expression rewr_39_0_term_arg_in_normal_form(const application&) { return rewr_39_0(); }


  // [38] e5_6: Enum6
  static inline const data_expression& rewr_38_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb0b20);
  }

  static inline data_expression rewr_38_0_term(const application&) { return rewr_38_0(); }

  static inline data_expression rewr_38_0_term_arg_in_normal_form(const application&) { return rewr_38_0(); }


  // [37] e0_3: Enum3
  static inline const data_expression& rewr_37_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f3d210);
  }

  static inline data_expression rewr_37_0_term(const application&) { return rewr_37_0(); }

  static inline data_expression rewr_37_0_term_arg_in_normal_form(const application&) { return rewr_37_0(); }


  // [36] e1_3: Enum3
  static inline const data_expression& rewr_36_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f08560);
  }

  static inline data_expression rewr_36_0_term(const application&) { return rewr_36_0(); }

  static inline data_expression rewr_36_0_term_arg_in_normal_form(const application&) { return rewr_36_0(); }


  // [35] e2_3: Enum3
  static inline const data_expression& rewr_35_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82f10);
  }

  static inline data_expression rewr_35_0_term(const application&) { return rewr_35_0(); }

  static inline data_expression rewr_35_0_term_arg_in_normal_form(const application&) { return rewr_35_0(); }


  // [34] e0_4: Enum4
  static inline const data_expression& rewr_34_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f06760);
  }

  static inline data_expression rewr_34_0_term(const application&) { return rewr_34_0(); }

  static inline data_expression rewr_34_0_term_arg_in_normal_form(const application&) { return rewr_34_0(); }


  // [33] e1_4: Enum4
  static inline const data_expression& rewr_33_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb0760);
  }

  static inline data_expression rewr_33_0_term(const application&) { return rewr_33_0(); }

  static inline data_expression rewr_33_0_term_arg_in_normal_form(const application&) { return rewr_33_0(); }


  // [32] e2_4: Enum4
  static inline const data_expression& rewr_32_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e73200);
  }

  static inline data_expression rewr_32_0_term(const application&) { return rewr_32_0(); }

  static inline data_expression rewr_32_0_term_arg_in_normal_form(const application&) { return rewr_32_0(); }


  // [31] e3_4: Enum4
  static inline const data_expression& rewr_31_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0a4a0);
  }

  static inline data_expression rewr_31_0_term(const application&) { return rewr_31_0(); }

  static inline data_expression rewr_31_0_term_arg_in_normal_form(const application&) { return rewr_31_0(); }


  // [631] rpt: Robot # Position # Position -> RobotPositionT
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_631_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ed0110), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1), local_rewrite(arg_not_nf2));
  }

  static inline data_expression rewr_631_3_term(const application& t) { return rewr_631_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_631_3_term_arg_in_normal_form(const application& t) { return rewr_631_3(t[0], t[1], t[2]); }


  // [631] rpt: Robot # Position # Position -> RobotPositionT
  static inline const data_expression& rewr_631_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f09000);
  }

  static inline data_expression rewr_631_0_term(const application&) { return rewr_631_0(); }

  static inline data_expression rewr_631_0_term_arg_in_normal_form(const application&) { return rewr_631_0(); }


  // [79] Notifying: ChuckStatus
  static inline const data_expression& rewr_79_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e71e00);
  }

  static inline data_expression rewr_79_0_term(const application&) { return rewr_79_0(); }

  static inline data_expression rewr_79_0_term_arg_in_normal_form(const application&) { return rewr_79_0(); }


  // [73] Processed: ChuckStatus
  static inline const data_expression& rewr_73_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f069e0);
  }

  static inline data_expression rewr_73_0_term(const application&) { return rewr_73_0(); }

  static inline data_expression rewr_73_0_term_arg_in_normal_form(const application&) { return rewr_73_0(); }


  // [62] Wafer: ChuckStatus
  static inline const data_expression& rewr_62_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e73340);
  }

  static inline data_expression rewr_62_0_term(const application&) { return rewr_62_0(); }

  static inline data_expression rewr_62_0_term_arg_in_normal_form(const application&) { return rewr_62_0(); }


  // [65] Empty: ChuckStatus
  static inline const data_expression& rewr_65_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e7a050);
  }

  static inline data_expression rewr_65_0_term(const application&) { return rewr_65_0(); }

  static inline data_expression rewr_65_0_term_arg_in_normal_form(const application&) { return rewr_65_0(); }


  // [67] RobotThree: Robot
  static inline const data_expression& rewr_67_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f084c0);
  }

  static inline data_expression rewr_67_0_term(const application&) { return rewr_67_0(); }

  static inline data_expression rewr_67_0_term_arg_in_normal_form(const application&) { return rewr_67_0(); }


  // [68] RobotTwo: Robot
  static inline const data_expression& rewr_68_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f09aa0);
  }

  static inline data_expression rewr_68_0_term(const application&) { return rewr_68_0(); }

  static inline data_expression rewr_68_0_term_arg_in_normal_form(const application&) { return rewr_68_0(); }


  // [55] RobotOne: Robot
  static inline const data_expression& rewr_55_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef6e50);
  }

  static inline data_expression rewr_55_0_term(const application&) { return rewr_55_0(); }

  static inline data_expression rewr_55_0_term_arg_in_normal_form(const application&) { return rewr_55_0(); }


  // [84] RecipeThree: Recipe
  static inline const data_expression& rewr_84_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e72440);
  }

  static inline data_expression rewr_84_0_term(const application&) { return rewr_84_0(); }

  static inline data_expression rewr_84_0_term_arg_in_normal_form(const application&) { return rewr_84_0(); }


  // [83] RecipeTwo: Recipe
  static inline const data_expression& rewr_83_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f3da50);
  }

  static inline data_expression rewr_83_0_term(const application&) { return rewr_83_0(); }

  static inline data_expression rewr_83_0_term_arg_in_normal_form(const application&) { return rewr_83_0(); }


  // [82] RecipeOne: Recipe
  static inline const data_expression& rewr_82_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0a2c0);
  }

  static inline data_expression rewr_82_0_term(const application&) { return rewr_82_0(); }

  static inline data_expression rewr_82_0_term_arg_in_normal_form(const application&) { return rewr_82_0(); }


  // [69] ChuckEmptyTwo: Position
  static inline const data_expression& rewr_69_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e84810);
  }

  static inline data_expression rewr_69_0_term(const application&) { return rewr_69_0(); }

  static inline data_expression rewr_69_0_term_arg_in_normal_form(const application&) { return rewr_69_0(); }


  // [70] ChuckEmptyOne: Position
  static inline const data_expression& rewr_70_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef8930);
  }

  static inline data_expression rewr_70_0_term(const application&) { return rewr_70_0(); }

  static inline data_expression rewr_70_0_term_arg_in_normal_form(const application&) { return rewr_70_0(); }


  // [563] ChuckProj: Position
  static inline const data_expression& rewr_563_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef6f90);
  }

  static inline data_expression rewr_563_0_term(const application&) { return rewr_563_0(); }

  static inline data_expression rewr_563_0_term_arg_in_normal_form(const application&) { return rewr_563_0(); }


  // [71] ChuckMeas: Position
  static inline const data_expression& rewr_71_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e84450);
  }

  static inline data_expression rewr_71_0_term(const application&) { return rewr_71_0(); }

  static inline data_expression rewr_71_0_term_arg_in_normal_form(const application&) { return rewr_71_0(); }


  // [57] ChuckOut: Position
  static inline const data_expression& rewr_57_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e816b0);
  }

  static inline data_expression rewr_57_0_term(const application&) { return rewr_57_0(); }

  static inline data_expression rewr_57_0_term_arg_in_normal_form(const application&) { return rewr_57_0(); }


  // [59] ChuckIn: Position
  static inline const data_expression& rewr_59_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7ef91f0);
  }

  static inline data_expression rewr_59_0_term(const application&) { return rewr_59_0(); }

  static inline data_expression rewr_59_0_term_arg_in_normal_form(const application&) { return rewr_59_0(); }


  // [58] Tray: Position
  static inline const data_expression& rewr_58_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f09be0);
  }

  static inline data_expression rewr_58_0_term(const application&) { return rewr_58_0(); }

  static inline data_expression rewr_58_0_term_arg_in_normal_form(const application&) { return rewr_58_0(); }


  // [549] @fset_insert: RobotPositionT # FSet(RobotPositionT) -> FSet(RobotPositionT)
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_549_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F({}, @@R({@var_0}), @@X)))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      if (uint_address(arg1) == 0x5637d7f57370) // F1
      {
        return rewr_550_2(var_0, *reinterpret_cast<const data_expression*>(0x5637d7e9f510)); // R1 {@var_0}
      }
      else
      {
      }
    }
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@S(@var_0, @@N(@@F(@fset_cons, @@S(@var_1, @@M(@var_0, @@N(@@S(@var_2, @@R(@fset_cons(@var_0, @var_2)))), @@N(@@S(@var_2, @@C(@var_0 < @var_1, @@R(@fset_cons(@var_0, @fset_cons(@var_1, @var_2))), @@C(@var_1 < @var_0, @@R(@fset_cons(@var_1, @fset_insert(@var_0, @var_2))), @@D(@@X))))))), @@X)))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5637d7ecc700) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        if (var_0 == arg1[1]) // M
        {
          const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
          return rewr_550_2(var_0, var_2); // R1 @fset_cons(@var_0, @var_2)
        }
        else
        {
          const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
          if (rewr_270_2(var_0, var_1) == sort_bool::true_()) // C
          {
            return rewr_550_2(var_0, rewr_550_2(var_1, var_2)); // R1 @fset_cons(@var_0, @fset_cons(@var_1, @var_2))
          }
          else
          {
            if (rewr_270_2(var_1, var_0) == sort_bool::true_()) // C
            {
              return rewr_550_2(var_1, rewr_549_2(var_0, var_2)); // R1 @fset_cons(@var_1, @fset_insert(@var_0, @var_2))
            }
            else
            {
            }
          }
        }
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7ecc730), arg0, arg1);
  }

  static inline data_expression rewr_549_2_term(const application& t) { return rewr_549_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_549_2_term_arg_in_normal_form(const application& t) { return rewr_549_2(t[0], t[1]); }


  // [549] @fset_insert: RobotPositionT # FSet(RobotPositionT) -> FSet(RobotPositionT)
  static inline const data_expression& rewr_549_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0c350);
  }

  static inline data_expression rewr_549_0_term(const application&) { return rewr_549_0(); }

  static inline data_expression rewr_549_0_term_arg_in_normal_form(const application&) { return rewr_549_0(); }


  // [232] {}: FSet(RobotPositionT)
  static inline const data_expression& rewr_232_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9f510);
  }

  static inline data_expression rewr_232_0_term(const application&) { return rewr_232_0(); }

  static inline data_expression rewr_232_0_term_arg_in_normal_form(const application&) { return rewr_232_0(); }


  // [66] false: Bool
  static inline const data_expression& rewr_66_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f09c80);
  }

  static inline data_expression rewr_66_0_term(const application&) { return rewr_66_0(); }

  static inline data_expression rewr_66_0_term_arg_in_normal_form(const application&) { return rewr_66_0(); }


  // [17] true: Bool
  static inline const data_expression& rewr_17_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f07160);
  }

  static inline data_expression rewr_17_0_term(const application&) { return rewr_17_0(); }

  static inline data_expression rewr_17_0_term_arg_in_normal_form(const application&) { return rewr_17_0(); }


  // [349] @cNeg: Pos -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_349_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5db80), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_349_1_term(const application& t) { return rewr_349_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_349_1_term_arg_in_normal_form(const application& t) { return rewr_349_1(t[0]); }


  // [349] @cNeg: Pos -> Int
  static inline const data_expression& rewr_349_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7f0c320);
  }

  static inline data_expression rewr_349_0_term(const application&) { return rewr_349_0(); }

  static inline data_expression rewr_349_0_term_arg_in_normal_form(const application&) { return rewr_349_0(); }


  // [348] @cInt: Nat -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_348_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5dbb0), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_348_1_term(const application& t) { return rewr_348_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_348_1_term_arg_in_normal_form(const application& t) { return rewr_348_1(t[0]); }


  // [348] @cInt: Nat -> Int
  static inline const data_expression& rewr_348_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9f360);
  }

  static inline data_expression rewr_348_0_term(const application&) { return rewr_348_0(); }

  static inline data_expression rewr_348_0_term_arg_in_normal_form(const application&) { return rewr_348_0(); }


  // [309] @cPair: Nat # Nat -> @NatPair
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_309_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f5fad0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_309_2_term(const application& t) { return rewr_309_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_309_2_term_arg_in_normal_form(const application& t) { return rewr_309_2(t[0], t[1]); }


  // [309] @cPair: Nat # Nat -> @NatPair
  static inline const data_expression& rewr_309_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9f330);
  }

  static inline data_expression rewr_309_0_term(const application&) { return rewr_309_0(); }

  static inline data_expression rewr_309_0_term_arg_in_normal_form(const application&) { return rewr_309_0(); }


  // [77] @cNat: Pos -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_77_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f1ee00), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_77_1_term(const application& t) { return rewr_77_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_77_1_term_arg_in_normal_form(const application& t) { return rewr_77_1(t[0]); }


  // [77] @cNat: Pos -> Nat
  static inline const data_expression& rewr_77_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7eb10a0);
  }

  static inline data_expression rewr_77_0_term(const application&) { return rewr_77_0(); }

  static inline data_expression rewr_77_0_term_arg_in_normal_form(const application&) { return rewr_77_0(); }


  // [64] 0: Nat
  static inline const data_expression& rewr_64_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e82b60);
  }

  static inline data_expression rewr_64_0_term(const application&) { return rewr_64_0(); }

  static inline data_expression rewr_64_0_term_arg_in_normal_form(const application&) { return rewr_64_0(); }


  // [52] @cDub: Bool # Pos -> Pos
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_52_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f20510), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_52_2_term(const application& t) { return rewr_52_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_52_2_term_arg_in_normal_form(const application& t) { return rewr_52_2(t[0], t[1]); }


  // [52] @cDub: Bool # Pos -> Pos
  static inline const data_expression& rewr_52_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9f540);
  }

  static inline data_expression rewr_52_0_term(const application&) { return rewr_52_0(); }

  static inline data_expression rewr_52_0_term_arg_in_normal_form(const application&) { return rewr_52_0(); }


  // [53] 1: Pos
  static inline const data_expression& rewr_53_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e75280);
  }

  static inline data_expression rewr_53_0_term(const application&) { return rewr_53_0(); }

  static inline data_expression rewr_53_0_term_arg_in_normal_form(const application&) { return rewr_53_0(); }


  // [220] @set: (RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_220_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5637d7f57760), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_220_2_term(const application& t) { return rewr_220_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_220_2_term_arg_in_normal_form(const application& t) { return rewr_220_2(t[0], t[1]); }


  // [220] @set: (RobotPositionT -> Bool) # FSet(RobotPositionT) -> Set(RobotPositionT)
  static inline const data_expression& rewr_220_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5637d7e9f290);
  }

  static inline data_expression rewr_220_0_term(const application&) { return rewr_220_0(); }

  static inline data_expression rewr_220_0_term_arg_in_normal_form(const application&) { return rewr_220_0(); }


};
} // namespace
void set_the_precompiled_rewrite_functions_in_a_lookup_table()
{
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 38 + 0] = rewr_functions::rewr_38_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 38 + 0] = rewr_functions::rewr_38_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 37 + 0] = rewr_functions::rewr_37_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 37 + 0] = rewr_functions::rewr_37_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 36 + 0] = rewr_functions::rewr_36_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 36 + 0] = rewr_functions::rewr_36_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 35 + 0] = rewr_functions::rewr_35_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 35 + 0] = rewr_functions::rewr_35_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 34 + 0] = rewr_functions::rewr_34_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 34 + 0] = rewr_functions::rewr_34_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 33 + 0] = rewr_functions::rewr_33_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 33 + 0] = rewr_functions::rewr_33_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 32 + 0] = rewr_functions::rewr_32_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 32 + 0] = rewr_functions::rewr_32_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 31 + 0] = rewr_functions::rewr_31_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 31 + 0] = rewr_functions::rewr_31_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 17 + 0] = rewr_functions::rewr_17_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 17 + 0] = rewr_functions::rewr_17_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 16 + 0] = rewr_functions::rewr_16_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 16 + 0] = rewr_functions::rewr_16_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 16 + 4] = rewr_functions::rewr_16_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 16 + 4] = rewr_functions::rewr_16_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 13 + 0] = rewr_functions::rewr_13_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 13 + 0] = rewr_functions::rewr_13_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 13 + 7] = rewr_functions::rewr_13_7_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 13 + 7] = rewr_functions::rewr_13_7_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 12 + 0] = rewr_functions::rewr_12_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 12 + 0] = rewr_functions::rewr_12_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 12 + 7] = rewr_functions::rewr_12_7_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 12 + 7] = rewr_functions::rewr_12_7_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 11 + 0] = rewr_functions::rewr_11_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 11 + 0] = rewr_functions::rewr_11_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 11 + 7] = rewr_functions::rewr_11_7_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 11 + 7] = rewr_functions::rewr_11_7_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 10 + 0] = rewr_functions::rewr_10_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 10 + 0] = rewr_functions::rewr_10_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 10 + 7] = rewr_functions::rewr_10_7_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 10 + 7] = rewr_functions::rewr_10_7_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 9 + 0] = rewr_functions::rewr_9_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 9 + 0] = rewr_functions::rewr_9_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 9 + 4] = rewr_functions::rewr_9_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 9 + 4] = rewr_functions::rewr_9_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 8 + 0] = rewr_functions::rewr_8_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 8 + 0] = rewr_functions::rewr_8_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 8 + 4] = rewr_functions::rewr_8_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 8 + 4] = rewr_functions::rewr_8_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 7 + 0] = rewr_functions::rewr_7_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 7 + 0] = rewr_functions::rewr_7_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 7 + 4] = rewr_functions::rewr_7_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 7 + 4] = rewr_functions::rewr_7_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 6 + 0] = rewr_functions::rewr_6_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 6 + 0] = rewr_functions::rewr_6_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 6 + 4] = rewr_functions::rewr_6_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 6 + 4] = rewr_functions::rewr_6_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 5 + 0] = rewr_functions::rewr_5_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 5 + 0] = rewr_functions::rewr_5_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 5 + 4] = rewr_functions::rewr_5_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 5 + 4] = rewr_functions::rewr_5_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 4 + 0] = rewr_functions::rewr_4_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 4 + 0] = rewr_functions::rewr_4_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 4 + 5] = rewr_functions::rewr_4_5_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 4 + 5] = rewr_functions::rewr_4_5_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 3 + 0] = rewr_functions::rewr_3_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 3 + 0] = rewr_functions::rewr_3_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 3 + 5] = rewr_functions::rewr_3_5_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 3 + 5] = rewr_functions::rewr_3_5_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 2 + 0] = rewr_functions::rewr_2_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 2 + 0] = rewr_functions::rewr_2_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 2 + 5] = rewr_functions::rewr_2_5_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 2 + 5] = rewr_functions::rewr_2_5_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 1 + 0] = rewr_functions::rewr_1_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 1 + 0] = rewr_functions::rewr_1_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 1 + 5] = rewr_functions::rewr_1_5_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 1 + 5] = rewr_functions::rewr_1_5_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 0 + 0] = rewr_functions::rewr_0_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 0 + 0] = rewr_functions::rewr_0_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 423 + 0] = rewr_functions::rewr_423_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 423 + 0] = rewr_functions::rewr_423_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 423 + 2] = rewr_functions::rewr_423_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 423 + 2] = rewr_functions::rewr_423_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 422 + 0] = rewr_functions::rewr_422_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 422 + 0] = rewr_functions::rewr_422_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 422 + 2] = rewr_functions::rewr_422_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 422 + 2] = rewr_functions::rewr_422_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 416 + 0] = rewr_functions::rewr_416_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 416 + 0] = rewr_functions::rewr_416_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 416 + 2] = rewr_functions::rewr_416_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 416 + 2] = rewr_functions::rewr_416_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 415 + 0] = rewr_functions::rewr_415_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 415 + 0] = rewr_functions::rewr_415_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 415 + 2] = rewr_functions::rewr_415_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 415 + 2] = rewr_functions::rewr_415_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 409 + 0] = rewr_functions::rewr_409_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 409 + 0] = rewr_functions::rewr_409_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 409 + 2] = rewr_functions::rewr_409_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 409 + 2] = rewr_functions::rewr_409_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 408 + 0] = rewr_functions::rewr_408_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 408 + 0] = rewr_functions::rewr_408_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 408 + 2] = rewr_functions::rewr_408_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 408 + 2] = rewr_functions::rewr_408_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 402 + 0] = rewr_functions::rewr_402_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 402 + 0] = rewr_functions::rewr_402_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 402 + 2] = rewr_functions::rewr_402_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 402 + 2] = rewr_functions::rewr_402_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 401 + 0] = rewr_functions::rewr_401_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 401 + 0] = rewr_functions::rewr_401_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 401 + 2] = rewr_functions::rewr_401_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 401 + 2] = rewr_functions::rewr_401_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 395 + 0] = rewr_functions::rewr_395_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 395 + 0] = rewr_functions::rewr_395_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 395 + 2] = rewr_functions::rewr_395_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 395 + 2] = rewr_functions::rewr_395_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 394 + 0] = rewr_functions::rewr_394_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 394 + 0] = rewr_functions::rewr_394_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 394 + 2] = rewr_functions::rewr_394_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 394 + 2] = rewr_functions::rewr_394_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 102 + 0] = rewr_functions::rewr_102_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 102 + 0] = rewr_functions::rewr_102_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 102 + 2] = rewr_functions::rewr_102_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 102 + 2] = rewr_functions::rewr_102_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 101 + 0] = rewr_functions::rewr_101_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 101 + 0] = rewr_functions::rewr_101_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 101 + 2] = rewr_functions::rewr_101_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 101 + 2] = rewr_functions::rewr_101_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 95 + 0] = rewr_functions::rewr_95_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 95 + 0] = rewr_functions::rewr_95_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 95 + 2] = rewr_functions::rewr_95_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 95 + 2] = rewr_functions::rewr_95_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 94 + 0] = rewr_functions::rewr_94_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 94 + 0] = rewr_functions::rewr_94_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 94 + 2] = rewr_functions::rewr_94_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 94 + 2] = rewr_functions::rewr_94_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 87 + 0] = rewr_functions::rewr_87_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 87 + 0] = rewr_functions::rewr_87_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 87 + 2] = rewr_functions::rewr_87_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 87 + 2] = rewr_functions::rewr_87_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 86 + 0] = rewr_functions::rewr_86_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 86 + 0] = rewr_functions::rewr_86_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 86 + 2] = rewr_functions::rewr_86_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 86 + 2] = rewr_functions::rewr_86_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 603 + 0] = rewr_functions::rewr_603_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 603 + 0] = rewr_functions::rewr_603_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 603 + 2] = rewr_functions::rewr_603_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 603 + 2] = rewr_functions::rewr_603_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 602 + 0] = rewr_functions::rewr_602_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 602 + 0] = rewr_functions::rewr_602_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 602 + 2] = rewr_functions::rewr_602_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 602 + 2] = rewr_functions::rewr_602_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 601 + 0] = rewr_functions::rewr_601_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 601 + 0] = rewr_functions::rewr_601_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 601 + 1] = rewr_functions::rewr_601_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 601 + 1] = rewr_functions::rewr_601_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 587 + 0] = rewr_functions::rewr_587_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 587 + 0] = rewr_functions::rewr_587_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 587 + 2] = rewr_functions::rewr_587_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 587 + 2] = rewr_functions::rewr_587_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 586 + 0] = rewr_functions::rewr_586_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 586 + 0] = rewr_functions::rewr_586_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 586 + 1] = rewr_functions::rewr_586_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 586 + 1] = rewr_functions::rewr_586_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 570 + 0] = rewr_functions::rewr_570_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 570 + 0] = rewr_functions::rewr_570_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 570 + 2] = rewr_functions::rewr_570_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 570 + 2] = rewr_functions::rewr_570_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 569 + 0] = rewr_functions::rewr_569_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 569 + 0] = rewr_functions::rewr_569_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 569 + 2] = rewr_functions::rewr_569_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 569 + 2] = rewr_functions::rewr_569_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 568 + 0] = rewr_functions::rewr_568_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 568 + 0] = rewr_functions::rewr_568_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 568 + 1] = rewr_functions::rewr_568_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 568 + 1] = rewr_functions::rewr_568_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 563 + 0] = rewr_functions::rewr_563_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 563 + 0] = rewr_functions::rewr_563_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 558 + 0] = rewr_functions::rewr_558_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 558 + 0] = rewr_functions::rewr_558_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 558 + 2] = rewr_functions::rewr_558_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 558 + 2] = rewr_functions::rewr_558_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 550 + 0] = rewr_functions::rewr_550_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 550 + 0] = rewr_functions::rewr_550_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 550 + 2] = rewr_functions::rewr_550_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 550 + 2] = rewr_functions::rewr_550_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 549 + 0] = rewr_functions::rewr_549_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 549 + 0] = rewr_functions::rewr_549_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 549 + 2] = rewr_functions::rewr_549_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 549 + 2] = rewr_functions::rewr_549_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 543 + 0] = rewr_functions::rewr_543_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 543 + 0] = rewr_functions::rewr_543_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 543 + 2] = rewr_functions::rewr_543_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 543 + 2] = rewr_functions::rewr_543_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 536 + 0] = rewr_functions::rewr_536_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 536 + 0] = rewr_functions::rewr_536_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 536 + 2] = rewr_functions::rewr_536_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 536 + 2] = rewr_functions::rewr_536_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 535 + 0] = rewr_functions::rewr_535_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 535 + 0] = rewr_functions::rewr_535_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 535 + 2] = rewr_functions::rewr_535_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 535 + 2] = rewr_functions::rewr_535_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 698 + 0] = rewr_functions::rewr_698_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 698 + 0] = rewr_functions::rewr_698_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 698 + 2] = rewr_functions::rewr_698_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 698 + 2] = rewr_functions::rewr_698_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 697 + 0] = rewr_functions::rewr_697_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 697 + 0] = rewr_functions::rewr_697_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 697 + 1] = rewr_functions::rewr_697_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 697 + 1] = rewr_functions::rewr_697_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 677 + 0] = rewr_functions::rewr_677_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 677 + 0] = rewr_functions::rewr_677_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 677 + 2] = rewr_functions::rewr_677_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 677 + 2] = rewr_functions::rewr_677_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 676 + 0] = rewr_functions::rewr_676_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 676 + 0] = rewr_functions::rewr_676_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 676 + 1] = rewr_functions::rewr_676_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 676 + 1] = rewr_functions::rewr_676_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 659 + 0] = rewr_functions::rewr_659_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 659 + 0] = rewr_functions::rewr_659_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 659 + 2] = rewr_functions::rewr_659_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 659 + 2] = rewr_functions::rewr_659_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 658 + 0] = rewr_functions::rewr_658_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 658 + 0] = rewr_functions::rewr_658_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 658 + 1] = rewr_functions::rewr_658_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 658 + 1] = rewr_functions::rewr_658_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 641 + 0] = rewr_functions::rewr_641_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 641 + 0] = rewr_functions::rewr_641_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 641 + 2] = rewr_functions::rewr_641_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 641 + 2] = rewr_functions::rewr_641_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 640 + 0] = rewr_functions::rewr_640_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 640 + 0] = rewr_functions::rewr_640_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 640 + 2] = rewr_functions::rewr_640_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 640 + 2] = rewr_functions::rewr_640_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 639 + 0] = rewr_functions::rewr_639_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 639 + 0] = rewr_functions::rewr_639_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 639 + 1] = rewr_functions::rewr_639_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 639 + 1] = rewr_functions::rewr_639_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 631 + 0] = rewr_functions::rewr_631_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 631 + 0] = rewr_functions::rewr_631_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 631 + 3] = rewr_functions::rewr_631_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 631 + 3] = rewr_functions::rewr_631_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 621 + 0] = rewr_functions::rewr_621_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 621 + 0] = rewr_functions::rewr_621_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 621 + 2] = rewr_functions::rewr_621_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 621 + 2] = rewr_functions::rewr_621_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 620 + 0] = rewr_functions::rewr_620_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 620 + 0] = rewr_functions::rewr_620_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 620 + 1] = rewr_functions::rewr_620_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 620 + 1] = rewr_functions::rewr_620_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 43 + 0] = rewr_functions::rewr_43_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 43 + 0] = rewr_functions::rewr_43_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 42 + 0] = rewr_functions::rewr_42_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 42 + 0] = rewr_functions::rewr_42_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 41 + 0] = rewr_functions::rewr_41_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 41 + 0] = rewr_functions::rewr_41_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 40 + 0] = rewr_functions::rewr_40_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 40 + 0] = rewr_functions::rewr_40_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 39 + 0] = rewr_functions::rewr_39_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 39 + 0] = rewr_functions::rewr_39_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 207 + 0] = rewr_functions::rewr_207_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 207 + 0] = rewr_functions::rewr_207_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 207 + 2] = rewr_functions::rewr_207_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 207 + 2] = rewr_functions::rewr_207_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 206 + 0] = rewr_functions::rewr_206_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 206 + 0] = rewr_functions::rewr_206_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 206 + 2] = rewr_functions::rewr_206_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 206 + 2] = rewr_functions::rewr_206_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 200 + 0] = rewr_functions::rewr_200_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 200 + 0] = rewr_functions::rewr_200_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 200 + 2] = rewr_functions::rewr_200_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 200 + 2] = rewr_functions::rewr_200_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 199 + 0] = rewr_functions::rewr_199_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 199 + 0] = rewr_functions::rewr_199_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 199 + 2] = rewr_functions::rewr_199_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 199 + 2] = rewr_functions::rewr_199_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 193 + 0] = rewr_functions::rewr_193_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 193 + 0] = rewr_functions::rewr_193_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 193 + 2] = rewr_functions::rewr_193_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 193 + 2] = rewr_functions::rewr_193_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 192 + 0] = rewr_functions::rewr_192_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 192 + 0] = rewr_functions::rewr_192_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 192 + 2] = rewr_functions::rewr_192_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 192 + 2] = rewr_functions::rewr_192_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 186 + 0] = rewr_functions::rewr_186_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 186 + 0] = rewr_functions::rewr_186_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 186 + 2] = rewr_functions::rewr_186_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 186 + 2] = rewr_functions::rewr_186_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 185 + 0] = rewr_functions::rewr_185_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 185 + 0] = rewr_functions::rewr_185_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 185 + 2] = rewr_functions::rewr_185_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 185 + 2] = rewr_functions::rewr_185_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 179 + 0] = rewr_functions::rewr_179_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 179 + 0] = rewr_functions::rewr_179_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 179 + 2] = rewr_functions::rewr_179_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 179 + 2] = rewr_functions::rewr_179_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 178 + 0] = rewr_functions::rewr_178_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 178 + 0] = rewr_functions::rewr_178_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 178 + 2] = rewr_functions::rewr_178_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 178 + 2] = rewr_functions::rewr_178_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 172 + 0] = rewr_functions::rewr_172_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 172 + 0] = rewr_functions::rewr_172_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 172 + 2] = rewr_functions::rewr_172_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 172 + 2] = rewr_functions::rewr_172_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 171 + 0] = rewr_functions::rewr_171_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 171 + 0] = rewr_functions::rewr_171_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 171 + 2] = rewr_functions::rewr_171_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 171 + 2] = rewr_functions::rewr_171_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 165 + 0] = rewr_functions::rewr_165_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 165 + 0] = rewr_functions::rewr_165_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 165 + 2] = rewr_functions::rewr_165_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 165 + 2] = rewr_functions::rewr_165_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 164 + 0] = rewr_functions::rewr_164_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 164 + 0] = rewr_functions::rewr_164_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 164 + 2] = rewr_functions::rewr_164_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 164 + 2] = rewr_functions::rewr_164_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 158 + 0] = rewr_functions::rewr_158_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 158 + 0] = rewr_functions::rewr_158_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 158 + 2] = rewr_functions::rewr_158_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 158 + 2] = rewr_functions::rewr_158_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 157 + 0] = rewr_functions::rewr_157_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 157 + 0] = rewr_functions::rewr_157_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 157 + 2] = rewr_functions::rewr_157_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 157 + 2] = rewr_functions::rewr_157_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 151 + 0] = rewr_functions::rewr_151_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 151 + 0] = rewr_functions::rewr_151_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 151 + 2] = rewr_functions::rewr_151_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 151 + 2] = rewr_functions::rewr_151_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 150 + 0] = rewr_functions::rewr_150_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 150 + 0] = rewr_functions::rewr_150_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 150 + 2] = rewr_functions::rewr_150_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 150 + 2] = rewr_functions::rewr_150_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 149 + 0] = rewr_functions::rewr_149_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 149 + 0] = rewr_functions::rewr_149_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 149 + 2] = rewr_functions::rewr_149_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 149 + 2] = rewr_functions::rewr_149_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 143 + 0] = rewr_functions::rewr_143_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 143 + 0] = rewr_functions::rewr_143_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 143 + 2] = rewr_functions::rewr_143_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 143 + 2] = rewr_functions::rewr_143_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 142 + 0] = rewr_functions::rewr_142_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 142 + 0] = rewr_functions::rewr_142_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 142 + 2] = rewr_functions::rewr_142_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 142 + 2] = rewr_functions::rewr_142_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 136 + 0] = rewr_functions::rewr_136_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 136 + 0] = rewr_functions::rewr_136_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 136 + 2] = rewr_functions::rewr_136_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 136 + 2] = rewr_functions::rewr_136_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 135 + 0] = rewr_functions::rewr_135_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 135 + 0] = rewr_functions::rewr_135_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 135 + 2] = rewr_functions::rewr_135_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 135 + 2] = rewr_functions::rewr_135_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 129 + 0] = rewr_functions::rewr_129_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 129 + 0] = rewr_functions::rewr_129_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 129 + 2] = rewr_functions::rewr_129_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 129 + 2] = rewr_functions::rewr_129_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 128 + 0] = rewr_functions::rewr_128_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 128 + 0] = rewr_functions::rewr_128_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 128 + 2] = rewr_functions::rewr_128_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 128 + 2] = rewr_functions::rewr_128_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 122 + 0] = rewr_functions::rewr_122_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 122 + 0] = rewr_functions::rewr_122_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 122 + 2] = rewr_functions::rewr_122_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 122 + 2] = rewr_functions::rewr_122_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 121 + 0] = rewr_functions::rewr_121_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 121 + 0] = rewr_functions::rewr_121_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 121 + 2] = rewr_functions::rewr_121_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 121 + 2] = rewr_functions::rewr_121_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 115 + 0] = rewr_functions::rewr_115_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 115 + 0] = rewr_functions::rewr_115_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 115 + 2] = rewr_functions::rewr_115_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 115 + 2] = rewr_functions::rewr_115_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 114 + 0] = rewr_functions::rewr_114_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 114 + 0] = rewr_functions::rewr_114_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 114 + 2] = rewr_functions::rewr_114_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 114 + 2] = rewr_functions::rewr_114_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 534 + 0] = rewr_functions::rewr_534_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 534 + 0] = rewr_functions::rewr_534_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 534 + 2] = rewr_functions::rewr_534_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 534 + 2] = rewr_functions::rewr_534_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 528 + 0] = rewr_functions::rewr_528_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 528 + 0] = rewr_functions::rewr_528_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 528 + 2] = rewr_functions::rewr_528_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 528 + 2] = rewr_functions::rewr_528_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 527 + 0] = rewr_functions::rewr_527_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 527 + 0] = rewr_functions::rewr_527_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 527 + 2] = rewr_functions::rewr_527_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 527 + 2] = rewr_functions::rewr_527_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 521 + 0] = rewr_functions::rewr_521_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 521 + 0] = rewr_functions::rewr_521_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 521 + 2] = rewr_functions::rewr_521_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 521 + 2] = rewr_functions::rewr_521_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 520 + 0] = rewr_functions::rewr_520_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 520 + 0] = rewr_functions::rewr_520_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 520 + 2] = rewr_functions::rewr_520_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 520 + 2] = rewr_functions::rewr_520_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 516 + 0] = rewr_functions::rewr_516_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 516 + 0] = rewr_functions::rewr_516_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 516 + 2] = rewr_functions::rewr_516_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 516 + 2] = rewr_functions::rewr_516_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 510 + 0] = rewr_functions::rewr_510_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 510 + 0] = rewr_functions::rewr_510_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 510 + 2] = rewr_functions::rewr_510_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 510 + 2] = rewr_functions::rewr_510_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 509 + 0] = rewr_functions::rewr_509_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 509 + 0] = rewr_functions::rewr_509_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 509 + 2] = rewr_functions::rewr_509_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 509 + 2] = rewr_functions::rewr_509_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 503 + 0] = rewr_functions::rewr_503_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 503 + 0] = rewr_functions::rewr_503_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 503 + 2] = rewr_functions::rewr_503_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 503 + 2] = rewr_functions::rewr_503_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 502 + 0] = rewr_functions::rewr_502_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 502 + 0] = rewr_functions::rewr_502_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 502 + 2] = rewr_functions::rewr_502_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 502 + 2] = rewr_functions::rewr_502_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 495 + 0] = rewr_functions::rewr_495_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 495 + 0] = rewr_functions::rewr_495_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 495 + 2] = rewr_functions::rewr_495_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 495 + 2] = rewr_functions::rewr_495_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 494 + 0] = rewr_functions::rewr_494_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 494 + 0] = rewr_functions::rewr_494_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 494 + 2] = rewr_functions::rewr_494_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 494 + 2] = rewr_functions::rewr_494_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 488 + 0] = rewr_functions::rewr_488_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 488 + 0] = rewr_functions::rewr_488_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 488 + 2] = rewr_functions::rewr_488_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 488 + 2] = rewr_functions::rewr_488_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 487 + 0] = rewr_functions::rewr_487_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 487 + 0] = rewr_functions::rewr_487_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 487 + 2] = rewr_functions::rewr_487_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 487 + 2] = rewr_functions::rewr_487_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 481 + 0] = rewr_functions::rewr_481_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 481 + 0] = rewr_functions::rewr_481_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 481 + 2] = rewr_functions::rewr_481_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 481 + 2] = rewr_functions::rewr_481_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 480 + 0] = rewr_functions::rewr_480_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 480 + 0] = rewr_functions::rewr_480_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 480 + 2] = rewr_functions::rewr_480_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 480 + 2] = rewr_functions::rewr_480_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 473 + 0] = rewr_functions::rewr_473_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 473 + 0] = rewr_functions::rewr_473_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 473 + 2] = rewr_functions::rewr_473_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 473 + 2] = rewr_functions::rewr_473_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 472 + 0] = rewr_functions::rewr_472_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 472 + 0] = rewr_functions::rewr_472_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 472 + 2] = rewr_functions::rewr_472_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 472 + 2] = rewr_functions::rewr_472_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 466 + 0] = rewr_functions::rewr_466_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 466 + 0] = rewr_functions::rewr_466_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 466 + 2] = rewr_functions::rewr_466_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 466 + 2] = rewr_functions::rewr_466_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 465 + 0] = rewr_functions::rewr_465_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 465 + 0] = rewr_functions::rewr_465_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 465 + 2] = rewr_functions::rewr_465_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 465 + 2] = rewr_functions::rewr_465_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 458 + 0] = rewr_functions::rewr_458_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 458 + 0] = rewr_functions::rewr_458_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 458 + 2] = rewr_functions::rewr_458_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 458 + 2] = rewr_functions::rewr_458_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 457 + 0] = rewr_functions::rewr_457_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 457 + 0] = rewr_functions::rewr_457_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 457 + 2] = rewr_functions::rewr_457_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 457 + 2] = rewr_functions::rewr_457_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 451 + 0] = rewr_functions::rewr_451_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 451 + 0] = rewr_functions::rewr_451_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 451 + 2] = rewr_functions::rewr_451_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 451 + 2] = rewr_functions::rewr_451_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 450 + 0] = rewr_functions::rewr_450_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 450 + 0] = rewr_functions::rewr_450_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 450 + 2] = rewr_functions::rewr_450_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 450 + 2] = rewr_functions::rewr_450_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 444 + 0] = rewr_functions::rewr_444_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 444 + 0] = rewr_functions::rewr_444_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 444 + 2] = rewr_functions::rewr_444_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 444 + 2] = rewr_functions::rewr_444_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 443 + 0] = rewr_functions::rewr_443_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 443 + 0] = rewr_functions::rewr_443_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 443 + 2] = rewr_functions::rewr_443_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 443 + 2] = rewr_functions::rewr_443_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 108 + 0] = rewr_functions::rewr_108_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 108 + 0] = rewr_functions::rewr_108_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 108 + 2] = rewr_functions::rewr_108_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 108 + 2] = rewr_functions::rewr_108_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 107 + 0] = rewr_functions::rewr_107_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 107 + 0] = rewr_functions::rewr_107_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 107 + 2] = rewr_functions::rewr_107_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 107 + 2] = rewr_functions::rewr_107_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 430 + 0] = rewr_functions::rewr_430_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 430 + 0] = rewr_functions::rewr_430_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 430 + 2] = rewr_functions::rewr_430_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 430 + 2] = rewr_functions::rewr_430_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 429 + 0] = rewr_functions::rewr_429_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 429 + 0] = rewr_functions::rewr_429_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 429 + 2] = rewr_functions::rewr_429_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 429 + 2] = rewr_functions::rewr_429_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 85 + 0] = rewr_functions::rewr_85_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 85 + 0] = rewr_functions::rewr_85_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 85 + 2] = rewr_functions::rewr_85_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 85 + 2] = rewr_functions::rewr_85_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 84 + 0] = rewr_functions::rewr_84_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 84 + 0] = rewr_functions::rewr_84_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 83 + 0] = rewr_functions::rewr_83_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 83 + 0] = rewr_functions::rewr_83_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 82 + 0] = rewr_functions::rewr_82_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 82 + 0] = rewr_functions::rewr_82_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 81 + 0] = rewr_functions::rewr_81_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 81 + 0] = rewr_functions::rewr_81_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 81 + 2] = rewr_functions::rewr_81_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 81 + 2] = rewr_functions::rewr_81_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 80 + 0] = rewr_functions::rewr_80_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 80 + 0] = rewr_functions::rewr_80_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 80 + 3] = rewr_functions::rewr_80_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 80 + 3] = rewr_functions::rewr_80_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 79 + 0] = rewr_functions::rewr_79_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 79 + 0] = rewr_functions::rewr_79_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 78 + 0] = rewr_functions::rewr_78_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 78 + 0] = rewr_functions::rewr_78_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 78 + 3] = rewr_functions::rewr_78_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 78 + 3] = rewr_functions::rewr_78_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 77 + 0] = rewr_functions::rewr_77_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 77 + 0] = rewr_functions::rewr_77_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 77 + 1] = rewr_functions::rewr_77_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 77 + 1] = rewr_functions::rewr_77_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 76 + 0] = rewr_functions::rewr_76_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 76 + 0] = rewr_functions::rewr_76_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 76 + 2] = rewr_functions::rewr_76_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 76 + 2] = rewr_functions::rewr_76_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 75 + 0] = rewr_functions::rewr_75_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 75 + 0] = rewr_functions::rewr_75_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 75 + 1] = rewr_functions::rewr_75_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 75 + 1] = rewr_functions::rewr_75_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 74 + 0] = rewr_functions::rewr_74_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 74 + 0] = rewr_functions::rewr_74_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 74 + 3] = rewr_functions::rewr_74_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 74 + 3] = rewr_functions::rewr_74_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 73 + 0] = rewr_functions::rewr_73_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 73 + 0] = rewr_functions::rewr_73_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 72 + 0] = rewr_functions::rewr_72_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 72 + 0] = rewr_functions::rewr_72_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 72 + 3] = rewr_functions::rewr_72_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 72 + 3] = rewr_functions::rewr_72_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 71 + 0] = rewr_functions::rewr_71_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 71 + 0] = rewr_functions::rewr_71_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 70 + 0] = rewr_functions::rewr_70_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 70 + 0] = rewr_functions::rewr_70_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 69 + 0] = rewr_functions::rewr_69_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 69 + 0] = rewr_functions::rewr_69_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 68 + 0] = rewr_functions::rewr_68_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 68 + 0] = rewr_functions::rewr_68_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 67 + 0] = rewr_functions::rewr_67_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 67 + 0] = rewr_functions::rewr_67_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 66 + 0] = rewr_functions::rewr_66_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 66 + 0] = rewr_functions::rewr_66_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 65 + 0] = rewr_functions::rewr_65_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 65 + 0] = rewr_functions::rewr_65_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 64 + 0] = rewr_functions::rewr_64_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 64 + 0] = rewr_functions::rewr_64_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 63 + 0] = rewr_functions::rewr_63_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 63 + 0] = rewr_functions::rewr_63_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 63 + 2] = rewr_functions::rewr_63_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 63 + 2] = rewr_functions::rewr_63_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 62 + 0] = rewr_functions::rewr_62_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 62 + 0] = rewr_functions::rewr_62_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 61 + 0] = rewr_functions::rewr_61_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 61 + 0] = rewr_functions::rewr_61_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 61 + 2] = rewr_functions::rewr_61_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 61 + 2] = rewr_functions::rewr_61_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 60 + 0] = rewr_functions::rewr_60_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 60 + 0] = rewr_functions::rewr_60_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 60 + 3] = rewr_functions::rewr_60_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 60 + 3] = rewr_functions::rewr_60_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 59 + 0] = rewr_functions::rewr_59_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 59 + 0] = rewr_functions::rewr_59_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 58 + 0] = rewr_functions::rewr_58_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 58 + 0] = rewr_functions::rewr_58_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 57 + 0] = rewr_functions::rewr_57_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 57 + 0] = rewr_functions::rewr_57_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 56 + 0] = rewr_functions::rewr_56_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 56 + 0] = rewr_functions::rewr_56_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 56 + 3] = rewr_functions::rewr_56_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 56 + 3] = rewr_functions::rewr_56_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 55 + 0] = rewr_functions::rewr_55_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 55 + 0] = rewr_functions::rewr_55_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 54 + 0] = rewr_functions::rewr_54_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 54 + 0] = rewr_functions::rewr_54_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 54 + 2] = rewr_functions::rewr_54_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 54 + 2] = rewr_functions::rewr_54_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 53 + 0] = rewr_functions::rewr_53_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 53 + 0] = rewr_functions::rewr_53_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 52 + 0] = rewr_functions::rewr_52_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 52 + 0] = rewr_functions::rewr_52_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 52 + 2] = rewr_functions::rewr_52_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 52 + 2] = rewr_functions::rewr_52_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 51 + 0] = rewr_functions::rewr_51_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 51 + 0] = rewr_functions::rewr_51_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 51 + 2] = rewr_functions::rewr_51_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 51 + 2] = rewr_functions::rewr_51_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 50 + 0] = rewr_functions::rewr_50_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 50 + 0] = rewr_functions::rewr_50_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 50 + 1] = rewr_functions::rewr_50_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 50 + 1] = rewr_functions::rewr_50_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 49 + 0] = rewr_functions::rewr_49_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 49 + 0] = rewr_functions::rewr_49_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 49 + 1] = rewr_functions::rewr_49_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 49 + 1] = rewr_functions::rewr_49_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 48 + 0] = rewr_functions::rewr_48_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 48 + 0] = rewr_functions::rewr_48_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 48 + 2] = rewr_functions::rewr_48_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 48 + 2] = rewr_functions::rewr_48_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 47 + 0] = rewr_functions::rewr_47_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 47 + 0] = rewr_functions::rewr_47_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 47 + 1] = rewr_functions::rewr_47_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 47 + 1] = rewr_functions::rewr_47_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 46 + 0] = rewr_functions::rewr_46_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 46 + 0] = rewr_functions::rewr_46_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 46 + 2] = rewr_functions::rewr_46_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 46 + 2] = rewr_functions::rewr_46_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 45 + 0] = rewr_functions::rewr_45_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 45 + 0] = rewr_functions::rewr_45_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 45 + 2] = rewr_functions::rewr_45_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 45 + 2] = rewr_functions::rewr_45_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 44 + 0] = rewr_functions::rewr_44_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 44 + 0] = rewr_functions::rewr_44_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 44 + 1] = rewr_functions::rewr_44_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 44 + 1] = rewr_functions::rewr_44_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 308 + 0] = rewr_functions::rewr_308_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 308 + 0] = rewr_functions::rewr_308_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 308 + 2] = rewr_functions::rewr_308_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 308 + 2] = rewr_functions::rewr_308_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 306 + 0] = rewr_functions::rewr_306_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 306 + 0] = rewr_functions::rewr_306_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 306 + 2] = rewr_functions::rewr_306_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 306 + 2] = rewr_functions::rewr_306_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 305 + 0] = rewr_functions::rewr_305_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 305 + 0] = rewr_functions::rewr_305_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 305 + 2] = rewr_functions::rewr_305_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 305 + 2] = rewr_functions::rewr_305_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 304 + 0] = rewr_functions::rewr_304_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 304 + 0] = rewr_functions::rewr_304_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 304 + 2] = rewr_functions::rewr_304_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 304 + 2] = rewr_functions::rewr_304_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 303 + 0] = rewr_functions::rewr_303_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 303 + 0] = rewr_functions::rewr_303_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 303 + 2] = rewr_functions::rewr_303_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 303 + 2] = rewr_functions::rewr_303_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 291 + 0] = rewr_functions::rewr_291_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 291 + 0] = rewr_functions::rewr_291_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 291 + 2] = rewr_functions::rewr_291_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 291 + 2] = rewr_functions::rewr_291_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 290 + 0] = rewr_functions::rewr_290_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 290 + 0] = rewr_functions::rewr_290_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 290 + 2] = rewr_functions::rewr_290_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 290 + 2] = rewr_functions::rewr_290_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 284 + 0] = rewr_functions::rewr_284_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 284 + 0] = rewr_functions::rewr_284_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 284 + 2] = rewr_functions::rewr_284_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 284 + 2] = rewr_functions::rewr_284_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 280 + 0] = rewr_functions::rewr_280_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 280 + 0] = rewr_functions::rewr_280_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 280 + 2] = rewr_functions::rewr_280_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 280 + 2] = rewr_functions::rewr_280_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 279 + 0] = rewr_functions::rewr_279_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 279 + 0] = rewr_functions::rewr_279_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 279 + 2] = rewr_functions::rewr_279_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 279 + 2] = rewr_functions::rewr_279_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 274 + 0] = rewr_functions::rewr_274_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 274 + 0] = rewr_functions::rewr_274_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 274 + 2] = rewr_functions::rewr_274_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 274 + 2] = rewr_functions::rewr_274_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 270 + 0] = rewr_functions::rewr_270_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 270 + 0] = rewr_functions::rewr_270_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 270 + 2] = rewr_functions::rewr_270_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 270 + 2] = rewr_functions::rewr_270_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 268 + 0] = rewr_functions::rewr_268_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 268 + 0] = rewr_functions::rewr_268_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 268 + 2] = rewr_functions::rewr_268_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 268 + 2] = rewr_functions::rewr_268_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 267 + 0] = rewr_functions::rewr_267_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 267 + 0] = rewr_functions::rewr_267_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 267 + 2] = rewr_functions::rewr_267_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 267 + 2] = rewr_functions::rewr_267_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 261 + 0] = rewr_functions::rewr_261_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 261 + 0] = rewr_functions::rewr_261_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 261 + 2] = rewr_functions::rewr_261_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 261 + 2] = rewr_functions::rewr_261_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 260 + 0] = rewr_functions::rewr_260_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 260 + 0] = rewr_functions::rewr_260_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 260 + 2] = rewr_functions::rewr_260_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 260 + 2] = rewr_functions::rewr_260_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 254 + 0] = rewr_functions::rewr_254_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 254 + 0] = rewr_functions::rewr_254_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 254 + 2] = rewr_functions::rewr_254_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 254 + 2] = rewr_functions::rewr_254_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 253 + 0] = rewr_functions::rewr_253_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 253 + 0] = rewr_functions::rewr_253_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 253 + 2] = rewr_functions::rewr_253_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 253 + 2] = rewr_functions::rewr_253_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 247 + 0] = rewr_functions::rewr_247_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 247 + 0] = rewr_functions::rewr_247_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 247 + 2] = rewr_functions::rewr_247_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 247 + 2] = rewr_functions::rewr_247_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 246 + 0] = rewr_functions::rewr_246_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 246 + 0] = rewr_functions::rewr_246_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 246 + 2] = rewr_functions::rewr_246_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 246 + 2] = rewr_functions::rewr_246_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 242 + 0] = rewr_functions::rewr_242_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 242 + 0] = rewr_functions::rewr_242_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 242 + 2] = rewr_functions::rewr_242_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 242 + 2] = rewr_functions::rewr_242_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 241 + 0] = rewr_functions::rewr_241_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 241 + 0] = rewr_functions::rewr_241_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 241 + 2] = rewr_functions::rewr_241_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 241 + 2] = rewr_functions::rewr_241_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 236 + 0] = rewr_functions::rewr_236_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 236 + 0] = rewr_functions::rewr_236_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 236 + 2] = rewr_functions::rewr_236_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 236 + 2] = rewr_functions::rewr_236_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 235 + 0] = rewr_functions::rewr_235_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 235 + 0] = rewr_functions::rewr_235_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 235 + 2] = rewr_functions::rewr_235_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 235 + 2] = rewr_functions::rewr_235_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 234 + 0] = rewr_functions::rewr_234_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 234 + 0] = rewr_functions::rewr_234_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 234 + 2] = rewr_functions::rewr_234_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 234 + 2] = rewr_functions::rewr_234_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 233 + 0] = rewr_functions::rewr_233_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 233 + 0] = rewr_functions::rewr_233_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 233 + 2] = rewr_functions::rewr_233_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 233 + 2] = rewr_functions::rewr_233_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 232 + 0] = rewr_functions::rewr_232_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 232 + 0] = rewr_functions::rewr_232_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 227 + 0] = rewr_functions::rewr_227_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 227 + 0] = rewr_functions::rewr_227_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 227 + 1] = rewr_functions::rewr_227_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 227 + 1] = rewr_functions::rewr_227_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 220 + 0] = rewr_functions::rewr_220_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 220 + 0] = rewr_functions::rewr_220_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 220 + 2] = rewr_functions::rewr_220_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 220 + 2] = rewr_functions::rewr_220_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 214 + 0] = rewr_functions::rewr_214_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 214 + 0] = rewr_functions::rewr_214_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 214 + 2] = rewr_functions::rewr_214_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 214 + 2] = rewr_functions::rewr_214_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 213 + 0] = rewr_functions::rewr_213_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 213 + 0] = rewr_functions::rewr_213_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 213 + 2] = rewr_functions::rewr_213_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 213 + 2] = rewr_functions::rewr_213_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 437 + 0] = rewr_functions::rewr_437_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 437 + 0] = rewr_functions::rewr_437_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 437 + 2] = rewr_functions::rewr_437_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 437 + 2] = rewr_functions::rewr_437_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 436 + 0] = rewr_functions::rewr_436_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 436 + 0] = rewr_functions::rewr_436_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 436 + 2] = rewr_functions::rewr_436_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 436 + 2] = rewr_functions::rewr_436_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 386 + 0] = rewr_functions::rewr_386_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 386 + 0] = rewr_functions::rewr_386_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 386 + 2] = rewr_functions::rewr_386_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 386 + 2] = rewr_functions::rewr_386_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 385 + 0] = rewr_functions::rewr_385_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 385 + 0] = rewr_functions::rewr_385_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 385 + 2] = rewr_functions::rewr_385_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 385 + 2] = rewr_functions::rewr_385_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 378 + 0] = rewr_functions::rewr_378_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 378 + 0] = rewr_functions::rewr_378_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 378 + 2] = rewr_functions::rewr_378_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 378 + 2] = rewr_functions::rewr_378_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 374 + 0] = rewr_functions::rewr_374_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 374 + 0] = rewr_functions::rewr_374_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 374 + 2] = rewr_functions::rewr_374_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 374 + 2] = rewr_functions::rewr_374_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 361 + 0] = rewr_functions::rewr_361_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 361 + 0] = rewr_functions::rewr_361_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 361 + 1] = rewr_functions::rewr_361_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 361 + 1] = rewr_functions::rewr_361_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 349 + 0] = rewr_functions::rewr_349_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 349 + 0] = rewr_functions::rewr_349_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 349 + 1] = rewr_functions::rewr_349_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 349 + 1] = rewr_functions::rewr_349_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 348 + 0] = rewr_functions::rewr_348_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 348 + 0] = rewr_functions::rewr_348_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 348 + 1] = rewr_functions::rewr_348_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 348 + 1] = rewr_functions::rewr_348_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 346 + 0] = rewr_functions::rewr_346_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 346 + 0] = rewr_functions::rewr_346_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 346 + 2] = rewr_functions::rewr_346_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 346 + 2] = rewr_functions::rewr_346_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 343 + 0] = rewr_functions::rewr_343_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 343 + 0] = rewr_functions::rewr_343_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 343 + 2] = rewr_functions::rewr_343_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 343 + 2] = rewr_functions::rewr_343_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 341 + 0] = rewr_functions::rewr_341_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 341 + 0] = rewr_functions::rewr_341_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 341 + 2] = rewr_functions::rewr_341_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 341 + 2] = rewr_functions::rewr_341_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 329 + 0] = rewr_functions::rewr_329_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 329 + 0] = rewr_functions::rewr_329_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 329 + 2] = rewr_functions::rewr_329_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 329 + 2] = rewr_functions::rewr_329_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 322 + 0] = rewr_functions::rewr_322_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 322 + 0] = rewr_functions::rewr_322_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 322 + 3] = rewr_functions::rewr_322_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 322 + 3] = rewr_functions::rewr_322_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 318 + 0] = rewr_functions::rewr_318_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 318 + 0] = rewr_functions::rewr_318_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 318 + 2] = rewr_functions::rewr_318_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 318 + 2] = rewr_functions::rewr_318_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 317 + 0] = rewr_functions::rewr_317_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 317 + 0] = rewr_functions::rewr_317_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 317 + 1] = rewr_functions::rewr_317_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 317 + 1] = rewr_functions::rewr_317_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 311 + 0] = rewr_functions::rewr_311_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 311 + 0] = rewr_functions::rewr_311_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 311 + 1] = rewr_functions::rewr_311_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 311 + 1] = rewr_functions::rewr_311_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 309 + 0] = rewr_functions::rewr_309_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 309 + 0] = rewr_functions::rewr_309_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 309 + 2] = rewr_functions::rewr_309_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 309 + 2] = rewr_functions::rewr_309_2_term_arg_in_normal_form;
}
