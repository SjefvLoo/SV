#define INDEX_BOUND 1083
#define ARITY_BOUND 16
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

static application make_term_with_many_arguments(const data_expression& head, const data_expression& arg1, const data_expression& arg2, const data_expression& arg3, const data_expression& arg4, const data_expression& arg5, const data_expression& arg6, const data_expression& arg7, const data_expression& arg8, const data_expression& arg9, const data_expression& arg10)
{
  atermpp::detail::_aterm* buffer[10];
  buffer[0] = atermpp::detail::address(arg1);
  buffer[1] = atermpp::detail::address(arg2);
  buffer[2] = atermpp::detail::address(arg3);
  buffer[3] = atermpp::detail::address(arg4);
  buffer[4] = atermpp::detail::address(arg5);
  buffer[5] = atermpp::detail::address(arg6);
  buffer[6] = atermpp::detail::address(arg7);
  buffer[7] = atermpp::detail::address(arg8);
  buffer[8] = atermpp::detail::address(arg9);
  buffer[9] = atermpp::detail::address(arg10);
  return application(head, reinterpret_cast<data_expression*>(buffer), reinterpret_cast<data_expression*>(buffer) + 10);
}

static application make_term_with_many_arguments(const data_expression& head, const data_expression& arg1, const data_expression& arg2, const data_expression& arg3, const data_expression& arg4, const data_expression& arg5, const data_expression& arg6, const data_expression& arg7, const data_expression& arg8, const data_expression& arg9, const data_expression& arg10, const data_expression& arg11, const data_expression& arg12)
{
  atermpp::detail::_aterm* buffer[12];
  buffer[0] = atermpp::detail::address(arg1);
  buffer[1] = atermpp::detail::address(arg2);
  buffer[2] = atermpp::detail::address(arg3);
  buffer[3] = atermpp::detail::address(arg4);
  buffer[4] = atermpp::detail::address(arg5);
  buffer[5] = atermpp::detail::address(arg6);
  buffer[6] = atermpp::detail::address(arg7);
  buffer[7] = atermpp::detail::address(arg8);
  buffer[8] = atermpp::detail::address(arg9);
  buffer[9] = atermpp::detail::address(arg10);
  buffer[10] = atermpp::detail::address(arg11);
  buffer[11] = atermpp::detail::address(arg12);
  return application(head, reinterpret_cast<data_expression*>(buffer), reinterpret_cast<data_expression*>(buffer) + 12);
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
  // We're declaring static members in a struct rather than simple functions in
  // the global scope, so that we don't have to worry about forward declarations.
  // [3] C4_3: Enum4 # Bool # Bool # Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_3_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@R(@var_0))))))), @@F(e0_4, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@R(@var_3))))))), @@F(e2_4, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@R(@var_1))))))), @@F(e1_4, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@R(@var_2))))))), @@X))))
    {
      if (uint_address(arg0) == 0x55e3f2bc5f00) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5e70) // F1
        {
          const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
          return var_3; // R1 @var_3
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2bc5ed0) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2bc5ea0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc6110), arg0, arg1, arg2, arg3, arg4);
  }

  static inline data_expression rewr_3_5_term(const application& t) { return rewr_3_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_3_5_term_arg_in_normal_form(const application& t) { return rewr_3_5(t[0], t[1], t[2], t[3], t[4]); }


  // [3] C4_3: Enum4 # Bool # Bool # Bool # Bool -> Bool
  static inline const data_expression& rewr_3_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cda3a0);
  }

  static inline data_expression rewr_3_0_term(const application&) { return rewr_3_0(); }

  static inline data_expression rewr_3_0_term_arg_in_normal_form(const application&) { return rewr_3_0(); }


  // [2] C4_2: Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_2_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@R(@var_0))))))), @@F(e0_4, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@R(@var_3))))))), @@F(e2_4, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@R(@var_1))))))), @@F(e1_4, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@R(@var_2))))))), @@X))))
    {
      if (uint_address(arg0) == 0x55e3f2bc5f00) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5e70) // F1
        {
          const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
          return var_3; // R1 @var_3
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2bc5ed0) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2bc5ea0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc6140), arg0, arg1, arg2, arg3, arg4);
  }

  static inline data_expression rewr_2_5_term(const application& t) { return rewr_2_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_2_5_term_arg_in_normal_form(const application& t) { return rewr_2_5(t[0], t[1], t[2], t[3], t[4]); }


  // [2] C4_2: Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2
  static inline const data_expression& rewr_2_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c49710);
  }

  static inline data_expression rewr_2_0_term(const application&) { return rewr_2_0(); }

  static inline data_expression rewr_2_0_term_arg_in_normal_form(const application&) { return rewr_2_0(); }


  // [1] C4_1: Enum4 # Position # Position # Position # Position -> Position
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_1_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@R(@var_0))))))), @@F(e0_4, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@R(@var_3))))))), @@F(e2_4, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@R(@var_1))))))), @@F(e1_4, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@R(@var_2))))))), @@X))))
    {
      if (uint_address(arg0) == 0x55e3f2bc5f00) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5e70) // F1
        {
          const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
          return var_3; // R1 @var_3
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2bc5ed0) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2bc5ea0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc6170), arg0, arg1, arg2, arg3, arg4);
  }

  static inline data_expression rewr_1_5_term(const application& t) { return rewr_1_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_1_5_term_arg_in_normal_form(const application& t) { return rewr_1_5(t[0], t[1], t[2], t[3], t[4]); }


  // [1] C4_1: Enum4 # Position # Position # Position # Position -> Position
  static inline const data_expression& rewr_1_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd01c0);
  }

  static inline data_expression rewr_1_0_term(const application&) { return rewr_1_0(); }

  static inline data_expression rewr_1_0_term_arg_in_normal_form(const application&) { return rewr_1_0(); }


  // [0] C4_: Enum4 # Robot # Robot # Robot # Robot -> Robot
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_0_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@D(@@N(@@S(@var_0, @@N(@@N(@@N(@@R(@var_0))))))), @@F(e0_4, @@D(@@N(@@N(@@N(@@N(@@S(@var_3, @@R(@var_3))))))), @@F(e2_4, @@D(@@N(@@N(@@S(@var_1, @@N(@@N(@@R(@var_1))))))), @@F(e1_4, @@D(@@N(@@N(@@N(@@S(@var_2, @@N(@@R(@var_2))))))), @@X))))
    {
      if (uint_address(arg0) == 0x55e3f2bc5f00) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5e70) // F1
        {
          const data_expression& var_3 = local_rewrite(arg_not_nf4); // S1
          return var_3; // R1 @var_3
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2bc5ed0) // F1
          {
            const data_expression& var_1 = local_rewrite(arg_not_nf2); // S1
            return var_1; // R1 @var_1
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2bc5ea0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc61a0), arg0, arg1, arg2, arg3, arg4);
  }

  static inline data_expression rewr_0_5_term(const application& t) { return rewr_0_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_0_5_term_arg_in_normal_form(const application& t) { return rewr_0_5(t[0], t[1], t[2], t[3], t[4]); }


  // [0] C4_: Enum4 # Robot # Robot # Robot # Robot -> Robot
  static inline const data_expression& rewr_0_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c31d00);
  }

  static inline data_expression rewr_0_0_term(const application&) { return rewr_0_0(); }

  static inline data_expression rewr_0_0_term_arg_in_normal_form(const application&) { return rewr_0_0(); }


  // [977] @equal_arguments: Stack4 # Stack4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_977_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(push4, @@S(@var_0, @@N(@@S(@var_1, @@N(@@S(@var_2, @@N(@@S(@var_3, @@N(@@S(@var_4, @@D(@@N(@@F(push4, @@S(@var_5, @@N(@@S(@var_6, @@N(@@S(@var_7, @@N(@@S(@var_8, @@N(@@S(@var_9, @@R(@var_0 == @var_5 && @var_1 == @var_6 && @var_2 == @var_7 && @var_3 == @var_8 && @var_4 == @var_9)))))))))), @@X)))))))))))), @@F(emptystack4, @@D(@@N(@@F(emptystack4, @@R(true), @@X))), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f260) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2c2f260) // F1
        {
          const data_expression& var_5 = down_cast<data_expression>(arg1[1]); // S2
          const data_expression& var_6 = down_cast<data_expression>(arg1[2]); // S2
          const data_expression& var_7 = down_cast<data_expression>(arg1[3]); // S2
          const data_expression& var_8 = down_cast<data_expression>(arg1[4]); // S2
          const data_expression& var_9 = down_cast<data_expression>(arg1[5]); // S2
          return rewr_16_2(rewr_25_2(var_0, var_5), delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_227_2<data_expression, data_expression>>>>(delayed_rewr_71_2<data_expression, data_expression>(var_1, var_6), delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_227_2<data_expression, data_expression>>>(delayed_rewr_174_2<data_expression, data_expression>(var_2, var_7), delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_227_2<data_expression, data_expression>>(delayed_rewr_182_2<data_expression, data_expression>(var_3, var_8), delayed_rewr_227_2<data_expression, data_expression>(var_4, var_9))))); // R1 @var_0 == @var_5 && @var_1 == @var_6 && @var_2 == @var_7 && @var_3 == @var_8 && @var_4 == @var_9
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2f200) // F1
        {
          if (uint_address(arg1) == 0x55e3f2c2f200) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c8ec10), arg0, arg1);
  }

  static inline data_expression rewr_977_2_term(const application& t) { return rewr_977_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_977_2_term_arg_in_normal_form(const application& t) { return rewr_977_2(t[0], t[1]); }


  // [16] &&: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_16_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_16_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_16_2(m_t0, m_t1);
      }
  };
  
  // [227] ==: Stack4 # Stack4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_227_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_227_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_227_2(m_t0, m_t1);
      }
  };
  
  // [182] ==: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_182_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_182_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_182_2(m_t0, m_t1);
      }
  };
  
  // [174] ==: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_174_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_174_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_174_2(m_t0, m_t1);
      }
  };
  
  // [71] ==: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_71_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_71_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_71_2(m_t0, m_t1);
      }
  };
  
  // [977] @equal_arguments: Stack4 # Stack4 -> Bool
  static inline const data_expression& rewr_977_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2beb130);
  }

  static inline data_expression rewr_977_0_term(const application&) { return rewr_977_0(); }

  static inline data_expression rewr_977_0_term_arg_in_normal_form(const application&) { return rewr_977_0(); }


  // [976] @to_pos: Stack4 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_976_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push4, @@N(@@N(@@N(@@N(@@R(1))))), @@F(emptystack4, @@R(2), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f260) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2f200) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c8ec40), arg0);
  }

  static inline data_expression rewr_976_1_term(const application& t) { return rewr_976_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_976_1_term_arg_in_normal_form(const application& t) { return rewr_976_1(t[0]); }


  // [976] @to_pos: Stack4 -> Pos
  static inline const data_expression& rewr_976_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bebc50);
  }

  static inline data_expression rewr_976_0_term(const application&) { return rewr_976_0(); }

  static inline data_expression rewr_976_0_term_arg_in_normal_form(const application&) { return rewr_976_0(); }


  // [85] pop4: Stack4 -> Stack4
  template < class DATA_EXPR0>
  static inline data_expression rewr_85_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push4, @@N(@@N(@@N(@@N(@@S(@var_4, @@R(@var_4)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f260) // F1
      {
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        return var_4; // R1 @var_4
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f290), arg0);
  }

  static inline data_expression rewr_85_1_term(const application& t) { return rewr_85_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_85_1_term_arg_in_normal_form(const application& t) { return rewr_85_1(t[0]); }


  // [85] pop4: Stack4 -> Stack4
  static inline const data_expression& rewr_85_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c213c0);
  }

  static inline data_expression rewr_85_0_term(const application&) { return rewr_85_0(); }

  static inline data_expression rewr_85_0_term_arg_in_normal_form(const application&) { return rewr_85_0(); }


  // [82] geta14: Stack4 -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_82_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push4, @@N(@@N(@@N(@@S(@var_3, @@N(@@R(@var_3)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f260) // F1
      {
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        return var_3; // R1 @var_3
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f320), arg0);
  }

  static inline data_expression rewr_82_1_term(const application& t) { return rewr_82_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_82_1_term_arg_in_normal_form(const application& t) { return rewr_82_1(t[0]); }


  // [82] geta14: Stack4 -> Bool
  static inline const data_expression& rewr_82_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfd3f0);
  }

  static inline data_expression rewr_82_0_term(const application&) { return rewr_82_0(); }

  static inline data_expression rewr_82_0_term_arg_in_normal_form(const application&) { return rewr_82_0(); }


  // [80] geta13: Stack4 -> Recipe
  template < class DATA_EXPR0>
  static inline data_expression rewr_80_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push4, @@N(@@N(@@S(@var_2, @@N(@@N(@@R(@var_2)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f260) // F1
      {
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        return var_2; // R1 @var_2
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f380), arg0);
  }

  static inline data_expression rewr_80_1_term(const application& t) { return rewr_80_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_80_1_term_arg_in_normal_form(const application& t) { return rewr_80_1(t[0]); }


  // [80] geta13: Stack4 -> Recipe
  static inline const data_expression& rewr_80_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf38d0);
  }

  static inline data_expression rewr_80_0_term(const application&) { return rewr_80_0(); }

  static inline data_expression rewr_80_0_term_arg_in_normal_form(const application&) { return rewr_80_0(); }


  // [78] geta12: Stack4 -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_78_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push4, @@N(@@S(@var_1, @@N(@@N(@@N(@@R(@var_1)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f260) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f3e0), arg0);
  }

  static inline data_expression rewr_78_1_term(const application& t) { return rewr_78_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_78_1_term_arg_in_normal_form(const application& t) { return rewr_78_1(t[0]); }


  // [78] geta12: Stack4 -> Nat
  static inline const data_expression& rewr_78_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2be96f0);
  }

  static inline data_expression rewr_78_0_term(const application&) { return rewr_78_0(); }

  static inline data_expression rewr_78_0_term_arg_in_normal_form(const application&) { return rewr_78_0(); }


  // [74] getstate4: Stack4 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_74_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push4, @@S(@var_0, @@N(@@N(@@N(@@N(@@R(@var_0)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f260) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f530), arg0);
  }

  static inline data_expression rewr_74_1_term(const application& t) { return rewr_74_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_74_1_term_arg_in_normal_form(const application& t) { return rewr_74_1(t[0]); }


  // [74] getstate4: Stack4 -> Pos
  static inline const data_expression& rewr_74_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c48bc0);
  }

  static inline data_expression rewr_74_0_term(const application&) { return rewr_74_0(); }

  static inline data_expression rewr_74_0_term_arg_in_normal_form(const application&) { return rewr_74_0(); }


  // [953] @equal_arguments: Stack3 # Stack3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_953_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(push3, @@S(@var_0, @@N(@@S(@var_1, @@N(@@S(@var_2, @@N(@@S(@var_3, @@N(@@S(@var_4, @@N(@@S(@var_5, @@N(@@S(@var_6, @@N(@@S(@var_7, @@N(@@S(@var_8, @@N(@@S(@var_9, @@N(@@S(@var_10, @@N(@@S(@var_11, @@D(@@N(@@F(push3, @@S(@var_12, @@N(@@S(@var_13, @@N(@@S(@var_14, @@N(@@S(@var_15, @@N(@@S(@var_16, @@N(@@S(@var_17, @@N(@@S(@var_18, @@N(@@S(@var_19, @@N(@@S(@var_20, @@N(@@S(@var_21, @@N(@@S(@var_22, @@N(@@S(@var_23, @@R(@var_0 == @var_12 && @var_1 == @var_13 && @var_2 == @var_14 && @var_3 == @var_15 && @var_4 == @var_16 && @var_5 == @var_17 && @var_6 == @var_18 && @var_7 == @var_19 && @var_8 == @var_20 && @var_9 == @var_21 && @var_10 == @var_22 && @var_11 == @var_23)))))))))))))))))))))))), @@X)))))))))))))))))))))))))), @@F(emptystack3, @@D(@@N(@@F(emptystack3, @@R(true), @@X))), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        const data_expression& var_5 = down_cast<data_expression>(arg0[6]); // S2
        const data_expression& var_6 = down_cast<data_expression>(arg0[7]); // S2
        const data_expression& var_7 = down_cast<data_expression>(arg0[8]); // S2
        const data_expression& var_8 = down_cast<data_expression>(arg0[9]); // S2
        const data_expression& var_9 = down_cast<data_expression>(arg0[10]); // S2
        const data_expression& var_10 = down_cast<data_expression>(arg0[11]); // S2
        const data_expression& var_11 = down_cast<data_expression>(arg0[12]); // S2
        if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2c2f860) // F1
        {
          const data_expression& var_12 = down_cast<data_expression>(arg1[1]); // S2
          const data_expression& var_13 = down_cast<data_expression>(arg1[2]); // S2
          const data_expression& var_14 = down_cast<data_expression>(arg1[3]); // S2
          const data_expression& var_15 = down_cast<data_expression>(arg1[4]); // S2
          const data_expression& var_16 = down_cast<data_expression>(arg1[5]); // S2
          const data_expression& var_17 = down_cast<data_expression>(arg1[6]); // S2
          const data_expression& var_18 = down_cast<data_expression>(arg1[7]); // S2
          const data_expression& var_19 = down_cast<data_expression>(arg1[8]); // S2
          const data_expression& var_20 = down_cast<data_expression>(arg1[9]); // S2
          const data_expression& var_21 = down_cast<data_expression>(arg1[10]); // S2
          const data_expression& var_22 = down_cast<data_expression>(arg1[11]); // S2
          const data_expression& var_23 = down_cast<data_expression>(arg1[12]); // S2
          return rewr_16_2(rewr_25_2(var_0, var_12), delayed_rewr_16_2<delayed_rewr_17_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_17_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>>>>>>>>>(delayed_rewr_17_2<data_expression, data_expression>(var_1, var_13), delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_17_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>>>>>>>>(delayed_rewr_19_2<data_expression, data_expression>(var_2, var_14), delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_17_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>>>>>>>(delayed_rewr_19_2<data_expression, data_expression>(var_3, var_15), delayed_rewr_16_2<delayed_rewr_17_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>>>>>>(delayed_rewr_17_2<data_expression, data_expression>(var_4, var_16), delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>>>>>(delayed_rewr_19_2<data_expression, data_expression>(var_5, var_17), delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>>>>(delayed_rewr_19_2<data_expression, data_expression>(var_6, var_18), delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>>>(delayed_rewr_174_2<data_expression, data_expression>(var_7, var_19), delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>>(delayed_rewr_182_2<data_expression, data_expression>(var_8, var_20), delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>>(delayed_rewr_182_2<data_expression, data_expression>(var_9, var_21), delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_190_2<data_expression, data_expression>>(delayed_rewr_182_2<data_expression, data_expression>(var_10, var_22), delayed_rewr_190_2<data_expression, data_expression>(var_11, var_23)))))))))))); // R1 @var_0 == @var_12 && @var_1 == @var_13 && @var_2 == @var_14 && @var_3 == @var_15 && @var_4 == @var_16 && @var_5 == @var_17 && @var_6 == @var_18 && @var_7 == @var_19 && @var_8 == @var_20 && @var_9 == @var_21 && @var_10 == @var_22 && @var_11 == @var_23
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2f7a0) // F1
        {
          if (uint_address(arg1) == 0x55e3f2c2f7a0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c908c0), arg0, arg1);
  }

  static inline data_expression rewr_953_2_term(const application& t) { return rewr_953_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_953_2_term_arg_in_normal_form(const application& t) { return rewr_953_2(t[0], t[1]); }


  // [190] ==: Stack3 # Stack3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_190_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_190_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_190_2(m_t0, m_t1);
      }
  };
  
  // [19] ==: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_19_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_19_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_19_2(m_t0, m_t1);
      }
  };
  
  // [17] ==: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_17_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_17_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_17_2(m_t0, m_t1);
      }
  };
  
  // [953] @equal_arguments: Stack3 # Stack3 -> Bool
  static inline const data_expression& rewr_953_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf5870);
  }

  static inline data_expression rewr_953_0_term(const application&) { return rewr_953_0(); }

  static inline data_expression rewr_953_0_term_arg_in_normal_form(const application&) { return rewr_953_0(); }


  // [952] @to_pos: Stack3 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_952_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(1)))))))))))), @@F(emptystack3, @@R(2), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2f7a0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c908f0), arg0);
  }

  static inline data_expression rewr_952_1_term(const application& t) { return rewr_952_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_952_1_term_arg_in_normal_form(const application& t) { return rewr_952_1(t[0]); }


  // [952] @to_pos: Stack3 -> Pos
  static inline const data_expression& rewr_952_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf49a0);
  }

  static inline data_expression rewr_952_0_term(const application&) { return rewr_952_0(); }

  static inline data_expression rewr_952_0_term_arg_in_normal_form(const application&) { return rewr_952_0(); }


  // [60] pop3: Stack3 -> Stack3
  template < class DATA_EXPR0>
  static inline data_expression rewr_60_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_11, @@R(@var_11))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_11 = down_cast<data_expression>(arg0[12]); // S2
        return var_11; // R1 @var_11
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0ce0), arg0);
  }

  static inline data_expression rewr_60_1_term(const application& t) { return rewr_60_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_60_1_term_arg_in_normal_form(const application& t) { return rewr_60_1(t[0]); }


  // [60] pop3: Stack3 -> Stack3
  static inline const data_expression& rewr_60_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bed300);
  }

  static inline data_expression rewr_60_0_term(const application&) { return rewr_60_0(); }

  static inline data_expression rewr_60_0_term_arg_in_normal_form(const application&) { return rewr_60_0(); }


  // [65] getcalibrate: Stack3 -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_65_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_10, @@N(@@R(@var_10))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_10 = down_cast<data_expression>(arg0[11]); // S2
        return var_10; // R1 @var_10
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f920), arg0);
  }

  static inline data_expression rewr_65_1_term(const application& t) { return rewr_65_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_65_1_term_arg_in_normal_form(const application& t) { return rewr_65_1(t[0]); }


  // [65] getcalibrate: Stack3 -> Bool
  static inline const data_expression& rewr_65_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf92a0);
  }

  static inline data_expression rewr_65_0_term(const application&) { return rewr_65_0(); }

  static inline data_expression rewr_65_0_term_arg_in_normal_form(const application&) { return rewr_65_0(); }


  // [69] getmeasEmpty: Stack3 -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_69_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_9, @@N(@@N(@@R(@var_9))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_9 = down_cast<data_expression>(arg0[10]); // S2
        return var_9; // R1 @var_9
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f7d0), arg0);
  }

  static inline data_expression rewr_69_1_term(const application& t) { return rewr_69_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_69_1_term_arg_in_normal_form(const application& t) { return rewr_69_1(t[0]); }


  // [69] getmeasEmpty: Stack3 -> Bool
  static inline const data_expression& rewr_69_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bd9a20);
  }

  static inline data_expression rewr_69_0_term(const application&) { return rewr_69_0(); }

  static inline data_expression rewr_69_0_term_arg_in_normal_form(const application&) { return rewr_69_0(); }


  // [68] getchuckAAtProj: Stack3 -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_68_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_8, @@N(@@N(@@N(@@R(@var_8))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_8 = down_cast<data_expression>(arg0[9]); // S2
        return var_8; // R1 @var_8
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f800), arg0);
  }

  static inline data_expression rewr_68_1_term(const application& t) { return rewr_68_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_68_1_term_arg_in_normal_form(const application& t) { return rewr_68_1(t[0]); }


  // [68] getchuckAAtProj: Stack3 -> Bool
  static inline const data_expression& rewr_68_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bd9a50);
  }

  static inline data_expression rewr_68_0_term(const application&) { return rewr_68_0(); }

  static inline data_expression rewr_68_0_term_arg_in_normal_form(const application&) { return rewr_68_0(); }


  // [67] getconfig: Stack3 -> Recipe
  template < class DATA_EXPR0>
  static inline data_expression rewr_67_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_7, @@N(@@N(@@N(@@N(@@R(@var_7))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_7 = down_cast<data_expression>(arg0[8]); // S2
        return var_7; // R1 @var_7
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f830), arg0);
  }

  static inline data_expression rewr_67_1_term(const application& t) { return rewr_67_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_67_1_term_arg_in_normal_form(const application& t) { return rewr_67_1(t[0]); }


  // [67] getconfig: Stack3 -> Recipe
  static inline const data_expression& rewr_67_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bd9a80);
  }

  static inline data_expression rewr_67_0_term(const application&) { return rewr_67_0(); }

  static inline data_expression rewr_67_0_term_arg_in_normal_form(const application&) { return rewr_67_0(); }


  // [98] geta11: Stack3 -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_98_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_6, @@N(@@N(@@N(@@N(@@N(@@R(@var_6))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_6 = down_cast<data_expression>(arg0[7]); // S2
        return var_6; // R1 @var_6
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2e6f0), arg0);
  }

  static inline data_expression rewr_98_1_term(const application& t) { return rewr_98_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_98_1_term_arg_in_normal_form(const application& t) { return rewr_98_1(t[0]); }


  // [98] geta11: Stack3 -> Position
  static inline const data_expression& rewr_98_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bd9ab0);
  }

  static inline data_expression rewr_98_0_term(const application&) { return rewr_98_0(); }

  static inline data_expression rewr_98_0_term_arg_in_normal_form(const application&) { return rewr_98_0(); }


  // [97] geta10: Stack3 -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_97_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@N(@@S(@var_5, @@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_5))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_5 = down_cast<data_expression>(arg0[6]); // S2
        return var_5; // R1 @var_5
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2e780), arg0);
  }

  static inline data_expression rewr_97_1_term(const application& t) { return rewr_97_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_97_1_term_arg_in_normal_form(const application& t) { return rewr_97_1(t[0]); }


  // [97] geta10: Stack3 -> Position
  static inline const data_expression& rewr_97_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bd9ae0);
  }

  static inline data_expression rewr_97_0_term(const application&) { return rewr_97_0(); }

  static inline data_expression rewr_97_0_term_arg_in_normal_form(const application&) { return rewr_97_0(); }


  // [96] geta9: Stack3 -> Robot
  template < class DATA_EXPR0>
  static inline data_expression rewr_96_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@N(@@S(@var_4, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_4))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        return var_4; // R1 @var_4
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2e7e0), arg0);
  }

  static inline data_expression rewr_96_1_term(const application& t) { return rewr_96_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_96_1_term_arg_in_normal_form(const application& t) { return rewr_96_1(t[0]); }


  // [96] geta9: Stack3 -> Robot
  static inline const data_expression& rewr_96_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bd9b10);
  }

  static inline data_expression rewr_96_0_term(const application&) { return rewr_96_0(); }

  static inline data_expression rewr_96_0_term_arg_in_normal_form(const application&) { return rewr_96_0(); }


  // [58] geta8: Stack3 -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_58_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@N(@@S(@var_3, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_3))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        return var_3; // R1 @var_3
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0e30), arg0);
  }

  static inline data_expression rewr_58_1_term(const application& t) { return rewr_58_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_58_1_term_arg_in_normal_form(const application& t) { return rewr_58_1(t[0]); }


  // [58] geta8: Stack3 -> Position
  static inline const data_expression& rewr_58_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9070);
  }

  static inline data_expression rewr_58_0_term(const application&) { return rewr_58_0(); }

  static inline data_expression rewr_58_0_term_arg_in_normal_form(const application&) { return rewr_58_0(); }


  // [57] geta7: Stack3 -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_57_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@N(@@S(@var_2, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_2))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        return var_2; // R1 @var_2
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0ec0), arg0);
  }

  static inline data_expression rewr_57_1_term(const application& t) { return rewr_57_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_57_1_term_arg_in_normal_form(const application& t) { return rewr_57_1(t[0]); }


  // [57] geta7: Stack3 -> Position
  static inline const data_expression& rewr_57_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf90a0);
  }

  static inline data_expression rewr_57_0_term(const application&) { return rewr_57_0(); }

  static inline data_expression rewr_57_0_term_arg_in_normal_form(const application&) { return rewr_57_0(); }


  // [56] geta6: Stack3 -> Robot
  template < class DATA_EXPR0>
  static inline data_expression rewr_56_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@N(@@S(@var_1, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_1))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0f20), arg0);
  }

  static inline data_expression rewr_56_1_term(const application& t) { return rewr_56_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_56_1_term_arg_in_normal_form(const application& t) { return rewr_56_1(t[0]); }


  // [56] geta6: Stack3 -> Robot
  static inline const data_expression& rewr_56_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf90d0);
  }

  static inline data_expression rewr_56_0_term(const application&) { return rewr_56_0(); }

  static inline data_expression rewr_56_0_term_arg_in_normal_form(const application&) { return rewr_56_0(); }


  // [59] getstate3: Stack3 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_59_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push3, @@S(@var_0, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_0))))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f860) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0da0), arg0);
  }

  static inline data_expression rewr_59_1_term(const application& t) { return rewr_59_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_59_1_term_arg_in_normal_form(const application& t) { return rewr_59_1(t[0]); }


  // [59] getstate3: Stack3 -> Pos
  static inline const data_expression& rewr_59_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9100);
  }

  static inline data_expression rewr_59_0_term(const application&) { return rewr_59_0(); }

  static inline data_expression rewr_59_0_term_arg_in_normal_form(const application&) { return rewr_59_0(); }


  // [922] @equal_arguments: Enum21 # Enum21 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_922_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e20_21, @@D(@@N(@@F(e20_21, @@R(true), @@X))), @@F(e0_21, @@D(@@N(@@F(e0_21, @@R(true), @@X))), @@F(e19_21, @@D(@@N(@@F(e19_21, @@R(true), @@X))), @@F(e1_21, @@D(@@N(@@F(e1_21, @@R(true), @@X))), @@F(e18_21, @@D(@@N(@@F(e18_21, @@R(true), @@X))), @@F(e2_21, @@D(@@N(@@F(e2_21, @@R(true), @@X))), @@F(e17_21, @@D(@@N(@@F(e17_21, @@R(true), @@X))), @@F(e3_21, @@D(@@N(@@F(e3_21, @@R(true), @@X))), @@F(e16_21, @@D(@@N(@@F(e16_21, @@R(true), @@X))), @@F(e4_21, @@D(@@N(@@F(e4_21, @@R(true), @@X))), @@F(e15_21, @@D(@@N(@@F(e15_21, @@R(true), @@X))), @@F(e5_21, @@D(@@N(@@F(e5_21, @@R(true), @@X))), @@F(e14_21, @@D(@@N(@@F(e14_21, @@R(true), @@X))), @@F(e6_21, @@D(@@N(@@F(e6_21, @@R(true), @@X))), @@F(e13_21, @@D(@@N(@@F(e13_21, @@R(true), @@X))), @@F(e7_21, @@D(@@N(@@F(e7_21, @@R(true), @@X))), @@F(e12_21, @@D(@@N(@@F(e12_21, @@R(true), @@X))), @@F(e8_21, @@D(@@N(@@F(e8_21, @@R(true), @@X))), @@F(e11_21, @@D(@@N(@@F(e11_21, @@R(true), @@X))), @@F(e9_21, @@D(@@N(@@F(e9_21, @@R(true), @@X))), @@F(e10_21, @@D(@@N(@@F(e10_21, @@R(true), @@X))), @@X)))))))))))))))))))))
    {
      if (uint_address(arg0) == 0x55e3f2c870b0) // F1
      {
        if (uint_address(arg1) == 0x55e3f2c870b0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c86cf0) // F1
        {
          if (uint_address(arg1) == 0x55e3f2c86cf0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2c87080) // F1
          {
            if (uint_address(arg1) == 0x55e3f2c87080) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2c86d20) // F1
            {
              if (uint_address(arg1) == 0x55e3f2c86d20) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
              }
              else
              {
              }
            }
            else
            {
              if (uint_address(arg0) == 0x55e3f2c87050) // F1
              {
                if (uint_address(arg1) == 0x55e3f2c87050) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                }
                else
                {
                }
              }
              else
              {
                if (uint_address(arg0) == 0x55e3f2c86d50) // F1
                {
                  if (uint_address(arg1) == 0x55e3f2c86d50) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                  }
                  else
                  {
                  }
                }
                else
                {
                  if (uint_address(arg0) == 0x55e3f2c87020) // F1
                  {
                    if (uint_address(arg1) == 0x55e3f2c87020) // F1
                    {
                      return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                    if (uint_address(arg0) == 0x55e3f2c86d80) // F1
                    {
                      if (uint_address(arg1) == 0x55e3f2c86d80) // F1
                      {
                        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                      }
                      else
                      {
                      }
                    }
                    else
                    {
                      if (uint_address(arg0) == 0x55e3f2c86ff0) // F1
                      {
                        if (uint_address(arg1) == 0x55e3f2c86ff0) // F1
                        {
                          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                        }
                        else
                        {
                        }
                      }
                      else
                      {
                        if (uint_address(arg0) == 0x55e3f2c86db0) // F1
                        {
                          if (uint_address(arg1) == 0x55e3f2c86db0) // F1
                          {
                            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                          }
                          else
                          {
                          }
                        }
                        else
                        {
                          if (uint_address(arg0) == 0x55e3f2c86fc0) // F1
                          {
                            if (uint_address(arg1) == 0x55e3f2c86fc0) // F1
                            {
                              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                            }
                            else
                            {
                            }
                          }
                          else
                          {
                            if (uint_address(arg0) == 0x55e3f2c86de0) // F1
                            {
                              if (uint_address(arg1) == 0x55e3f2c86de0) // F1
                              {
                                return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                              }
                              else
                              {
                              }
                            }
                            else
                            {
                              if (uint_address(arg0) == 0x55e3f2c86f90) // F1
                              {
                                if (uint_address(arg1) == 0x55e3f2c86f90) // F1
                                {
                                  return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                                }
                                else
                                {
                                }
                              }
                              else
                              {
                                if (uint_address(arg0) == 0x55e3f2c86e10) // F1
                                {
                                  if (uint_address(arg1) == 0x55e3f2c86e10) // F1
                                  {
                                    return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                                  }
                                  else
                                  {
                                  }
                                }
                                else
                                {
                                  if (uint_address(arg0) == 0x55e3f2c86f60) // F1
                                  {
                                    if (uint_address(arg1) == 0x55e3f2c86f60) // F1
                                    {
                                      return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                                    }
                                    else
                                    {
                                    }
                                  }
                                  else
                                  {
                                    if (uint_address(arg0) == 0x55e3f2c86e40) // F1
                                    {
                                      if (uint_address(arg1) == 0x55e3f2c86e40) // F1
                                      {
                                        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                                      }
                                      else
                                      {
                                      }
                                    }
                                    else
                                    {
                                      if (uint_address(arg0) == 0x55e3f2c86f30) // F1
                                      {
                                        if (uint_address(arg1) == 0x55e3f2c86f30) // F1
                                        {
                                          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                                        }
                                        else
                                        {
                                        }
                                      }
                                      else
                                      {
                                        if (uint_address(arg0) == 0x55e3f2c86e70) // F1
                                        {
                                          if (uint_address(arg1) == 0x55e3f2c86e70) // F1
                                          {
                                            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                                          }
                                          else
                                          {
                                          }
                                        }
                                        else
                                        {
                                          if (uint_address(arg0) == 0x55e3f2c86f00) // F1
                                          {
                                            if (uint_address(arg1) == 0x55e3f2c86f00) // F1
                                            {
                                              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                                            }
                                            else
                                            {
                                            }
                                          }
                                          else
                                          {
                                            if (uint_address(arg0) == 0x55e3f2c86ea0) // F1
                                            {
                                              if (uint_address(arg1) == 0x55e3f2c86ea0) // F1
                                              {
                                                return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                                              }
                                              else
                                              {
                                              }
                                            }
                                            else
                                            {
                                              if (uint_address(arg0) == 0x55e3f2c86ed0) // F1
                                              {
                                                if (uint_address(arg1) == 0x55e3f2c86ed0) // F1
                                                {
                                                  return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c86bd0), arg0, arg1);
  }

  static inline data_expression rewr_922_2_term(const application& t) { return rewr_922_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_922_2_term_arg_in_normal_form(const application& t) { return rewr_922_2(t[0], t[1]); }


  // [922] @equal_arguments: Enum21 # Enum21 -> Bool
  static inline const data_expression& rewr_922_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9130);
  }

  static inline data_expression rewr_922_0_term(const application&) { return rewr_922_0(); }

  static inline data_expression rewr_922_0_term_arg_in_normal_form(const application&) { return rewr_922_0(); }


  // [921] @to_pos: Enum21 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_921_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e20_21, @@R(1), @@F(e0_21, @@R(21), @@F(e19_21, @@R(2), @@F(e1_21, @@R(20), @@F(e18_21, @@R(3), @@F(e2_21, @@R(19), @@F(e17_21, @@R(4), @@F(e3_21, @@R(18), @@F(e16_21, @@R(5), @@F(e4_21, @@R(17), @@F(e15_21, @@R(6), @@F(e5_21, @@R(16), @@F(e14_21, @@R(7), @@F(e6_21, @@R(15), @@F(e13_21, @@R(8), @@F(e7_21, @@R(14), @@F(e12_21, @@R(9), @@F(e8_21, @@R(13), @@F(e11_21, @@R(10), @@F(e9_21, @@R(12), @@F(e10_21, @@R(11), @@X)))))))))))))))))))))
    {
      if (uint_address(arg0) == 0x55e3f2c870b0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c86cf0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2bf9270); // R1 21
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2c87080) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2c86d20) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2bf9550); // R1 20
            }
            else
            {
              if (uint_address(arg0) == 0x55e3f2c87050) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
              }
              else
              {
                if (uint_address(arg0) == 0x55e3f2c86d50) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x55e3f2c206f0); // R1 19
                }
                else
                {
                  if (uint_address(arg0) == 0x55e3f2c87020) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x55e3f2cd4ee0); // R1 4
                  }
                  else
                  {
                    if (uint_address(arg0) == 0x55e3f2c86d80) // F1
                    {
                      return *reinterpret_cast<const data_expression*>(0x55e3f2cd4f10); // R1 18
                    }
                    else
                    {
                      if (uint_address(arg0) == 0x55e3f2c86ff0) // F1
                      {
                        return *reinterpret_cast<const data_expression*>(0x55e3f2cd4f40); // R1 5
                      }
                      else
                      {
                        if (uint_address(arg0) == 0x55e3f2c86db0) // F1
                        {
                          return *reinterpret_cast<const data_expression*>(0x55e3f2cd4f70); // R1 17
                        }
                        else
                        {
                          if (uint_address(arg0) == 0x55e3f2c86fc0) // F1
                          {
                            return *reinterpret_cast<const data_expression*>(0x55e3f2cd4fa0); // R1 6
                          }
                          else
                          {
                            if (uint_address(arg0) == 0x55e3f2c86de0) // F1
                            {
                              return *reinterpret_cast<const data_expression*>(0x55e3f2cd4fd0); // R1 16
                            }
                            else
                            {
                              if (uint_address(arg0) == 0x55e3f2c86f90) // F1
                              {
                                return *reinterpret_cast<const data_expression*>(0x55e3f2bf4e80); // R1 7
                              }
                              else
                              {
                                if (uint_address(arg0) == 0x55e3f2c86e10) // F1
                                {
                                  return *reinterpret_cast<const data_expression*>(0x55e3f2bf4eb0); // R1 15
                                }
                                else
                                {
                                  if (uint_address(arg0) == 0x55e3f2c86f60) // F1
                                  {
                                    return *reinterpret_cast<const data_expression*>(0x55e3f2bf4ee0); // R1 8
                                  }
                                  else
                                  {
                                    if (uint_address(arg0) == 0x55e3f2c86e40) // F1
                                    {
                                      return *reinterpret_cast<const data_expression*>(0x55e3f2bf4f10); // R1 14
                                    }
                                    else
                                    {
                                      if (uint_address(arg0) == 0x55e3f2c86f30) // F1
                                      {
                                        return *reinterpret_cast<const data_expression*>(0x55e3f2bf4f40); // R1 9
                                      }
                                      else
                                      {
                                        if (uint_address(arg0) == 0x55e3f2c86e70) // F1
                                        {
                                          return *reinterpret_cast<const data_expression*>(0x55e3f2bf4f70); // R1 13
                                        }
                                        else
                                        {
                                          if (uint_address(arg0) == 0x55e3f2c86f00) // F1
                                          {
                                            return *reinterpret_cast<const data_expression*>(0x55e3f2bf4fa0); // R1 10
                                          }
                                          else
                                          {
                                            if (uint_address(arg0) == 0x55e3f2c86ea0) // F1
                                            {
                                              return *reinterpret_cast<const data_expression*>(0x55e3f2bf9dc0); // R1 12
                                            }
                                            else
                                            {
                                              if (uint_address(arg0) == 0x55e3f2c86ed0) // F1
                                              {
                                                return *reinterpret_cast<const data_expression*>(0x55e3f2bf9df0); // R1 11
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
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c86c00), arg0);
  }

  static inline data_expression rewr_921_1_term(const application& t) { return rewr_921_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_921_1_term_arg_in_normal_form(const application& t) { return rewr_921_1(t[0]); }


  // [921] @to_pos: Enum21 -> Pos
  static inline const data_expression& rewr_921_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf93b0);
  }

  static inline data_expression rewr_921_0_term(const application&) { return rewr_921_0(); }

  static inline data_expression rewr_921_0_term_arg_in_normal_form(const application&) { return rewr_921_0(); }


  // [855] @equal_arguments: Enum4 # Enum4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_855_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e3_4, @@D(@@N(@@F(e3_4, @@R(true), @@X))), @@F(e0_4, @@D(@@N(@@F(e0_4, @@R(true), @@X))), @@F(e2_4, @@D(@@N(@@F(e2_4, @@R(true), @@X))), @@F(e1_4, @@D(@@N(@@F(e1_4, @@R(true), @@X))), @@X))))
    {
      if (uint_address(arg0) == 0x55e3f2bc5f00) // F1
      {
        if (uint_address(arg1) == 0x55e3f2bc5f00) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5e70) // F1
        {
          if (uint_address(arg1) == 0x55e3f2bc5e70) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2bc5ed0) // F1
          {
            if (uint_address(arg1) == 0x55e3f2bc5ed0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2bc5ea0) // F1
            {
              if (uint_address(arg1) == 0x55e3f2bc5ea0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c88070), arg0, arg1);
  }

  static inline data_expression rewr_855_2_term(const application& t) { return rewr_855_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_855_2_term_arg_in_normal_form(const application& t) { return rewr_855_2(t[0], t[1]); }


  // [855] @equal_arguments: Enum4 # Enum4 -> Bool
  static inline const data_expression& rewr_855_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c44260);
  }

  static inline data_expression rewr_855_0_term(const application&) { return rewr_855_0(); }

  static inline data_expression rewr_855_0_term_arg_in_normal_form(const application&) { return rewr_855_0(); }


  // [854] @to_pos: Enum4 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_854_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e3_4, @@R(1), @@F(e0_4, @@R(4), @@F(e2_4, @@R(2), @@F(e1_4, @@R(3), @@X))))
    {
      if (uint_address(arg0) == 0x55e3f2bc5f00) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5e70) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd4ee0); // R1 4
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2bc5ed0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2bc5ea0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c880a0), arg0);
  }

  static inline data_expression rewr_854_1_term(const application& t) { return rewr_854_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_854_1_term_arg_in_normal_form(const application& t) { return rewr_854_1(t[0]); }


  // [854] @to_pos: Enum4 -> Pos
  static inline const data_expression& rewr_854_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf9e20);
  }

  static inline data_expression rewr_854_0_term(const application&) { return rewr_854_0(); }

  static inline data_expression rewr_854_0_term_arg_in_normal_form(const application&) { return rewr_854_0(); }


  // [839] @equal_arguments: Stack2 # Stack2 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_839_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(push2, @@S(@var_0, @@N(@@S(@var_1, @@N(@@S(@var_2, @@N(@@S(@var_3, @@N(@@S(@var_4, @@N(@@S(@var_5, @@D(@@N(@@F(push2, @@S(@var_6, @@N(@@S(@var_7, @@N(@@S(@var_8, @@N(@@S(@var_9, @@N(@@S(@var_10, @@N(@@S(@var_11, @@R(@var_0 == @var_6 && @var_1 == @var_7 && @var_2 == @var_8 && @var_3 == @var_9 && @var_4 == @var_10 && @var_5 == @var_11)))))))))))), @@X)))))))))))))), @@F(emptystack2, @@D(@@N(@@F(emptystack2, @@R(true), @@X))), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be0fe0) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        const data_expression& var_5 = down_cast<data_expression>(arg0[6]); // S2
        if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be0fe0) // F1
        {
          const data_expression& var_6 = down_cast<data_expression>(arg1[1]); // S2
          const data_expression& var_7 = down_cast<data_expression>(arg1[2]); // S2
          const data_expression& var_8 = down_cast<data_expression>(arg1[3]); // S2
          const data_expression& var_9 = down_cast<data_expression>(arg1[4]); // S2
          const data_expression& var_10 = down_cast<data_expression>(arg1[5]); // S2
          const data_expression& var_11 = down_cast<data_expression>(arg1[6]); // S2
          return rewr_16_2(rewr_25_2(var_0, var_6), delayed_rewr_16_2<delayed_rewr_17_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_205_2<data_expression, data_expression>>>>>(delayed_rewr_17_2<data_expression, data_expression>(var_1, var_7), delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_205_2<data_expression, data_expression>>>>(delayed_rewr_19_2<data_expression, data_expression>(var_2, var_8), delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_205_2<data_expression, data_expression>>>(delayed_rewr_19_2<data_expression, data_expression>(var_3, var_9), delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_205_2<data_expression, data_expression>>(delayed_rewr_182_2<data_expression, data_expression>(var_4, var_10), delayed_rewr_205_2<data_expression, data_expression>(var_5, var_11)))))); // R1 @var_0 == @var_6 && @var_1 == @var_7 && @var_2 == @var_8 && @var_3 == @var_9 && @var_4 == @var_10 && @var_5 == @var_11
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2c6b0) // F1
        {
          if (uint_address(arg1) == 0x55e3f2c2c6b0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c89150), arg0, arg1);
  }

  static inline data_expression rewr_839_2_term(const application& t) { return rewr_839_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_839_2_term_arg_in_normal_form(const application& t) { return rewr_839_2(t[0], t[1]); }


  // [205] ==: Stack2 # Stack2 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_205_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_205_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_205_2(m_t0, m_t1);
      }
  };
  
  // [839] @equal_arguments: Stack2 # Stack2 -> Bool
  static inline const data_expression& rewr_839_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd73c0);
  }

  static inline data_expression rewr_839_0_term(const application&) { return rewr_839_0(); }

  static inline data_expression rewr_839_0_term_arg_in_normal_form(const application&) { return rewr_839_0(); }


  // [846] @to_pos: Stack2 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_846_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push2, @@N(@@N(@@N(@@N(@@N(@@R(1)))))), @@F(emptystack2, @@R(2), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be0fe0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2c6b0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c89180), arg0);
  }

  static inline data_expression rewr_846_1_term(const application& t) { return rewr_846_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_846_1_term_arg_in_normal_form(const application& t) { return rewr_846_1(t[0]); }


  // [846] @to_pos: Stack2 -> Pos
  static inline const data_expression& rewr_846_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf9eb0);
  }

  static inline data_expression rewr_846_0_term(const application&) { return rewr_846_0(); }

  static inline data_expression rewr_846_0_term_arg_in_normal_form(const application&) { return rewr_846_0(); }


  // [55] pop2: Stack2 -> Stack2
  template < class DATA_EXPR0>
  static inline data_expression rewr_55_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push2, @@N(@@N(@@N(@@N(@@N(@@S(@var_5, @@R(@var_5))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be0fe0) // F1
      {
        const data_expression& var_5 = down_cast<data_expression>(arg0[6]); // S2
        return var_5; // R1 @var_5
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0f80), arg0);
  }

  static inline data_expression rewr_55_1_term(const application& t) { return rewr_55_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_55_1_term_arg_in_normal_form(const application& t) { return rewr_55_1(t[0]); }


  // [55] pop2: Stack2 -> Stack2
  static inline const data_expression& rewr_55_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bed2a0);
  }

  static inline data_expression rewr_55_0_term(const application&) { return rewr_55_0(); }

  static inline data_expression rewr_55_0_term_arg_in_normal_form(const application&) { return rewr_55_0(); }


  // [53] getoneWafer: Stack2 -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_53_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push2, @@N(@@N(@@N(@@N(@@S(@var_4, @@N(@@R(@var_4))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be0fe0) // F1
      {
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        return var_4; // R1 @var_4
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1100), arg0);
  }

  static inline data_expression rewr_53_1_term(const application& t) { return rewr_53_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_53_1_term_arg_in_normal_form(const application& t) { return rewr_53_1(t[0]); }


  // [53] getoneWafer: Stack2 -> Bool
  static inline const data_expression& rewr_53_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bed2d0);
  }

  static inline data_expression rewr_53_0_term(const application&) { return rewr_53_0(); }

  static inline data_expression rewr_53_0_term_arg_in_normal_form(const application&) { return rewr_53_0(); }


  // [95] geta5: Stack2 -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_95_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push2, @@N(@@N(@@N(@@S(@var_3, @@N(@@N(@@R(@var_3))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be0fe0) // F1
      {
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        return var_3; // R1 @var_3
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2e8a0), arg0);
  }

  static inline data_expression rewr_95_1_term(const application& t) { return rewr_95_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_95_1_term_arg_in_normal_form(const application& t) { return rewr_95_1(t[0]); }


  // [95] geta5: Stack2 -> Position
  static inline const data_expression& rewr_95_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c20640);
  }

  static inline data_expression rewr_95_0_term(const application&) { return rewr_95_0(); }

  static inline data_expression rewr_95_0_term_arg_in_normal_form(const application&) { return rewr_95_0(); }


  // [94] geta4: Stack2 -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_94_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push2, @@N(@@N(@@S(@var_2, @@N(@@N(@@N(@@R(@var_2))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be0fe0) // F1
      {
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        return var_2; // R1 @var_2
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2e930), arg0);
  }

  static inline data_expression rewr_94_1_term(const application& t) { return rewr_94_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_94_1_term_arg_in_normal_form(const application& t) { return rewr_94_1(t[0]); }


  // [94] geta4: Stack2 -> Position
  static inline const data_expression& rewr_94_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c20670);
  }

  static inline data_expression rewr_94_0_term(const application&) { return rewr_94_0(); }

  static inline data_expression rewr_94_0_term_arg_in_normal_form(const application&) { return rewr_94_0(); }


  // [93] geta3: Stack2 -> Robot
  template < class DATA_EXPR0>
  static inline data_expression rewr_93_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push2, @@N(@@S(@var_1, @@N(@@N(@@N(@@N(@@R(@var_1))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be0fe0) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2e990), arg0);
  }

  static inline data_expression rewr_93_1_term(const application& t) { return rewr_93_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_93_1_term_arg_in_normal_form(const application& t) { return rewr_93_1(t[0]); }


  // [93] geta3: Stack2 -> Robot
  static inline const data_expression& rewr_93_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf58a0);
  }

  static inline data_expression rewr_93_0_term(const application&) { return rewr_93_0(); }

  static inline data_expression rewr_93_0_term_arg_in_normal_form(const application&) { return rewr_93_0(); }


  // [51] getstate2: Stack2 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_51_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push2, @@S(@var_0, @@N(@@N(@@N(@@N(@@N(@@R(@var_0))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be0fe0) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be11f0), arg0);
  }

  static inline data_expression rewr_51_1_term(const application& t) { return rewr_51_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_51_1_term_arg_in_normal_form(const application& t) { return rewr_51_1(t[0]); }


  // [51] getstate2: Stack2 -> Pos
  static inline const data_expression& rewr_51_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf58d0);
  }

  static inline data_expression rewr_51_0_term(const application&) { return rewr_51_0(); }

  static inline data_expression rewr_51_0_term_arg_in_normal_form(const application&) { return rewr_51_0(); }


  // [786] @equal_arguments: Enum6 # Enum6 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_786_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e5_6, @@D(@@N(@@F(e5_6, @@R(true), @@X))), @@F(e0_6, @@D(@@N(@@F(e0_6, @@R(true), @@X))), @@F(e4_6, @@D(@@N(@@F(e4_6, @@R(true), @@X))), @@F(e1_6, @@D(@@N(@@F(e1_6, @@R(true), @@X))), @@F(e3_6, @@D(@@N(@@F(e3_6, @@R(true), @@X))), @@F(e2_6, @@D(@@N(@@F(e2_6, @@R(true), @@X))), @@X))))))
    {
      if (uint_address(arg0) == 0x55e3f2c83730) // F1
      {
        if (uint_address(arg1) == 0x55e3f2c83730) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c83640) // F1
        {
          if (uint_address(arg1) == 0x55e3f2c83640) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2c83700) // F1
          {
            if (uint_address(arg1) == 0x55e3f2c83700) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2c83670) // F1
            {
              if (uint_address(arg1) == 0x55e3f2c83670) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
              }
              else
              {
              }
            }
            else
            {
              if (uint_address(arg0) == 0x55e3f2c836d0) // F1
              {
                if (uint_address(arg1) == 0x55e3f2c836d0) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                }
                else
                {
                }
              }
              else
              {
                if (uint_address(arg0) == 0x55e3f2c836a0) // F1
                {
                  if (uint_address(arg1) == 0x55e3f2c836a0) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c83370), arg0, arg1);
  }

  static inline data_expression rewr_786_2_term(const application& t) { return rewr_786_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_786_2_term_arg_in_normal_form(const application& t) { return rewr_786_2(t[0], t[1]); }


  // [786] @equal_arguments: Enum6 # Enum6 -> Bool
  static inline const data_expression& rewr_786_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf5900);
  }

  static inline data_expression rewr_786_0_term(const application&) { return rewr_786_0(); }

  static inline data_expression rewr_786_0_term_arg_in_normal_form(const application&) { return rewr_786_0(); }


  // [785] @to_pos: Enum6 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_785_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e5_6, @@R(1), @@F(e0_6, @@R(6), @@F(e4_6, @@R(2), @@F(e1_6, @@R(5), @@F(e3_6, @@R(3), @@F(e2_6, @@R(4), @@X))))))
    {
      if (uint_address(arg0) == 0x55e3f2c83730) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c83640) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd4fa0); // R1 6
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2c83700) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2c83670) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2cd4f40); // R1 5
            }
            else
            {
              if (uint_address(arg0) == 0x55e3f2c836d0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
              }
              else
              {
                if (uint_address(arg0) == 0x55e3f2c836a0) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x55e3f2cd4ee0); // R1 4
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c83550), arg0);
  }

  static inline data_expression rewr_785_1_term(const application& t) { return rewr_785_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_785_1_term_arg_in_normal_form(const application& t) { return rewr_785_1(t[0]); }


  // [785] @to_pos: Enum6 -> Pos
  static inline const data_expression& rewr_785_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bef6e0);
  }

  static inline data_expression rewr_785_0_term(const application&) { return rewr_785_0(); }

  static inline data_expression rewr_785_0_term_arg_in_normal_form(const application&) { return rewr_785_0(); }


  // [751] @equal_arguments: Stack1 # Stack1 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_751_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(push1, @@S(@var_0, @@N(@@S(@var_1, @@N(@@S(@var_2, @@N(@@S(@var_3, @@N(@@S(@var_4, @@N(@@S(@var_5, @@N(@@S(@var_6, @@N(@@S(@var_7, @@N(@@S(@var_8, @@N(@@S(@var_9, @@D(@@N(@@F(push1, @@S(@var_10, @@N(@@S(@var_11, @@N(@@S(@var_12, @@N(@@S(@var_13, @@N(@@S(@var_14, @@N(@@S(@var_15, @@N(@@S(@var_16, @@N(@@S(@var_17, @@N(@@S(@var_18, @@N(@@S(@var_19, @@R(@var_0 == @var_10 && @var_1 == @var_11 && @var_2 == @var_12 && @var_3 == @var_13 && @var_4 == @var_14 && @var_5 == @var_15 && @var_6 == @var_16 && @var_7 == @var_17 && @var_8 == @var_18 && @var_9 == @var_19)))))))))))))))))))), @@X)))))))))))))))))))))), @@F(emptystack1, @@D(@@N(@@F(emptystack1, @@R(true), @@X))), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        const data_expression& var_5 = down_cast<data_expression>(arg0[6]); // S2
        const data_expression& var_6 = down_cast<data_expression>(arg0[7]); // S2
        const data_expression& var_7 = down_cast<data_expression>(arg0[8]); // S2
        const data_expression& var_8 = down_cast<data_expression>(arg0[9]); // S2
        const data_expression& var_9 = down_cast<data_expression>(arg0[10]); // S2
        if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be15e0) // F1
        {
          const data_expression& var_10 = down_cast<data_expression>(arg1[1]); // S2
          const data_expression& var_11 = down_cast<data_expression>(arg1[2]); // S2
          const data_expression& var_12 = down_cast<data_expression>(arg1[3]); // S2
          const data_expression& var_13 = down_cast<data_expression>(arg1[4]); // S2
          const data_expression& var_14 = down_cast<data_expression>(arg1[5]); // S2
          const data_expression& var_15 = down_cast<data_expression>(arg1[6]); // S2
          const data_expression& var_16 = down_cast<data_expression>(arg1[7]); // S2
          const data_expression& var_17 = down_cast<data_expression>(arg1[8]); // S2
          const data_expression& var_18 = down_cast<data_expression>(arg1[9]); // S2
          const data_expression& var_19 = down_cast<data_expression>(arg1[10]); // S2
          return rewr_16_2(rewr_25_2(var_0, var_10), delayed_rewr_16_2<delayed_rewr_17_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_266_2<data_expression, data_expression>>>>>>>>>(delayed_rewr_17_2<data_expression, data_expression>(var_1, var_11), delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_266_2<data_expression, data_expression>>>>>>>>(delayed_rewr_19_2<data_expression, data_expression>(var_2, var_12), delayed_rewr_16_2<delayed_rewr_19_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_266_2<data_expression, data_expression>>>>>>>(delayed_rewr_19_2<data_expression, data_expression>(var_3, var_13), delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_266_2<data_expression, data_expression>>>>>>(delayed_rewr_182_2<data_expression, data_expression>(var_4, var_14), delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_266_2<data_expression, data_expression>>>>>(delayed_rewr_71_2<data_expression, data_expression>(var_5, var_15), delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_266_2<data_expression, data_expression>>>>(delayed_rewr_71_2<data_expression, data_expression>(var_6, var_16), delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_266_2<data_expression, data_expression>>>(delayed_rewr_28_2<data_expression, data_expression>(var_7, var_17), delayed_rewr_16_2<delayed_rewr_28_2<data_expression, data_expression>, delayed_rewr_266_2<data_expression, data_expression>>(delayed_rewr_28_2<data_expression, data_expression>(var_8, var_18), delayed_rewr_266_2<data_expression, data_expression>(var_9, var_19)))))))))); // R1 @var_0 == @var_10 && @var_1 == @var_11 && @var_2 == @var_12 && @var_3 == @var_13 && @var_4 == @var_14 && @var_5 == @var_15 && @var_6 == @var_16 && @var_7 == @var_17 && @var_8 == @var_18 && @var_9 == @var_19
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be1520) // F1
        {
          if (uint_address(arg1) == 0x55e3f2be1520) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c75f20), arg0, arg1);
  }

  static inline data_expression rewr_751_2_term(const application& t) { return rewr_751_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_751_2_term_arg_in_normal_form(const application& t) { return rewr_751_2(t[0], t[1]); }


  // [266] ==: Stack1 # Stack1 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_266_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_266_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_266_2(m_t0, m_t1);
      }
  };
  
  // [28] ==: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_28_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_28_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_28_2(m_t0, m_t1);
      }
  };
  
  // [751] @equal_arguments: Stack1 # Stack1 -> Bool
  static inline const data_expression& rewr_751_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf9ee0);
  }

  static inline data_expression rewr_751_0_term(const application&) { return rewr_751_0(); }

  static inline data_expression rewr_751_0_term_arg_in_normal_form(const application&) { return rewr_751_0(); }


  // [750] @to_pos: Stack1 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_750_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(1)))))))))), @@F(emptystack1, @@R(2), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be1520) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c76010), arg0);
  }

  static inline data_expression rewr_750_1_term(const application& t) { return rewr_750_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_750_1_term_arg_in_normal_form(const application& t) { return rewr_750_1(t[0]); }


  // [750] @to_pos: Stack1 -> Pos
  static inline const data_expression& rewr_750_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf9380);
  }

  static inline data_expression rewr_750_0_term(const application&) { return rewr_750_0(); }

  static inline data_expression rewr_750_0_term_arg_in_normal_form(const application&) { return rewr_750_0(); }


  // [63] pop1: Stack1 -> Stack1
  template < class DATA_EXPR0>
  static inline data_expression rewr_63_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_9, @@R(@var_9))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_9 = down_cast<data_expression>(arg0[10]); // S2
        return var_9; // R1 @var_9
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0b90), arg0);
  }

  static inline data_expression rewr_63_1_term(const application& t) { return rewr_63_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_63_1_term_arg_in_normal_form(const application& t) { return rewr_63_1(t[0]); }


  // [63] pop1: Stack1 -> Stack1
  static inline const data_expression& rewr_63_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfca80);
  }

  static inline data_expression rewr_63_0_term(const application&) { return rewr_63_0(); }

  static inline data_expression rewr_63_0_term_arg_in_normal_form(const application&) { return rewr_63_0(); }


  // [29] getcout: Stack1 -> ChuckStatus
  template < class DATA_EXPR0>
  static inline data_expression rewr_29_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_8, @@N(@@R(@var_8))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_8 = down_cast<data_expression>(arg0[9]); // S2
        return var_8; // R1 @var_8
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be19a0), arg0);
  }

  static inline data_expression rewr_29_1_term(const application& t) { return rewr_29_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_29_1_term_arg_in_normal_form(const application& t) { return rewr_29_1(t[0]); }


  // [29] getcout: Stack1 -> ChuckStatus
  static inline const data_expression& rewr_29_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfcaf0);
  }

  static inline data_expression rewr_29_0_term(const application&) { return rewr_29_0(); }

  static inline data_expression rewr_29_0_term_arg_in_normal_form(const application&) { return rewr_29_0(); }


  // [35] getcin: Stack1 -> ChuckStatus
  template < class DATA_EXPR0>
  static inline data_expression rewr_35_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_7, @@N(@@N(@@R(@var_7))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_7 = down_cast<data_expression>(arg0[8]); // S2
        return var_7; // R1 @var_7
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1790), arg0);
  }

  static inline data_expression rewr_35_1_term(const application& t) { return rewr_35_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_35_1_term_arg_in_normal_form(const application& t) { return rewr_35_1(t[0]); }


  // [35] getcin: Stack1 -> ChuckStatus
  static inline const data_expression& rewr_35_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfcb20);
  }

  static inline data_expression rewr_35_0_term(const application&) { return rewr_35_0(); }

  static inline data_expression rewr_35_0_term_arg_in_normal_form(const application&) { return rewr_35_0(); }


  // [33] getwplace: Stack1 -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_33_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@N(@@N(@@N(@@N(@@S(@var_6, @@N(@@N(@@N(@@R(@var_6))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_6 = down_cast<data_expression>(arg0[7]); // S2
        return var_6; // R1 @var_6
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be18b0), arg0);
  }

  static inline data_expression rewr_33_1_term(const application& t) { return rewr_33_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_33_1_term_arg_in_normal_form(const application& t) { return rewr_33_1(t[0]); }


  // [33] getwplace: Stack1 -> Nat
  static inline const data_expression& rewr_33_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfcb50);
  }

  static inline data_expression rewr_33_0_term(const application&) { return rewr_33_0(); }

  static inline data_expression rewr_33_0_term_arg_in_normal_form(const application&) { return rewr_33_0(); }


  // [37] getwtake: Stack1 -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_37_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@N(@@N(@@N(@@S(@var_5, @@N(@@N(@@N(@@N(@@R(@var_5))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_5 = down_cast<data_expression>(arg0[6]); // S2
        return var_5; // R1 @var_5
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1700), arg0);
  }

  static inline data_expression rewr_37_1_term(const application& t) { return rewr_37_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_37_1_term_arg_in_normal_form(const application& t) { return rewr_37_1(t[0]); }


  // [37] getwtake: Stack1 -> Nat
  static inline const data_expression& rewr_37_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf92d0);
  }

  static inline data_expression rewr_37_0_term(const application&) { return rewr_37_0(); }

  static inline data_expression rewr_37_0_term_arg_in_normal_form(const application&) { return rewr_37_0(); }


  // [34] getidle: Stack1 -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_34_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@N(@@N(@@S(@var_4, @@N(@@N(@@N(@@N(@@N(@@R(@var_4))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        return var_4; // R1 @var_4
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1820), arg0);
  }

  static inline data_expression rewr_34_1_term(const application& t) { return rewr_34_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_34_1_term_arg_in_normal_form(const application& t) { return rewr_34_1(t[0]); }


  // [34] getidle: Stack1 -> Bool
  static inline const data_expression& rewr_34_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bef6b0);
  }

  static inline data_expression rewr_34_0_term(const application&) { return rewr_34_0(); }

  static inline data_expression rewr_34_0_term_arg_in_normal_form(const application&) { return rewr_34_0(); }


  // [92] geta2: Stack1 -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_92_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@N(@@S(@var_3, @@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_3))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        return var_3; // R1 @var_3
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2ea80), arg0);
  }

  static inline data_expression rewr_92_1_term(const application& t) { return rewr_92_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_92_1_term_arg_in_normal_form(const application& t) { return rewr_92_1(t[0]); }


  // [92] geta2: Stack1 -> Position
  static inline const data_expression& rewr_92_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd74e0);
  }

  static inline data_expression rewr_92_0_term(const application&) { return rewr_92_0(); }

  static inline data_expression rewr_92_0_term_arg_in_normal_form(const application&) { return rewr_92_0(); }


  // [91] geta1: Stack1 -> Position
  template < class DATA_EXPR0>
  static inline data_expression rewr_91_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@N(@@S(@var_2, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_2))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        return var_2; // R1 @var_2
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2eb10), arg0);
  }

  static inline data_expression rewr_91_1_term(const application& t) { return rewr_91_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_91_1_term_arg_in_normal_form(const application& t) { return rewr_91_1(t[0]); }


  // [91] geta1: Stack1 -> Position
  static inline const data_expression& rewr_91_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8890);
  }

  static inline data_expression rewr_91_0_term(const application&) { return rewr_91_0(); }

  static inline data_expression rewr_91_0_term_arg_in_normal_form(const application&) { return rewr_91_0(); }


  // [90] geta: Stack1 -> Robot
  template < class DATA_EXPR0>
  static inline data_expression rewr_90_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@N(@@S(@var_1, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_1))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2eb70), arg0);
  }

  static inline data_expression rewr_90_1_term(const application& t) { return rewr_90_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_90_1_term_arg_in_normal_form(const application& t) { return rewr_90_1(t[0]); }


  // [90] geta: Stack1 -> Robot
  static inline const data_expression& rewr_90_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf88c0);
  }

  static inline data_expression rewr_90_0_term(const application&) { return rewr_90_0(); }

  static inline data_expression rewr_90_0_term_arg_in_normal_form(const application&) { return rewr_90_0(); }


  // [26] getstate1: Stack1 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_26_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push1, @@S(@var_0, @@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@N(@@R(@var_0))))))))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15e0) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1a60), arg0);
  }

  static inline data_expression rewr_26_1_term(const application& t) { return rewr_26_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_26_1_term_arg_in_normal_form(const application& t) { return rewr_26_1(t[0]); }


  // [26] getstate1: Stack1 -> Pos
  static inline const data_expression& rewr_26_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf88f0);
  }

  static inline data_expression rewr_26_0_term(const application&) { return rewr_26_0(); }

  static inline data_expression rewr_26_0_term_arg_in_normal_form(const application&) { return rewr_26_0(); }


  // [861] @equal_arguments: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_861_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e2_3, @@D(@@N(@@F(e2_3, @@R(true), @@X))), @@F(e0_3, @@D(@@N(@@F(e0_3, @@R(true), @@X))), @@F(e1_3, @@D(@@N(@@F(e1_3, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x55e3f2bc59f0) // F1
      {
        if (uint_address(arg1) == 0x55e3f2bc59f0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5990) // F1
        {
          if (uint_address(arg1) == 0x55e3f2bc5990) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2bc59c0) // F1
          {
            if (uint_address(arg1) == 0x55e3f2bc59c0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c81690), arg0, arg1);
  }

  static inline data_expression rewr_861_2_term(const application& t) { return rewr_861_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_861_2_term_arg_in_normal_form(const application& t) { return rewr_861_2(t[0], t[1]); }


  // [861] @equal_arguments: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_861_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8860);
  }

  static inline data_expression rewr_861_0_term(const application&) { return rewr_861_0(); }

  static inline data_expression rewr_861_0_term_arg_in_normal_form(const application&) { return rewr_861_0(); }


  // [860] @to_pos: Enum3 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_860_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@R(1), @@F(e0_3, @@R(3), @@F(e1_3, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x55e3f2bc59f0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5990) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2bc59c0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c816c0), arg0);
  }

  static inline data_expression rewr_860_1_term(const application& t) { return rewr_860_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_860_1_term_arg_in_normal_form(const application& t) { return rewr_860_1(t[0]); }


  // [860] @to_pos: Enum3 -> Pos
  static inline const data_expression& rewr_860_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c02580);
  }

  static inline data_expression rewr_860_0_term(const application&) { return rewr_860_0(); }

  static inline data_expression rewr_860_0_term_arg_in_normal_form(const application&) { return rewr_860_0(); }


  // [843] @equal_arguments: Stack # Stack -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_843_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(push, @@S(@var_0, @@N(@@S(@var_1, @@N(@@S(@var_2, @@N(@@S(@var_3, @@N(@@S(@var_4, @@D(@@N(@@F(push, @@S(@var_5, @@N(@@S(@var_6, @@N(@@S(@var_7, @@N(@@S(@var_8, @@N(@@S(@var_9, @@R(@var_0 == @var_5 && @var_1 == @var_6 && @var_2 == @var_7 && @var_3 == @var_8 && @var_4 == @var_9)))))))))), @@X)))))))))))), @@F(emptystack, @@D(@@N(@@F(emptystack, @@R(true), @@X))), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f440) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2c2f440) // F1
        {
          const data_expression& var_5 = down_cast<data_expression>(arg1[1]); // S2
          const data_expression& var_6 = down_cast<data_expression>(arg1[2]); // S2
          const data_expression& var_7 = down_cast<data_expression>(arg1[3]); // S2
          const data_expression& var_8 = down_cast<data_expression>(arg1[4]); // S2
          const data_expression& var_9 = down_cast<data_expression>(arg1[5]); // S2
          return rewr_16_2(rewr_25_2(var_0, var_5), delayed_rewr_16_2<delayed_rewr_71_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_108_2<data_expression, data_expression>>>>(delayed_rewr_71_2<data_expression, data_expression>(var_1, var_6), delayed_rewr_16_2<delayed_rewr_174_2<data_expression, data_expression>, delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_108_2<data_expression, data_expression>>>(delayed_rewr_174_2<data_expression, data_expression>(var_2, var_7), delayed_rewr_16_2<delayed_rewr_182_2<data_expression, data_expression>, delayed_rewr_108_2<data_expression, data_expression>>(delayed_rewr_182_2<data_expression, data_expression>(var_3, var_8), delayed_rewr_108_2<data_expression, data_expression>(var_4, var_9))))); // R1 @var_0 == @var_5 && @var_1 == @var_6 && @var_2 == @var_7 && @var_3 == @var_8 && @var_4 == @var_9
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2f2f0) // F1
        {
          if (uint_address(arg1) == 0x55e3f2c2f2f0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c828f0), arg0, arg1);
  }

  static inline data_expression rewr_843_2_term(const application& t) { return rewr_843_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_843_2_term_arg_in_normal_form(const application& t) { return rewr_843_2(t[0], t[1]); }


  // [108] ==: Stack # Stack -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_108_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_108_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_108_2(m_t0, m_t1);
      }
  };
  
  // [843] @equal_arguments: Stack # Stack -> Bool
  static inline const data_expression& rewr_843_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c432c0);
  }

  static inline data_expression rewr_843_0_term(const application&) { return rewr_843_0(); }

  static inline data_expression rewr_843_0_term_arg_in_normal_form(const application&) { return rewr_843_0(); }


  // [842] @to_pos: Stack -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_842_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push, @@N(@@N(@@N(@@N(@@R(1))))), @@F(emptystack, @@R(2), @@X))
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f440) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2f2f0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c82920), arg0);
  }

  static inline data_expression rewr_842_1_term(const application& t) { return rewr_842_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_842_1_term_arg_in_normal_form(const application& t) { return rewr_842_1(t[0]); }


  // [842] @to_pos: Stack -> Pos
  static inline const data_expression& rewr_842_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf5930);
  }

  static inline data_expression rewr_842_0_term(const application&) { return rewr_842_0(); }

  static inline data_expression rewr_842_0_term_arg_in_normal_form(const application&) { return rewr_842_0(); }


  // [62] pop: Stack -> Stack
  template < class DATA_EXPR0>
  static inline data_expression rewr_62_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push, @@N(@@N(@@N(@@N(@@S(@var_4, @@R(@var_4)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f440) // F1
      {
        const data_expression& var_4 = down_cast<data_expression>(arg0[5]); // S2
        return var_4; // R1 @var_4
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0c20), arg0);
  }

  static inline data_expression rewr_62_1_term(const application& t) { return rewr_62_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_62_1_term_arg_in_normal_form(const application& t) { return rewr_62_1(t[0]); }


  // [62] pop: Stack -> Stack
  static inline const data_expression& rewr_62_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd7450);
  }

  static inline data_expression rewr_62_0_term(const application&) { return rewr_62_0(); }

  static inline data_expression rewr_62_0_term_arg_in_normal_form(const application&) { return rewr_62_0(); }


  // [73] getcalibrateNow: Stack -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_73_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push, @@N(@@N(@@N(@@S(@var_3, @@N(@@R(@var_3)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f440) // F1
      {
        const data_expression& var_3 = down_cast<data_expression>(arg0[4]); // S2
        return var_3; // R1 @var_3
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f620), arg0);
  }

  static inline data_expression rewr_73_1_term(const application& t) { return rewr_73_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_73_1_term_arg_in_normal_form(const application& t) { return rewr_73_1(t[0]); }


  // [73] getcalibrateNow: Stack -> Bool
  static inline const data_expression& rewr_73_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd73f0);
  }

  static inline data_expression rewr_73_0_term(const application&) { return rewr_73_0(); }

  static inline data_expression rewr_73_0_term_arg_in_normal_form(const application&) { return rewr_73_0(); }


  // [89] getcurrentRecipe: Stack -> Recipe
  template < class DATA_EXPR0>
  static inline data_expression rewr_89_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push, @@N(@@N(@@S(@var_2, @@N(@@N(@@R(@var_2)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f440) // F1
      {
        const data_expression& var_2 = down_cast<data_expression>(arg0[3]); // S2
        return var_2; // R1 @var_2
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2ef90), arg0);
  }

  static inline data_expression rewr_89_1_term(const application& t) { return rewr_89_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_89_1_term_arg_in_normal_form(const application& t) { return rewr_89_1(t[0]); }


  // [89] getcurrentRecipe: Stack -> Recipe
  static inline const data_expression& rewr_89_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf89a0);
  }

  static inline data_expression rewr_89_0_term(const application&) { return rewr_89_0(); }

  static inline data_expression rewr_89_0_term_arg_in_normal_form(const application&) { return rewr_89_0(); }


  // [72] getwafers: Stack -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_72_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push, @@N(@@S(@var_1, @@N(@@N(@@N(@@R(@var_1)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f440) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[2]); // S2
        return var_1; // R1 @var_1
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f680), arg0);
  }

  static inline data_expression rewr_72_1_term(const application& t) { return rewr_72_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_72_1_term_arg_in_normal_form(const application& t) { return rewr_72_1(t[0]); }


  // [72] getwafers: Stack -> Nat
  static inline const data_expression& rewr_72_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c20400);
  }

  static inline data_expression rewr_72_0_term(const application&) { return rewr_72_0(); }

  static inline data_expression rewr_72_0_term_arg_in_normal_form(const application&) { return rewr_72_0(); }


  // [61] getstate: Stack -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_61_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(push, @@S(@var_0, @@N(@@N(@@N(@@N(@@R(@var_0)))))), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2f440) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0c80), arg0);
  }

  static inline data_expression rewr_61_1_term(const application& t) { return rewr_61_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_61_1_term_arg_in_normal_form(const application& t) { return rewr_61_1(t[0]); }


  // [61] getstate: Stack -> Pos
  static inline const data_expression& rewr_61_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c542c0);
  }

  static inline data_expression rewr_61_0_term(const application&) { return rewr_61_0(); }

  static inline data_expression rewr_61_0_term_arg_in_normal_form(const application&) { return rewr_61_0(); }


  // [819] @equal_arguments: Enum5 # Enum5 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_819_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e4_5, @@D(@@N(@@F(e4_5, @@R(true), @@X))), @@F(e0_5, @@D(@@N(@@F(e0_5, @@R(true), @@X))), @@F(e3_5, @@D(@@N(@@F(e3_5, @@R(true), @@X))), @@F(e1_5, @@D(@@N(@@F(e1_5, @@R(true), @@X))), @@F(e2_5, @@D(@@N(@@F(e2_5, @@R(true), @@X))), @@X)))))
    {
      if (uint_address(arg0) == 0x55e3f2c83a60) // F1
      {
        if (uint_address(arg1) == 0x55e3f2c83a60) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c839a0) // F1
        {
          if (uint_address(arg1) == 0x55e3f2c839a0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2c83a30) // F1
          {
            if (uint_address(arg1) == 0x55e3f2c83a30) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2c839d0) // F1
            {
              if (uint_address(arg1) == 0x55e3f2c839d0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
              }
              else
              {
              }
            }
            else
            {
              if (uint_address(arg0) == 0x55e3f2c83a00) // F1
              {
                if (uint_address(arg1) == 0x55e3f2c83a00) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c83880), arg0, arg1);
  }

  static inline data_expression rewr_819_2_term(const application& t) { return rewr_819_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_819_2_term_arg_in_normal_form(const application& t) { return rewr_819_2(t[0], t[1]); }


  // [819] @equal_arguments: Enum5 # Enum5 -> Bool
  static inline const data_expression& rewr_819_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c542f0);
  }

  static inline data_expression rewr_819_0_term(const application&) { return rewr_819_0(); }

  static inline data_expression rewr_819_0_term_arg_in_normal_form(const application&) { return rewr_819_0(); }


  // [818] @to_pos: Enum5 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_818_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e4_5, @@R(1), @@F(e0_5, @@R(5), @@F(e3_5, @@R(2), @@F(e1_5, @@R(4), @@F(e2_5, @@R(3), @@X)))))
    {
      if (uint_address(arg0) == 0x55e3f2c83a60) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c839a0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd4f40); // R1 5
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2c83a30) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2c839d0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2cd4ee0); // R1 4
            }
            else
            {
              if (uint_address(arg0) == 0x55e3f2c83a00) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
              }
              else
              {
              }
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c838b0), arg0);
  }

  static inline data_expression rewr_818_1_term(const application& t) { return rewr_818_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_818_1_term_arg_in_normal_form(const application& t) { return rewr_818_1(t[0]); }


  // [818] @to_pos: Enum5 -> Pos
  static inline const data_expression& rewr_818_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bef710);
  }

  static inline data_expression rewr_818_0_term(const application&) { return rewr_818_0(); }

  static inline data_expression rewr_818_0_term_arg_in_normal_form(const application&) { return rewr_818_0(); }


  // [794] @equal_arguments: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_794_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(Empty, @@D(@@N(@@F(Empty, @@R(true), @@X))), @@F(Notifying, @@D(@@N(@@F(Notifying, @@R(true), @@X))), @@F(Wafer, @@D(@@N(@@F(Wafer, @@R(true), @@X))), @@F(Processed, @@D(@@N(@@F(Processed, @@R(true), @@X))), @@X))))
    {
      if (uint_address(arg0) == 0x55e3f2be1760) // F1
      {
        if (uint_address(arg1) == 0x55e3f2be1760) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be1550) // F1
        {
          if (uint_address(arg1) == 0x55e3f2be1550) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2be1970) // F1
          {
            if (uint_address(arg1) == 0x55e3f2be1970) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2be0a70) // F1
            {
              if (uint_address(arg1) == 0x55e3f2be0a70) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c84720), arg0, arg1);
  }

  static inline data_expression rewr_794_2_term(const application& t) { return rewr_794_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_794_2_term_arg_in_normal_form(const application& t) { return rewr_794_2(t[0], t[1]); }


  // [794] @equal_arguments: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_794_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd7420);
  }

  static inline data_expression rewr_794_0_term(const application&) { return rewr_794_0(); }

  static inline data_expression rewr_794_0_term_arg_in_normal_form(const application&) { return rewr_794_0(); }


  // [793] @to_pos: ChuckStatus -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_793_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(Empty, @@R(1), @@F(Notifying, @@R(4), @@F(Wafer, @@R(2), @@F(Processed, @@R(3), @@X))))
    {
      if (uint_address(arg0) == 0x55e3f2be1760) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be1550) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd4ee0); // R1 4
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2be1970) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2be0a70) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c84750), arg0);
  }

  static inline data_expression rewr_793_1_term(const application& t) { return rewr_793_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_793_1_term_arg_in_normal_form(const application& t) { return rewr_793_1(t[0]); }


  // [793] @to_pos: ChuckStatus -> Pos
  static inline const data_expression& rewr_793_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd7480);
  }

  static inline data_expression rewr_793_0_term(const application&) { return rewr_793_0(); }

  static inline data_expression rewr_793_0_term_arg_in_normal_form(const application&) { return rewr_793_0(); }


  // [775] @equal_arguments: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_775_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(RobotOne, @@D(@@N(@@F(RobotOne, @@R(true), @@X))), @@F(RobotThree, @@D(@@N(@@F(RobotThree, @@R(true), @@X))), @@F(RobotTwo, @@D(@@N(@@F(RobotTwo, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x55e3f2be1cd0) // F1
      {
        if (uint_address(arg1) == 0x55e3f2be1cd0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be13d0) // F1
        {
          if (uint_address(arg1) == 0x55e3f2be13d0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2be13a0) // F1
          {
            if (uint_address(arg1) == 0x55e3f2be13a0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c85380), arg0, arg1);
  }

  static inline data_expression rewr_775_2_term(const application& t) { return rewr_775_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_775_2_term_arg_in_normal_form(const application& t) { return rewr_775_2(t[0], t[1]); }


  // [775] @equal_arguments: Robot # Robot -> Bool
  static inline const data_expression& rewr_775_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c43340);
  }

  static inline data_expression rewr_775_0_term(const application&) { return rewr_775_0(); }

  static inline data_expression rewr_775_0_term_arg_in_normal_form(const application&) { return rewr_775_0(); }


  // [774] @to_pos: Robot -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_774_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(RobotOne, @@R(1), @@F(RobotThree, @@R(3), @@F(RobotTwo, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x55e3f2be1cd0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be13d0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2be13a0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c853b0), arg0);
  }

  static inline data_expression rewr_774_1_term(const application& t) { return rewr_774_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_774_1_term_arg_in_normal_form(const application& t) { return rewr_774_1(t[0]); }


  // [774] @to_pos: Robot -> Pos
  static inline const data_expression& rewr_774_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd74b0);
  }

  static inline data_expression rewr_774_0_term(const application&) { return rewr_774_0(); }

  static inline data_expression rewr_774_0_term_arg_in_normal_form(const application&) { return rewr_774_0(); }


  // [757] @equal_arguments: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_757_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(RecipeOne, @@D(@@N(@@F(RecipeOne, @@R(true), @@X))), @@F(RecipeThree, @@D(@@N(@@F(RecipeThree, @@R(true), @@X))), @@F(RecipeTwo, @@D(@@N(@@F(RecipeTwo, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x55e3f2c2f350) // F1
      {
        if (uint_address(arg1) == 0x55e3f2c2f350) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2c680) // F1
        {
          if (uint_address(arg1) == 0x55e3f2c2c680) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2c2f230) // F1
          {
            if (uint_address(arg1) == 0x55e3f2c2f230) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c75fb0), arg0, arg1);
  }

  static inline data_expression rewr_757_2_term(const application& t) { return rewr_757_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_757_2_term_arg_in_normal_form(const application& t) { return rewr_757_2(t[0], t[1]); }


  // [757] @equal_arguments: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_757_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c54290);
  }

  static inline data_expression rewr_757_0_term(const application&) { return rewr_757_0(); }

  static inline data_expression rewr_757_0_term_arg_in_normal_form(const application&) { return rewr_757_0(); }


  // [756] @to_pos: Recipe -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_756_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(RecipeOne, @@R(1), @@F(RecipeThree, @@R(3), @@F(RecipeTwo, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x55e3f2c2f350) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2c2c680) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2c2f230) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c75fe0), arg0);
  }

  static inline data_expression rewr_756_1_term(const application& t) { return rewr_756_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_756_1_term_arg_in_normal_form(const application& t) { return rewr_756_1(t[0]); }


  // [756] @to_pos: Recipe -> Pos
  static inline const data_expression& rewr_756_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8970);
  }

  static inline data_expression rewr_756_0_term(const application&) { return rewr_756_0(); }

  static inline data_expression rewr_756_0_term_arg_in_normal_form(const application&) { return rewr_756_0(); }


  // [739] @equal_arguments: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_739_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(Tray, @@D(@@N(@@F(Tray, @@R(true), @@X))), @@F(ChuckEmptyTwo, @@D(@@N(@@F(ChuckEmptyTwo, @@R(true), @@X))), @@F(ChuckIn, @@D(@@N(@@F(ChuckIn, @@R(true), @@X))), @@F(ChuckEmptyOne, @@D(@@N(@@F(ChuckEmptyOne, @@R(true), @@X))), @@F(ChuckOut, @@D(@@N(@@F(ChuckOut, @@R(true), @@X))), @@F(ChuckProj, @@D(@@N(@@F(ChuckProj, @@R(true), @@X))), @@F(ChuckMeas, @@D(@@N(@@F(ChuckMeas, @@R(true), @@X))), @@X)))))))
    {
      if (uint_address(arg0) == 0x55e3f2be1be0) // F1
      {
        if (uint_address(arg1) == 0x55e3f2be1be0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be1340) // F1
        {
          if (uint_address(arg1) == 0x55e3f2be1340) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2be1b50) // F1
          {
            if (uint_address(arg1) == 0x55e3f2be1b50) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2be1310) // F1
            {
              if (uint_address(arg1) == 0x55e3f2be1310) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
              }
              else
              {
              }
            }
            else
            {
              if (uint_address(arg0) == 0x55e3f2be1c10) // F1
              {
                if (uint_address(arg1) == 0x55e3f2be1c10) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                }
                else
                {
                }
              }
              else
              {
                if (uint_address(arg0) == 0x55e3f2c77180) // F1
                {
                  if (uint_address(arg1) == 0x55e3f2c77180) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
                  }
                  else
                  {
                  }
                }
                else
                {
                  if (uint_address(arg0) == 0x55e3f2be12e0) // F1
                  {
                    if (uint_address(arg1) == 0x55e3f2be12e0) // F1
                    {
                      return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c77060), arg0, arg1);
  }

  static inline data_expression rewr_739_2_term(const application& t) { return rewr_739_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_739_2_term_arg_in_normal_form(const application& t) { return rewr_739_2(t[0], t[1]); }


  // [739] @equal_arguments: Position # Position -> Bool
  static inline const data_expression& rewr_739_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8740);
  }

  static inline data_expression rewr_739_0_term(const application&) { return rewr_739_0(); }

  static inline data_expression rewr_739_0_term_arg_in_normal_form(const application&) { return rewr_739_0(); }


  // [738] @to_pos: Position -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_738_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(Tray, @@R(1), @@F(ChuckEmptyTwo, @@R(7), @@F(ChuckIn, @@R(2), @@F(ChuckEmptyOne, @@R(6), @@F(ChuckOut, @@R(3), @@F(ChuckProj, @@R(5), @@F(ChuckMeas, @@R(4), @@X)))))))
    {
      if (uint_address(arg0) == 0x55e3f2be1be0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be1340) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2bf4e80); // R1 7
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2be1b50) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c026b0); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x55e3f2be1310) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2cd4fa0); // R1 6
            }
            else
            {
              if (uint_address(arg0) == 0x55e3f2be1c10) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2c206c0); // R1 3
              }
              else
              {
                if (uint_address(arg0) == 0x55e3f2c77180) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x55e3f2cd4f40); // R1 5
                }
                else
                {
                  if (uint_address(arg0) == 0x55e3f2be12e0) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x55e3f2cd4ee0); // R1 4
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c77090), arg0);
  }

  static inline data_expression rewr_738_1_term(const application& t) { return rewr_738_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_738_1_term_arg_in_normal_form(const application& t) { return rewr_738_1(t[0]); }


  // [738] @to_pos: Position -> Pos
  static inline const data_expression& rewr_738_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bef7f0);
  }

  static inline data_expression rewr_738_0_term(const application&) { return rewr_738_0(); }

  static inline data_expression rewr_738_0_term_arg_in_normal_form(const application&) { return rewr_738_0(); }


  // [720] !=: (Bool # Stack4 # Stack4 -> Stack4) # (Bool # Stack4 # Stack4 -> Stack4) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_720_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_719_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c776f0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_720_2_term(const application& t) { return rewr_720_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_720_2_term_arg_in_normal_form(const application& t) { return rewr_720_2(t[0], t[1]); }


  // [720] !=: (Bool # Stack4 # Stack4 -> Stack4) # (Bool # Stack4 # Stack4 -> Stack4) -> Bool
  static inline const data_expression& rewr_720_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfd6b0);
  }

  static inline data_expression rewr_720_0_term(const application&) { return rewr_720_0(); }

  static inline data_expression rewr_720_0_term_arg_in_normal_form(const application&) { return rewr_720_0(); }


  // [719] ==: (Bool # Stack4 # Stack4 -> Stack4) # (Bool # Stack4 # Stack4 -> Stack4) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_719_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Stack4. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(0), rewr_227_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Stack4. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c77720), arg0, arg1);
  }

  static inline data_expression rewr_719_2_term(const application& t) { return rewr_719_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_719_2_term_arg_in_normal_form(const application& t) { return rewr_719_2(t[0], t[1]); }


  // [719] ==: (Bool # Stack4 # Stack4 -> Stack4) # (Bool # Stack4 # Stack4 -> Stack4) -> Bool
  static inline const data_expression& rewr_719_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfd730);
  }

  static inline data_expression rewr_719_0_term(const application&) { return rewr_719_0(); }

  static inline data_expression rewr_719_0_term_arg_in_normal_form(const application&) { return rewr_719_0(); }


  // [713] !=: (Stack4 -> Stack4) # (Stack4 -> Stack4) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_713_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_712_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c77b10), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_713_2_term(const application& t) { return rewr_713_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_713_2_term_arg_in_normal_form(const application& t) { return rewr_713_2(t[0], t[1]); }


  // [713] !=: (Stack4 -> Stack4) # (Stack4 -> Stack4) -> Bool
  static inline const data_expression& rewr_713_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bbb070);
  }

  static inline data_expression rewr_713_0_term(const application&) { return rewr_713_0(); }

  static inline data_expression rewr_713_0_term_arg_in_normal_form(const application&) { return rewr_713_0(); }


  // [712] ==: (Stack4 -> Stack4) # (Stack4 -> Stack4) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_712_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack4. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(1), rewr_227_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Stack4. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c77b40), arg0, arg1);
  }

  static inline data_expression rewr_712_2_term(const application& t) { return rewr_712_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_712_2_term_arg_in_normal_form(const application& t) { return rewr_712_2(t[0], t[1]); }


  // [712] ==: (Stack4 -> Stack4) # (Stack4 -> Stack4) -> Bool
  static inline const data_expression& rewr_712_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf9350);
  }

  static inline data_expression rewr_712_0_term(const application&) { return rewr_712_0(); }

  static inline data_expression rewr_712_0_term_arg_in_normal_form(const application&) { return rewr_712_0(); }


  // [705] !=: (Pos # Nat # Recipe # Bool # Stack4 -> Stack4) # (Pos # Nat # Recipe # Bool # Stack4 -> Stack4) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_705_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_704_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c78050), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_705_2_term(const application& t) { return rewr_705_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_705_2_term_arg_in_normal_form(const application& t) { return rewr_705_2(t[0], t[1]); }


  // [705] !=: (Pos # Nat # Recipe # Bool # Stack4 -> Stack4) # (Pos # Nat # Recipe # Bool # Stack4 -> Stack4) -> Bool
  static inline const data_expression& rewr_705_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8630);
  }

  static inline data_expression rewr_705_0_term(const application&) { return rewr_705_0(); }

  static inline data_expression rewr_705_0_term_arg_in_normal_form(const application&) { return rewr_705_0(); }


  // [704] ==: (Pos # Nat # Recipe # Bool # Stack4 -> Stack4) # (Pos # Nat # Recipe # Bool # Stack4 -> Stack4) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_704_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Pos, x0: Nat, x0: Recipe, x0: Bool, x0: Stack4. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(2), rewr_227_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Pos, x0: Nat, x0: Recipe, x0: Bool, x0: Stack4. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c78080), arg0, arg1);
  }

  static inline data_expression rewr_704_2_term(const application& t) { return rewr_704_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_704_2_term_arg_in_normal_form(const application& t) { return rewr_704_2(t[0], t[1]); }


  // [704] ==: (Pos # Nat # Recipe # Bool # Stack4 -> Stack4) # (Pos # Nat # Recipe # Bool # Stack4 -> Stack4) -> Bool
  static inline const data_expression& rewr_704_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8690);
  }

  static inline data_expression rewr_704_0_term(const application&) { return rewr_704_0(); }

  static inline data_expression rewr_704_0_term_arg_in_normal_form(const application&) { return rewr_704_0(); }


  // [698] !=: (Stack -> Recipe) # (Stack -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_698_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_697_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c78470), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_698_2_term(const application& t) { return rewr_698_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_698_2_term_arg_in_normal_form(const application& t) { return rewr_698_2(t[0], t[1]); }


  // [698] !=: (Stack -> Recipe) # (Stack -> Recipe) -> Bool
  static inline const data_expression& rewr_698_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf86f0);
  }

  static inline data_expression rewr_698_0_term(const application&) { return rewr_698_0(); }

  static inline data_expression rewr_698_0_term_arg_in_normal_form(const application&) { return rewr_698_0(); }


  // [697] ==: (Stack -> Recipe) # (Stack -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_697_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(3), rewr_174_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Stack. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c784a0), arg0, arg1);
  }

  static inline data_expression rewr_697_2_term(const application& t) { return rewr_697_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_697_2_term_arg_in_normal_form(const application& t) { return rewr_697_2(t[0], t[1]); }


  // [697] ==: (Stack -> Recipe) # (Stack -> Recipe) -> Bool
  static inline const data_expression& rewr_697_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfcbb0);
  }

  static inline data_expression rewr_697_0_term(const application&) { return rewr_697_0(); }

  static inline data_expression rewr_697_0_term_arg_in_normal_form(const application&) { return rewr_697_0(); }


  // [690] !=: (Stack1 -> Robot) # (Stack1 -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_690_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_689_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c78920), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_690_2_term(const application& t) { return rewr_690_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_690_2_term_arg_in_normal_form(const application& t) { return rewr_690_2(t[0], t[1]); }


  // [690] !=: (Stack1 -> Robot) # (Stack1 -> Robot) -> Bool
  static inline const data_expression& rewr_690_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c024a0);
  }

  static inline data_expression rewr_690_0_term(const application&) { return rewr_690_0(); }

  static inline data_expression rewr_690_0_term_arg_in_normal_form(const application&) { return rewr_690_0(); }


  // [689] ==: (Stack1 -> Robot) # (Stack1 -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_689_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack1. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_17_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6))))), true, sigma())); // R1 forall x0: Stack1. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c78950), arg0, arg1);
  }

  static inline data_expression rewr_689_2_term(const application& t) { return rewr_689_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_689_2_term_arg_in_normal_form(const application& t) { return rewr_689_2(t[0], t[1]); }


  // [689] ==: (Stack1 -> Robot) # (Stack1 -> Robot) -> Bool
  static inline const data_expression& rewr_689_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c02500);
  }

  static inline data_expression rewr_689_0_term(const application&) { return rewr_689_0(); }

  static inline data_expression rewr_689_0_term_arg_in_normal_form(const application&) { return rewr_689_0(); }


  // [682] !=: (Stack1 -> Position) # (Stack1 -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_682_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_681_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c78dd0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_682_2_term(const application& t) { return rewr_682_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_682_2_term_arg_in_normal_form(const application& t) { return rewr_682_2(t[0], t[1]); }


  // [682] !=: (Stack1 -> Position) # (Stack1 -> Position) -> Bool
  static inline const data_expression& rewr_682_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c02430);
  }

  static inline data_expression rewr_682_0_term(const application&) { return rewr_682_0(); }

  static inline data_expression rewr_682_0_term_arg_in_normal_form(const application&) { return rewr_682_0(); }


  // [681] ==: (Stack1 -> Position) # (Stack1 -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_681_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack1. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_19_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6))))), true, sigma())); // R1 forall x0: Stack1. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c78e00), arg0, arg1);
  }

  static inline data_expression rewr_681_2_term(const application& t) { return rewr_681_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_681_2_term_arg_in_normal_form(const application& t) { return rewr_681_2(t[0], t[1]); }


  // [681] ==: (Stack1 -> Position) # (Stack1 -> Position) -> Bool
  static inline const data_expression& rewr_681_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf86c0);
  }

  static inline data_expression rewr_681_0_term(const application&) { return rewr_681_0(); }

  static inline data_expression rewr_681_0_term_arg_in_normal_form(const application&) { return rewr_681_0(); }


  // [674] !=: (Stack2 -> Robot) # (Stack2 -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_674_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_673_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c79280), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_674_2_term(const application& t) { return rewr_674_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_674_2_term_arg_in_normal_form(const application& t) { return rewr_674_2(t[0], t[1]); }


  // [674] !=: (Stack2 -> Robot) # (Stack2 -> Robot) -> Bool
  static inline const data_expression& rewr_674_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c02530);
  }

  static inline data_expression rewr_674_0_term(const application&) { return rewr_674_0(); }

  static inline data_expression rewr_674_0_term_arg_in_normal_form(const application&) { return rewr_674_0(); }


  // [673] ==: (Stack2 -> Robot) # (Stack2 -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_673_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack2. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(5), rewr_17_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Stack2. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c792b0), arg0, arg1);
  }

  static inline data_expression rewr_673_2_term(const application& t) { return rewr_673_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_673_2_term_arg_in_normal_form(const application& t) { return rewr_673_2(t[0], t[1]); }


  // [673] ==: (Stack2 -> Robot) # (Stack2 -> Robot) -> Bool
  static inline const data_expression& rewr_673_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bbae20);
  }

  static inline data_expression rewr_673_0_term(const application&) { return rewr_673_0(); }

  static inline data_expression rewr_673_0_term_arg_in_normal_form(const application&) { return rewr_673_0(); }


  // [666] !=: (Stack2 -> Position) # (Stack2 -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_666_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_665_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c69720), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_666_2_term(const application& t) { return rewr_666_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_666_2_term_arg_in_normal_form(const application& t) { return rewr_666_2(t[0], t[1]); }


  // [666] !=: (Stack2 -> Position) # (Stack2 -> Position) -> Bool
  static inline const data_expression& rewr_666_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bbaf60);
  }

  static inline data_expression rewr_666_0_term(const application&) { return rewr_666_0(); }

  static inline data_expression rewr_666_0_term_arg_in_normal_form(const application&) { return rewr_666_0(); }


  // [665] ==: (Stack2 -> Position) # (Stack2 -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_665_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack2. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(5), rewr_19_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Stack2. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c69750), arg0, arg1);
  }

  static inline data_expression rewr_665_2_term(const application& t) { return rewr_665_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_665_2_term_arg_in_normal_form(const application& t) { return rewr_665_2(t[0], t[1]); }


  // [665] ==: (Stack2 -> Position) # (Stack2 -> Position) -> Bool
  static inline const data_expression& rewr_665_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c024d0);
  }

  static inline data_expression rewr_665_0_term(const application&) { return rewr_665_0(); }

  static inline data_expression rewr_665_0_term_arg_in_normal_form(const application&) { return rewr_665_0(); }


  // [658] !=: (Bool -> Bool) # (Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_658_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_657_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c69bd0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_658_2_term(const application& t) { return rewr_658_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_658_2_term_arg_in_normal_form(const application& t) { return rewr_658_2(t[0], t[1]); }


  // [658] !=: (Bool -> Bool) # (Bool -> Bool) -> Bool
  static inline const data_expression& rewr_658_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf3140);
  }

  static inline data_expression rewr_658_0_term(const application&) { return rewr_658_0(); }

  static inline data_expression rewr_658_0_term_arg_in_normal_form(const application&) { return rewr_658_0(); }


  // [657] ==: (Bool -> Bool) # (Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_657_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(6), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), true, sigma())); // R1 forall x0: Bool. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c69c00), arg0, arg1);
  }

  static inline data_expression rewr_657_2_term(const application& t) { return rewr_657_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_657_2_term_arg_in_normal_form(const application& t) { return rewr_657_2(t[0], t[1]); }


  // [657] ==: (Bool -> Bool) # (Bool -> Bool) -> Bool
  static inline const data_expression& rewr_657_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bbaf10);
  }

  static inline data_expression rewr_657_0_term(const application&) { return rewr_657_0(); }

  static inline data_expression rewr_657_0_term_arg_in_normal_form(const application&) { return rewr_657_0(); }


  // [650] !=: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_650_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_649_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6a110), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_650_2_term(const application& t) { return rewr_650_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_650_2_term_arg_in_normal_form(const application& t) { return rewr_650_2(t[0], t[1]); }


  // [650] !=: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_650_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfcb80);
  }

  static inline data_expression rewr_650_0_term(const application&) { return rewr_650_0(); }

  static inline data_expression rewr_650_0_term_arg_in_normal_form(const application&) { return rewr_650_0(); }


  // [649] ==: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_649_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Bool. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(7), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), true, sigma())); // R1 forall x0,x0: Bool. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6a140), arg0, arg1);
  }

  static inline data_expression rewr_649_2_term(const application& t) { return rewr_649_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_649_2_term_arg_in_normal_form(const application& t) { return rewr_649_2(t[0], t[1]); }


  // [649] ==: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_649_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf0c90);
  }

  static inline data_expression rewr_649_0_term(const application&) { return rewr_649_0(); }

  static inline data_expression rewr_649_0_term_arg_in_normal_form(const application&) { return rewr_649_0(); }


  // [643] !=: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_643_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_642_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6a5c0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_643_2_term(const application& t) { return rewr_643_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_643_2_term_arg_in_normal_form(const application& t) { return rewr_643_2(t[0], t[1]); }


  // [643] !=: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  static inline const data_expression& rewr_643_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cefde0);
  }

  static inline data_expression rewr_643_0_term(const application&) { return rewr_643_0(); }

  static inline data_expression rewr_643_0_term_arg_in_normal_form(const application&) { return rewr_643_0(); }


  // [642] ==: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_642_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Robot. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(8), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(8)),static_cast<data_expression>(this_rewriter->bound_variable_get(8)))), true, sigma())); // R1 forall x0,x0: Robot. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6a5f0), arg0, arg1);
  }

  static inline data_expression rewr_642_2_term(const application& t) { return rewr_642_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_642_2_term_arg_in_normal_form(const application& t) { return rewr_642_2(t[0], t[1]); }


  // [642] ==: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  static inline const data_expression& rewr_642_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8660);
  }

  static inline data_expression rewr_642_0_term(const application&) { return rewr_642_0(); }

  static inline data_expression rewr_642_0_term_arg_in_normal_form(const application&) { return rewr_642_0(); }


  // [636] !=: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_636_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_635_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6aa70), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_636_2_term(const application& t) { return rewr_636_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_636_2_term_arg_in_normal_form(const application& t) { return rewr_636_2(t[0], t[1]); }


  // [636] !=: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  static inline const data_expression& rewr_636_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf1a30);
  }

  static inline data_expression rewr_636_0_term(const application&) { return rewr_636_0(); }

  static inline data_expression rewr_636_0_term_arg_in_normal_form(const application&) { return rewr_636_0(); }


  // [635] ==: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_635_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Position. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(9), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(9)),static_cast<data_expression>(this_rewriter->bound_variable_get(9)))), true, sigma())); // R1 forall x0,x0: Position. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6aaa0), arg0, arg1);
  }

  static inline data_expression rewr_635_2_term(const application& t) { return rewr_635_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_635_2_term_arg_in_normal_form(const application& t) { return rewr_635_2(t[0], t[1]); }


  // [635] ==: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  static inline const data_expression& rewr_635_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf1a60);
  }

  static inline data_expression rewr_635_0_term(const application&) { return rewr_635_0(); }

  static inline data_expression rewr_635_0_term_arg_in_normal_form(const application&) { return rewr_635_0(); }


  // [629] !=: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_629_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_628_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6aec0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_629_2_term(const application& t) { return rewr_629_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_629_2_term_arg_in_normal_form(const application& t) { return rewr_629_2(t[0], t[1]); }


  // [629] !=: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_629_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf2170);
  }

  static inline data_expression rewr_629_0_term(const application&) { return rewr_629_0(); }

  static inline data_expression rewr_629_0_term_arg_in_normal_form(const application&) { return rewr_629_0(); }


  // [628] ==: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_628_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Position. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(10), rewr_19_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Position. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6aef0), arg0, arg1);
  }

  static inline data_expression rewr_628_2_term(const application& t) { return rewr_628_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_628_2_term_arg_in_normal_form(const application& t) { return rewr_628_2(t[0], t[1]); }


  // [628] ==: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_628_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf04c0);
  }

  static inline data_expression rewr_628_0_term(const application&) { return rewr_628_0(); }

  static inline data_expression rewr_628_0_term_arg_in_normal_form(const application&) { return rewr_628_0(); }


  // [622] !=: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_622_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_621_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6b310), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_622_2_term(const application& t) { return rewr_622_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_622_2_term_arg_in_normal_form(const application& t) { return rewr_622_2(t[0], t[1]); }


  // [622] !=: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_622_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf0b30);
  }

  static inline data_expression rewr_622_0_term(const application&) { return rewr_622_0(); }

  static inline data_expression rewr_622_0_term_arg_in_normal_form(const application&) { return rewr_622_0(); }


  // [621] ==: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_621_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0,x0: Bool. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(11), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), delayed_application3<data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), true, sigma())); // R1 forall x0,x0,x0: Bool. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6b340), arg0, arg1);
  }

  static inline data_expression rewr_621_2_term(const application& t) { return rewr_621_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_621_2_term_arg_in_normal_form(const application& t) { return rewr_621_2(t[0], t[1]); }


  // [621] ==: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_621_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cefdb0);
  }

  static inline data_expression rewr_621_0_term(const application&) { return rewr_621_0(); }

  static inline data_expression rewr_621_0_term_arg_in_normal_form(const application&) { return rewr_621_0(); }


  // [615] !=: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_615_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_614_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6b7c0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_615_2_term(const application& t) { return rewr_615_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_615_2_term_arg_in_normal_form(const application& t) { return rewr_615_2(t[0], t[1]); }


  // [615] !=: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  static inline const data_expression& rewr_615_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf21a0);
  }

  static inline data_expression rewr_615_0_term(const application&) { return rewr_615_0(); }

  static inline data_expression rewr_615_0_term_arg_in_normal_form(const application&) { return rewr_615_0(); }


  // [614] ==: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_614_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(12), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(2)),static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), true, sigma())); // R1 forall x0,x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6b7f0), arg0, arg1);
  }

  static inline data_expression rewr_614_2_term(const application& t) { return rewr_614_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_614_2_term_arg_in_normal_form(const application& t) { return rewr_614_2(t[0], t[1]); }


  // [614] ==: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  static inline const data_expression& rewr_614_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf0cc0);
  }

  static inline data_expression rewr_614_0_term(const application&) { return rewr_614_0(); }

  static inline data_expression rewr_614_0_term_arg_in_normal_form(const application&) { return rewr_614_0(); }


  // [608] !=: (Stack1 -> Pos) # (Stack1 -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_608_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_607_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6bbe0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_608_2_term(const application& t) { return rewr_608_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_608_2_term_arg_in_normal_form(const application& t) { return rewr_608_2(t[0], t[1]); }


  // [608] !=: (Stack1 -> Pos) # (Stack1 -> Pos) -> Bool
  static inline const data_expression& rewr_608_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf1310);
  }

  static inline data_expression rewr_608_0_term(const application&) { return rewr_608_0(); }

  static inline data_expression rewr_608_0_term_arg_in_normal_form(const application&) { return rewr_608_0(); }


  // [607] ==: (Stack1 -> Pos) # (Stack1 -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_607_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack1. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_25_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6))))), true, sigma())); // R1 forall x0: Stack1. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6bc10), arg0, arg1);
  }

  static inline data_expression rewr_607_2_term(const application& t) { return rewr_607_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_607_2_term_arg_in_normal_form(const application& t) { return rewr_607_2(t[0], t[1]); }


  // [607] ==: (Stack1 -> Pos) # (Stack1 -> Pos) -> Bool
  static inline const data_expression& rewr_607_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf0470);
  }

  static inline data_expression rewr_607_0_term(const application&) { return rewr_607_0(); }

  static inline data_expression rewr_607_0_term_arg_in_normal_form(const application&) { return rewr_607_0(); }


  // [600] !=: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_600_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_599_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6c120), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_600_2_term(const application& t) { return rewr_600_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_600_2_term_arg_in_normal_form(const application& t) { return rewr_600_2(t[0], t[1]); }


  // [600] !=: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  static inline const data_expression& rewr_600_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf1340);
  }

  static inline data_expression rewr_600_0_term(const application&) { return rewr_600_0(); }

  static inline data_expression rewr_600_0_term_arg_in_normal_form(const application&) { return rewr_600_0(); }


  // [599] ==: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_599_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: ChuckStatus. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(13), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(10)),static_cast<data_expression>(this_rewriter->bound_variable_get(10)))), true, sigma())); // R1 forall x0,x0: ChuckStatus. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6c150), arg0, arg1);
  }

  static inline data_expression rewr_599_2_term(const application& t) { return rewr_599_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_599_2_term_arg_in_normal_form(const application& t) { return rewr_599_2(t[0], t[1]); }


  // [599] ==: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  static inline const data_expression& rewr_599_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cef5a0);
  }

  static inline data_expression rewr_599_0_term(const application&) { return rewr_599_0(); }

  static inline data_expression rewr_599_0_term_arg_in_normal_form(const application&) { return rewr_599_0(); }


  // [593] !=: (Stack1 -> ChuckStatus) # (Stack1 -> ChuckStatus) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_593_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_592_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6c540), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_593_2_term(const application& t) { return rewr_593_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_593_2_term_arg_in_normal_form(const application& t) { return rewr_593_2(t[0], t[1]); }


  // [593] !=: (Stack1 -> ChuckStatus) # (Stack1 -> ChuckStatus) -> Bool
  static inline const data_expression& rewr_593_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cef660);
  }

  static inline data_expression rewr_593_0_term(const application&) { return rewr_593_0(); }

  static inline data_expression rewr_593_0_term_arg_in_normal_form(const application&) { return rewr_593_0(); }


  // [592] ==: (Stack1 -> ChuckStatus) # (Stack1 -> ChuckStatus) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_592_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack1. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_28_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6))))), true, sigma())); // R1 forall x0: Stack1. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6c570), arg0, arg1);
  }

  static inline data_expression rewr_592_2_term(const application& t) { return rewr_592_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_592_2_term_arg_in_normal_form(const application& t) { return rewr_592_2(t[0], t[1]); }


  // [592] ==: (Stack1 -> ChuckStatus) # (Stack1 -> ChuckStatus) -> Bool
  static inline const data_expression& rewr_592_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf12b0);
  }

  static inline data_expression rewr_592_0_term(const application&) { return rewr_592_0(); }

  static inline data_expression rewr_592_0_term_arg_in_normal_form(const application&) { return rewr_592_0(); }


  // [585] !=: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_585_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_584_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6cae0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_585_2_term(const application& t) { return rewr_585_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_585_2_term_arg_in_normal_form(const application& t) { return rewr_585_2(t[0], t[1]); }


  // [585] !=: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  static inline const data_expression& rewr_585_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cef570);
  }

  static inline data_expression rewr_585_0_term(const application&) { return rewr_585_0(); }

  static inline data_expression rewr_585_0_term_arg_in_normal_form(const application&) { return rewr_585_0(); }


  // [584] ==: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_584_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(14), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(3)),static_cast<data_expression>(this_rewriter->bound_variable_get(3)))), true, sigma())); // R1 forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6cb10), arg0, arg1);
  }

  static inline data_expression rewr_584_2_term(const application& t) { return rewr_584_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_584_2_term_arg_in_normal_form(const application& t) { return rewr_584_2(t[0], t[1]); }


  // [584] ==: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  static inline const data_expression& rewr_584_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cef630);
  }

  static inline data_expression rewr_584_0_term(const application&) { return rewr_584_0(); }

  static inline data_expression rewr_584_0_term_arg_in_normal_form(const application&) { return rewr_584_0(); }


  // [578] !=: (Stack1 -> Nat) # (Stack1 -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_578_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_577_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6cf00), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_578_2_term(const application& t) { return rewr_578_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_578_2_term_arg_in_normal_form(const application& t) { return rewr_578_2(t[0], t[1]); }


  // [578] !=: (Stack1 -> Nat) # (Stack1 -> Nat) -> Bool
  static inline const data_expression& rewr_578_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8b70);
  }

  static inline data_expression rewr_578_0_term(const application&) { return rewr_578_0(); }

  static inline data_expression rewr_578_0_term_arg_in_normal_form(const application&) { return rewr_578_0(); }


  // [577] ==: (Stack1 -> Nat) # (Stack1 -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_577_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack1. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_71_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6))))), true, sigma())); // R1 forall x0: Stack1. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6cf30), arg0, arg1);
  }

  static inline data_expression rewr_577_2_term(const application& t) { return rewr_577_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_577_2_term_arg_in_normal_form(const application& t) { return rewr_577_2(t[0], t[1]); }


  // [577] ==: (Stack1 -> Nat) # (Stack1 -> Nat) -> Bool
  static inline const data_expression& rewr_577_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfc040);
  }

  static inline data_expression rewr_577_0_term(const application&) { return rewr_577_0(); }

  static inline data_expression rewr_577_0_term_arg_in_normal_form(const application&) { return rewr_577_0(); }


  // [570] !=: (Stack1 -> Bool) # (Stack1 -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_570_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_569_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6d3b0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_570_2_term(const application& t) { return rewr_570_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_570_2_term_arg_in_normal_form(const application& t) { return rewr_570_2(t[0], t[1]); }


  // [570] !=: (Stack1 -> Bool) # (Stack1 -> Bool) -> Bool
  static inline const data_expression& rewr_570_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c30360);
  }

  static inline data_expression rewr_570_0_term(const application&) { return rewr_570_0(); }

  static inline data_expression rewr_570_0_term_arg_in_normal_form(const application&) { return rewr_570_0(); }


  // [569] ==: (Stack1 -> Bool) # (Stack1 -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_569_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack1. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), true, sigma())); // R1 forall x0: Stack1. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c6d3e0), arg0, arg1);
  }

  static inline data_expression rewr_569_2_term(const application& t) { return rewr_569_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_569_2_term_arg_in_normal_form(const application& t) { return rewr_569_2(t[0], t[1]); }


  // [569] ==: (Stack1 -> Bool) # (Stack1 -> Bool) -> Bool
  static inline const data_expression& rewr_569_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8d50);
  }

  static inline data_expression rewr_569_0_term(const application&) { return rewr_569_0(); }

  static inline data_expression rewr_569_0_term_arg_in_normal_form(const application&) { return rewr_569_0(); }


  // [562] !=: (Bool # Stack1 # Stack1 -> Stack1) # (Bool # Stack1 # Stack1 -> Stack1) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_562_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_561_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c61890), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_562_2_term(const application& t) { return rewr_562_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_562_2_term_arg_in_normal_form(const application& t) { return rewr_562_2(t[0], t[1]); }


  // [562] !=: (Bool # Stack1 # Stack1 -> Stack1) # (Bool # Stack1 # Stack1 -> Stack1) -> Bool
  static inline const data_expression& rewr_562_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf12e0);
  }

  static inline data_expression rewr_562_0_term(const application&) { return rewr_562_0(); }

  static inline data_expression rewr_562_0_term_arg_in_normal_form(const application&) { return rewr_562_0(); }


  // [561] ==: (Bool # Stack1 # Stack1 -> Stack1) # (Bool # Stack1 # Stack1 -> Stack1) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_561_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Stack1. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(15), rewr_266_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(6))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Stack1. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c618c0), arg0, arg1);
  }

  static inline data_expression rewr_561_2_term(const application& t) { return rewr_561_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_561_2_term_arg_in_normal_form(const application& t) { return rewr_561_2(t[0], t[1]); }


  // [561] ==: (Bool # Stack1 # Stack1 -> Stack1) # (Bool # Stack1 # Stack1 -> Stack1) -> Bool
  static inline const data_expression& rewr_561_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cef600);
  }

  static inline data_expression rewr_561_0_term(const application&) { return rewr_561_0(); }

  static inline data_expression rewr_561_0_term_arg_in_normal_form(const application&) { return rewr_561_0(); }


  // [555] !=: (Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1) # (Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_555_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_554_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c61d10), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_555_2_term(const application& t) { return rewr_555_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_555_2_term_arg_in_normal_form(const application& t) { return rewr_555_2(t[0], t[1]); }


  // [555] !=: (Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1) # (Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1) -> Bool
  static inline const data_expression& rewr_555_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c304c0);
  }

  static inline data_expression rewr_555_0_term(const application&) { return rewr_555_0(); }

  static inline data_expression rewr_555_0_term_arg_in_normal_form(const application&) { return rewr_555_0(); }


  // [554] ==: (Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1) # (Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_554_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Pos, x0: Robot, x0,x0: Position, x0: Bool, x0,x0: Nat, x0,x0: ChuckStatus, x0: Stack1. @var_0(x0, x0, x0, x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(16), rewr_266_2(rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(10)), static_cast<data_expression>(this_rewriter->bound_variable_get(6))))), true, sigma())); // R1 forall x0: Pos, x0: Robot, x0,x0: Position, x0: Bool, x0,x0: Nat, x0,x0: ChuckStatus, x0: Stack1. @var_0(x0, x0, x0, x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c61d40), arg0, arg1);
  }

  static inline data_expression rewr_554_2_term(const application& t) { return rewr_554_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_554_2_term_arg_in_normal_form(const application& t) { return rewr_554_2(t[0], t[1]); }


  // [554] ==: (Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1) # (Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1) -> Bool
  static inline const data_expression& rewr_554_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cee6f0);
  }

  static inline data_expression rewr_554_0_term(const application&) { return rewr_554_0(); }

  static inline data_expression rewr_554_0_term_arg_in_normal_form(const application&) { return rewr_554_0(); }


  // [548] !=: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_548_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_547_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c621c0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_548_2_term(const application& t) { return rewr_548_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_548_2_term_arg_in_normal_form(const application& t) { return rewr_548_2(t[0], t[1]); }


  // [548] !=: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_548_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd8ca0);
  }

  static inline data_expression rewr_548_0_term(const application&) { return rewr_548_0(); }

  static inline data_expression rewr_548_0_term_arg_in_normal_form(const application&) { return rewr_548_0(); }


  // [547] ==: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_547_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(17), rewr_25_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Bool, x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c621f0), arg0, arg1);
  }

  static inline data_expression rewr_547_2_term(const application& t) { return rewr_547_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_547_2_term_arg_in_normal_form(const application& t) { return rewr_547_2(t[0], t[1]); }


  // [547] ==: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_547_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cee7e0);
  }

  static inline data_expression rewr_547_0_term(const application&) { return rewr_547_0(); }

  static inline data_expression rewr_547_0_term_arg_in_normal_form(const application&) { return rewr_547_0(); }


  // [541] !=: (Int -> Nat) # (Int -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_541_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_540_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c62610), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_541_2_term(const application& t) { return rewr_541_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_541_2_term_arg_in_normal_form(const application& t) { return rewr_541_2(t[0], t[1]); }


  // [541] !=: (Int -> Nat) # (Int -> Nat) -> Bool
  static inline const data_expression& rewr_541_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd8cd0);
  }

  static inline data_expression rewr_541_0_term(const application&) { return rewr_541_0(); }

  static inline data_expression rewr_541_0_term_arg_in_normal_form(const application&) { return rewr_541_0(); }


  // [540] ==: (Int -> Nat) # (Int -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_540_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Int. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(18), rewr_71_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(11)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(11))))), true, sigma())); // R1 forall x0: Int. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c62640), arg0, arg1);
  }

  static inline data_expression rewr_540_2_term(const application& t) { return rewr_540_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_540_2_term_arg_in_normal_form(const application& t) { return rewr_540_2(t[0], t[1]); }


  // [540] ==: (Int -> Nat) # (Int -> Nat) -> Bool
  static inline const data_expression& rewr_540_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd8d00);
  }

  static inline data_expression rewr_540_0_term(const application&) { return rewr_540_0(); }

  static inline data_expression rewr_540_0_term_arg_in_normal_form(const application&) { return rewr_540_0(); }


  // [533] !=: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_533_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_532_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c62b50), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_533_2_term(const application& t) { return rewr_533_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_533_2_term_arg_in_normal_form(const application& t) { return rewr_533_2(t[0], t[1]); }


  // [533] !=: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  static inline const data_expression& rewr_533_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cee810);
  }

  static inline data_expression rewr_533_0_term(const application&) { return rewr_533_0(); }

  static inline data_expression rewr_533_0_term_arg_in_normal_form(const application&) { return rewr_533_0(); }


  // [532] ==: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_532_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(14), rewr_326_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3))))), true, sigma())); // R1 forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c62b80), arg0, arg1);
  }

  static inline data_expression rewr_532_2_term(const application& t) { return rewr_532_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_532_2_term_arg_in_normal_form(const application& t) { return rewr_532_2(t[0], t[1]); }


  // [532] ==: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  static inline const data_expression& rewr_532_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf8c60);
  }

  static inline data_expression rewr_532_0_term(const application&) { return rewr_532_0(); }

  static inline data_expression rewr_532_0_term_arg_in_normal_form(const application&) { return rewr_532_0(); }


  // [526] !=: (Pos -> Nat) # (Pos -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_526_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_525_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c62f70), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_526_2_term(const application& t) { return rewr_526_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_526_2_term_arg_in_normal_form(const application& t) { return rewr_526_2(t[0], t[1]); }


  // [526] !=: (Pos -> Nat) # (Pos -> Nat) -> Bool
  static inline const data_expression& rewr_526_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfc940);
  }

  static inline data_expression rewr_526_0_term(const application&) { return rewr_526_0(); }

  static inline data_expression rewr_526_0_term_arg_in_normal_form(const application&) { return rewr_526_0(); }


  // [525] ==: (Pos -> Nat) # (Pos -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_525_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Pos. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(19), rewr_71_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Pos. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c62fa0), arg0, arg1);
  }

  static inline data_expression rewr_525_2_term(const application& t) { return rewr_525_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_525_2_term_arg_in_normal_form(const application& t) { return rewr_525_2(t[0], t[1]); }


  // [525] ==: (Pos -> Nat) # (Pos -> Nat) -> Bool
  static inline const data_expression& rewr_525_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cee840);
  }

  static inline data_expression rewr_525_0_term(const application&) { return rewr_525_0(); }

  static inline data_expression rewr_525_0_term_arg_in_normal_form(const application&) { return rewr_525_0(); }


  // [518] !=: (Stack2 -> Pos) # (Stack2 -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_518_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_517_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c63420), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_518_2_term(const application& t) { return rewr_518_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_518_2_term_arg_in_normal_form(const application& t) { return rewr_518_2(t[0], t[1]); }


  // [518] !=: (Stack2 -> Pos) # (Stack2 -> Pos) -> Bool
  static inline const data_expression& rewr_518_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cef5d0);
  }

  static inline data_expression rewr_518_0_term(const application&) { return rewr_518_0(); }

  static inline data_expression rewr_518_0_term_arg_in_normal_form(const application&) { return rewr_518_0(); }


  // [517] ==: (Stack2 -> Pos) # (Stack2 -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_517_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack2. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(5), rewr_25_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Stack2. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c63450), arg0, arg1);
  }

  static inline data_expression rewr_517_2_term(const application& t) { return rewr_517_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_517_2_term_arg_in_normal_form(const application& t) { return rewr_517_2(t[0], t[1]); }


  // [517] ==: (Stack2 -> Pos) # (Stack2 -> Pos) -> Bool
  static inline const data_expression& rewr_517_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cee0a0);
  }

  static inline data_expression rewr_517_0_term(const application&) { return rewr_517_0(); }

  static inline data_expression rewr_517_0_term_arg_in_normal_form(const application&) { return rewr_517_0(); }


  // [510] !=: (Stack2 -> Bool) # (Stack2 -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_510_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_509_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c638d0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_510_2_term(const application& t) { return rewr_510_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_510_2_term_arg_in_normal_form(const application& t) { return rewr_510_2(t[0], t[1]); }


  // [510] !=: (Stack2 -> Bool) # (Stack2 -> Bool) -> Bool
  static inline const data_expression& rewr_510_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfc970);
  }

  static inline data_expression rewr_510_0_term(const application&) { return rewr_510_0(); }

  static inline data_expression rewr_510_0_term_arg_in_normal_form(const application&) { return rewr_510_0(); }


  // [509] ==: (Stack2 -> Bool) # (Stack2 -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_509_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack2. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(5), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), true, sigma())); // R1 forall x0: Stack2. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c63900), arg0, arg1);
  }

  static inline data_expression rewr_509_2_term(const application& t) { return rewr_509_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_509_2_term_arg_in_normal_form(const application& t) { return rewr_509_2(t[0], t[1]); }


  // [509] ==: (Stack2 -> Bool) # (Stack2 -> Bool) -> Bool
  static inline const data_expression& rewr_509_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c30490);
  }

  static inline data_expression rewr_509_0_term(const application&) { return rewr_509_0(); }

  static inline data_expression rewr_509_0_term_arg_in_normal_form(const application&) { return rewr_509_0(); }


  // [502] !=: (Pos # Robot # Position # Position # Bool # Stack2 -> Stack2) # (Pos # Robot # Position # Position # Bool # Stack2 -> Stack2) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_502_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_501_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c63db0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_502_2_term(const application& t) { return rewr_502_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_502_2_term_arg_in_normal_form(const application& t) { return rewr_502_2(t[0], t[1]); }


  // [502] !=: (Pos # Robot # Position # Position # Bool # Stack2 -> Stack2) # (Pos # Robot # Position # Position # Bool # Stack2 -> Stack2) -> Bool
  static inline const data_expression& rewr_502_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cee7b0);
  }

  static inline data_expression rewr_502_0_term(const application&) { return rewr_502_0(); }

  static inline data_expression rewr_502_0_term_arg_in_normal_form(const application&) { return rewr_502_0(); }


  // [501] ==: (Pos # Robot # Position # Position # Bool # Stack2 -> Stack2) # (Pos # Robot # Position # Position # Bool # Stack2 -> Stack2) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_501_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Pos, x0: Robot, x0,x0: Position, x0: Bool, x0: Stack2. @var_0(x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(20), rewr_205_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Pos, x0: Robot, x0,x0: Position, x0: Bool, x0: Stack2. @var_0(x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c63de0), arg0, arg1);
  }

  static inline data_expression rewr_501_2_term(const application& t) { return rewr_501_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_501_2_term_arg_in_normal_form(const application& t) { return rewr_501_2(t[0], t[1]); }


  // [501] ==: (Pos # Robot # Position # Position # Bool # Stack2 -> Stack2) # (Pos # Robot # Position # Position # Bool # Stack2 -> Stack2) -> Bool
  static inline const data_expression& rewr_501_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2beaa70);
  }

  static inline data_expression rewr_501_0_term(const application&) { return rewr_501_0(); }

  static inline data_expression rewr_501_0_term_arg_in_normal_form(const application&) { return rewr_501_0(); }


  // [495] !=: (Stack2 -> Stack2) # (Stack2 -> Stack2) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_495_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_494_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c641d0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_495_2_term(const application& t) { return rewr_495_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_495_2_term_arg_in_normal_form(const application& t) { return rewr_495_2(t[0], t[1]); }


  // [495] !=: (Stack2 -> Stack2) # (Stack2 -> Stack2) -> Bool
  static inline const data_expression& rewr_495_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf3860);
  }

  static inline data_expression rewr_495_0_term(const application&) { return rewr_495_0(); }

  static inline data_expression rewr_495_0_term_arg_in_normal_form(const application&) { return rewr_495_0(); }


  // [494] ==: (Stack2 -> Stack2) # (Stack2 -> Stack2) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_494_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack2. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(5), rewr_205_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Stack2. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c64200), arg0, arg1);
  }

  static inline data_expression rewr_494_2_term(const application& t) { return rewr_494_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_494_2_term_arg_in_normal_form(const application& t) { return rewr_494_2(t[0], t[1]); }


  // [494] ==: (Stack2 -> Stack2) # (Stack2 -> Stack2) -> Bool
  static inline const data_expression& rewr_494_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf35e0);
  }

  static inline data_expression rewr_494_0_term(const application&) { return rewr_494_0(); }

  static inline data_expression rewr_494_0_term_arg_in_normal_form(const application&) { return rewr_494_0(); }


  // [487] !=: (Stack3 -> Robot) # (Stack3 -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_487_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_486_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c646e0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_487_2_term(const application& t) { return rewr_487_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_487_2_term_arg_in_normal_form(const application& t) { return rewr_487_2(t[0], t[1]); }


  // [487] !=: (Stack3 -> Robot) # (Stack3 -> Robot) -> Bool
  static inline const data_expression& rewr_487_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf2b10);
  }

  static inline data_expression rewr_487_0_term(const application&) { return rewr_487_0(); }

  static inline data_expression rewr_487_0_term_arg_in_normal_form(const application&) { return rewr_487_0(); }


  // [486] ==: (Stack3 -> Robot) # (Stack3 -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_486_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack3. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(21), rewr_17_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(12))))), true, sigma())); // R1 forall x0: Stack3. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c64710), arg0, arg1);
  }

  static inline data_expression rewr_486_2_term(const application& t) { return rewr_486_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_486_2_term_arg_in_normal_form(const application& t) { return rewr_486_2(t[0], t[1]); }


  // [486] ==: (Stack3 -> Robot) # (Stack3 -> Robot) -> Bool
  static inline const data_expression& rewr_486_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf3610);
  }

  static inline data_expression rewr_486_0_term(const application&) { return rewr_486_0(); }

  static inline data_expression rewr_486_0_term_arg_in_normal_form(const application&) { return rewr_486_0(); }


  // [479] !=: (Stack3 -> Position) # (Stack3 -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_479_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_478_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c64bf0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_479_2_term(const application& t) { return rewr_479_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_479_2_term_arg_in_normal_form(const application& t) { return rewr_479_2(t[0], t[1]); }


  // [479] !=: (Stack3 -> Position) # (Stack3 -> Position) -> Bool
  static inline const data_expression& rewr_479_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf2b40);
  }

  static inline data_expression rewr_479_0_term(const application&) { return rewr_479_0(); }

  static inline data_expression rewr_479_0_term_arg_in_normal_form(const application&) { return rewr_479_0(); }


  // [478] ==: (Stack3 -> Position) # (Stack3 -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_478_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack3. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(21), rewr_19_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(12))))), true, sigma())); // R1 forall x0: Stack3. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c64c20), arg0, arg1);
  }

  static inline data_expression rewr_478_2_term(const application& t) { return rewr_478_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_478_2_term_arg_in_normal_form(const application& t) { return rewr_478_2(t[0], t[1]); }


  // [478] ==: (Stack3 -> Position) # (Stack3 -> Position) -> Bool
  static inline const data_expression& rewr_478_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cee070);
  }

  static inline data_expression rewr_478_0_term(const application&) { return rewr_478_0(); }

  static inline data_expression rewr_478_0_term_arg_in_normal_form(const application&) { return rewr_478_0(); }


  // [471] !=: (Stack3 -> Pos) # (Stack3 -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_471_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_470_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c65100), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_471_2_term(const application& t) { return rewr_471_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_471_2_term_arg_in_normal_form(const application& t) { return rewr_471_2(t[0], t[1]); }


  // [471] !=: (Stack3 -> Pos) # (Stack3 -> Pos) -> Bool
  static inline const data_expression& rewr_471_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced8b0);
  }

  static inline data_expression rewr_471_0_term(const application&) { return rewr_471_0(); }

  static inline data_expression rewr_471_0_term_arg_in_normal_form(const application&) { return rewr_471_0(); }


  // [470] ==: (Stack3 -> Pos) # (Stack3 -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_470_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack3. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(21), rewr_25_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(12))))), true, sigma())); // R1 forall x0: Stack3. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c65130), arg0, arg1);
  }

  static inline data_expression rewr_470_2_term(const application& t) { return rewr_470_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_470_2_term_arg_in_normal_form(const application& t) { return rewr_470_2(t[0], t[1]); }


  // [470] ==: (Stack3 -> Pos) # (Stack3 -> Pos) -> Bool
  static inline const data_expression& rewr_470_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf2ab0);
  }

  static inline data_expression rewr_470_0_term(const application&) { return rewr_470_0(); }

  static inline data_expression rewr_470_0_term_arg_in_normal_form(const application&) { return rewr_470_0(); }


  // [463] !=: (Stack3 -> Stack3) # (Stack3 -> Stack3) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_463_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_462_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c55550), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_463_2_term(const application& t) { return rewr_463_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_463_2_term_arg_in_normal_form(const application& t) { return rewr_463_2(t[0], t[1]); }


  // [463] !=: (Stack3 -> Stack3) # (Stack3 -> Stack3) -> Bool
  static inline const data_expression& rewr_463_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf35b0);
  }

  static inline data_expression rewr_463_0_term(const application&) { return rewr_463_0(); }

  static inline data_expression rewr_463_0_term_arg_in_normal_form(const application&) { return rewr_463_0(); }


  // [462] ==: (Stack3 -> Stack3) # (Stack3 -> Stack3) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_462_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack3. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(21), rewr_190_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(12))))), true, sigma())); // R1 forall x0: Stack3. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c55580), arg0, arg1);
  }

  static inline data_expression rewr_462_2_term(const application& t) { return rewr_462_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_462_2_term_arg_in_normal_form(const application& t) { return rewr_462_2(t[0], t[1]); }


  // [462] ==: (Stack3 -> Stack3) # (Stack3 -> Stack3) -> Bool
  static inline const data_expression& rewr_462_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf3640);
  }

  static inline data_expression rewr_462_0_term(const application&) { return rewr_462_0(); }

  static inline data_expression rewr_462_0_term_arg_in_normal_form(const application&) { return rewr_462_0(); }


  // [455] !=: (Stack -> Pos) # (Stack -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_455_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_454_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c55a60), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_455_2_term(const application& t) { return rewr_455_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_455_2_term_arg_in_normal_form(const application& t) { return rewr_455_2(t[0], t[1]); }


  // [455] !=: (Stack -> Pos) # (Stack -> Pos) -> Bool
  static inline const data_expression& rewr_455_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2beaa10);
  }

  static inline data_expression rewr_455_0_term(const application&) { return rewr_455_0(); }

  static inline data_expression rewr_455_0_term_arg_in_normal_form(const application&) { return rewr_455_0(); }


  // [454] ==: (Stack -> Pos) # (Stack -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_454_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(3), rewr_25_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Stack. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c55a90), arg0, arg1);
  }

  static inline data_expression rewr_454_2_term(const application& t) { return rewr_454_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_454_2_term_arg_in_normal_form(const application& t) { return rewr_454_2(t[0], t[1]); }


  // [454] ==: (Stack -> Pos) # (Stack -> Pos) -> Bool
  static inline const data_expression& rewr_454_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf3800);
  }

  static inline data_expression rewr_454_0_term(const application&) { return rewr_454_0(); }

  static inline data_expression rewr_454_0_term_arg_in_normal_form(const application&) { return rewr_454_0(); }


  // [447] !=: (Stack -> Stack) # (Stack -> Stack) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_447_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_446_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c55f10), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_447_2_term(const application& t) { return rewr_447_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_447_2_term_arg_in_normal_form(const application& t) { return rewr_447_2(t[0], t[1]); }


  // [447] !=: (Stack -> Stack) # (Stack -> Stack) -> Bool
  static inline const data_expression& rewr_447_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2beacf0);
  }

  static inline data_expression rewr_447_0_term(const application&) { return rewr_447_0(); }

  static inline data_expression rewr_447_0_term_arg_in_normal_form(const application&) { return rewr_447_0(); }


  // [446] ==: (Stack -> Stack) # (Stack -> Stack) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_446_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(3), rewr_108_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Stack. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c55f40), arg0, arg1);
  }

  static inline data_expression rewr_446_2_term(const application& t) { return rewr_446_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_446_2_term_arg_in_normal_form(const application& t) { return rewr_446_2(t[0], t[1]); }


  // [446] ==: (Stack -> Stack) # (Stack -> Stack) -> Bool
  static inline const data_expression& rewr_446_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf3830);
  }

  static inline data_expression rewr_446_0_term(const application&) { return rewr_446_0(); }

  static inline data_expression rewr_446_0_term_arg_in_normal_form(const application&) { return rewr_446_0(); }


  // [439] !=: (Stack1 -> Stack1) # (Stack1 -> Stack1) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_439_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_438_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c56450), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_439_2_term(const application& t) { return rewr_439_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_439_2_term_arg_in_normal_form(const application& t) { return rewr_439_2(t[0], t[1]); }


  // [439] !=: (Stack1 -> Stack1) # (Stack1 -> Stack1) -> Bool
  static inline const data_expression& rewr_439_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2beaa40);
  }

  static inline data_expression rewr_439_0_term(const application&) { return rewr_439_0(); }

  static inline data_expression rewr_439_0_term_arg_in_normal_form(const application&) { return rewr_439_0(); }


  // [438] ==: (Stack1 -> Stack1) # (Stack1 -> Stack1) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_438_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack1. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_266_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6))))), true, sigma())); // R1 forall x0: Stack1. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c56480), arg0, arg1);
  }

  static inline data_expression rewr_438_2_term(const application& t) { return rewr_438_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_438_2_term_arg_in_normal_form(const application& t) { return rewr_438_2(t[0], t[1]); }


  // [438] ==: (Stack1 -> Stack1) # (Stack1 -> Stack1) -> Bool
  static inline const data_expression& rewr_438_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2beab20);
  }

  static inline data_expression rewr_438_0_term(const application&) { return rewr_438_0(); }

  static inline data_expression rewr_438_0_term_arg_in_normal_form(const application&) { return rewr_438_0(); }


  // [431] !=: (Stack3 -> Bool) # (Stack3 -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_431_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_430_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c56960), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_431_2_term(const application& t) { return rewr_431_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_431_2_term_arg_in_normal_form(const application& t) { return rewr_431_2(t[0], t[1]); }


  // [431] !=: (Stack3 -> Bool) # (Stack3 -> Bool) -> Bool
  static inline const data_expression& rewr_431_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced8e0);
  }

  static inline data_expression rewr_431_0_term(const application&) { return rewr_431_0(); }

  static inline data_expression rewr_431_0_term_arg_in_normal_form(const application&) { return rewr_431_0(); }


  // [430] ==: (Stack3 -> Bool) # (Stack3 -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_430_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack3. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(21), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), true, sigma())); // R1 forall x0: Stack3. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c56990), arg0, arg1);
  }

  static inline data_expression rewr_430_2_term(const application& t) { return rewr_430_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_430_2_term_arg_in_normal_form(const application& t) { return rewr_430_2(t[0], t[1]); }


  // [430] ==: (Stack3 -> Bool) # (Stack3 -> Bool) -> Bool
  static inline const data_expression& rewr_430_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8e70);
  }

  static inline data_expression rewr_430_0_term(const application&) { return rewr_430_0(); }

  static inline data_expression rewr_430_0_term_arg_in_normal_form(const application&) { return rewr_430_0(); }


  // [423] !=: (Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3) # (Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_423_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_422_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c56e40), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_423_2_term(const application& t) { return rewr_423_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_423_2_term_arg_in_normal_form(const application& t) { return rewr_423_2(t[0], t[1]); }


  // [423] !=: (Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3) # (Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3) -> Bool
  static inline const data_expression& rewr_423_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf37d0);
  }

  static inline data_expression rewr_423_0_term(const application&) { return rewr_423_0(); }

  static inline data_expression rewr_423_0_term_arg_in_normal_form(const application&) { return rewr_423_0(); }


  // [422] ==: (Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3) # (Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_422_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Pos, x0: Robot, x0,x0: Position, x0: Robot, x0,x0: Position, x0: Recipe, x0,x0,x0: Bool, x0: Stack3. @var_0(x0, x0, x0, x0, x0, x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0, x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(22), rewr_190_2(rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), rewrite_with_arguments_in_normal_form(make_term_with_many_arguments(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(12))))), true, sigma())); // R1 forall x0: Pos, x0: Robot, x0,x0: Position, x0: Robot, x0,x0: Position, x0: Recipe, x0,x0,x0: Bool, x0: Stack3. @var_0(x0, x0, x0, x0, x0, x0, x0, x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0, x0, x0, x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c56e70), arg0, arg1);
  }

  static inline data_expression rewr_422_2_term(const application& t) { return rewr_422_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_422_2_term_arg_in_normal_form(const application& t) { return rewr_422_2(t[0], t[1]); }


  // [422] ==: (Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3) # (Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3) -> Bool
  static inline const data_expression& rewr_422_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9190);
  }

  static inline data_expression rewr_422_0_term(const application&) { return rewr_422_0(); }

  static inline data_expression rewr_422_0_term_arg_in_normal_form(const application&) { return rewr_422_0(); }


  // [416] !=: (Stack3 -> Recipe) # (Stack3 -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_416_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_415_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c57260), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_416_2_term(const application& t) { return rewr_416_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_416_2_term_arg_in_normal_form(const application& t) { return rewr_416_2(t[0], t[1]); }


  // [416] !=: (Stack3 -> Recipe) # (Stack3 -> Recipe) -> Bool
  static inline const data_expression& rewr_416_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced130);
  }

  static inline data_expression rewr_416_0_term(const application&) { return rewr_416_0(); }

  static inline data_expression rewr_416_0_term_arg_in_normal_form(const application&) { return rewr_416_0(); }


  // [415] ==: (Stack3 -> Recipe) # (Stack3 -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_415_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack3. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(21), rewr_174_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(12))))), true, sigma())); // R1 forall x0: Stack3. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c57290), arg0, arg1);
  }

  static inline data_expression rewr_415_2_term(const application& t) { return rewr_415_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_415_2_term_arg_in_normal_form(const application& t) { return rewr_415_2(t[0], t[1]); }


  // [415] ==: (Stack3 -> Recipe) # (Stack3 -> Recipe) -> Bool
  static inline const data_expression& rewr_415_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced1f0);
  }

  static inline data_expression rewr_415_0_term(const application&) { return rewr_415_0(); }

  static inline data_expression rewr_415_0_term_arg_in_normal_form(const application&) { return rewr_415_0(); }


  // [408] !=: (Stack -> Nat) # (Stack -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_408_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_407_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c57710), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_408_2_term(const application& t) { return rewr_408_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_408_2_term_arg_in_normal_form(const application& t) { return rewr_408_2(t[0], t[1]); }


  // [408] !=: (Stack -> Nat) # (Stack -> Nat) -> Bool
  static inline const data_expression& rewr_408_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8c50);
  }

  static inline data_expression rewr_408_0_term(const application&) { return rewr_408_0(); }

  static inline data_expression rewr_408_0_term_arg_in_normal_form(const application&) { return rewr_408_0(); }


  // [407] ==: (Stack -> Nat) # (Stack -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_407_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(3), rewr_71_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Stack. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c57740), arg0, arg1);
  }

  static inline data_expression rewr_407_2_term(const application& t) { return rewr_407_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_407_2_term_arg_in_normal_form(const application& t) { return rewr_407_2(t[0], t[1]); }


  // [407] ==: (Stack -> Nat) # (Stack -> Nat) -> Bool
  static inline const data_expression& rewr_407_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf04f0);
  }

  static inline data_expression rewr_407_0_term(const application&) { return rewr_407_0(); }

  static inline data_expression rewr_407_0_term_arg_in_normal_form(const application&) { return rewr_407_0(); }


  // [400] !=: (Stack -> Bool) # (Stack -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_400_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_399_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c57bc0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_400_2_term(const application& t) { return rewr_400_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_400_2_term_arg_in_normal_form(const application& t) { return rewr_400_2(t[0], t[1]); }


  // [400] !=: (Stack -> Bool) # (Stack -> Bool) -> Bool
  static inline const data_expression& rewr_400_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf0580);
  }

  static inline data_expression rewr_400_0_term(const application&) { return rewr_400_0(); }

  static inline data_expression rewr_400_0_term_arg_in_normal_form(const application&) { return rewr_400_0(); }


  // [399] ==: (Stack -> Bool) # (Stack -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_399_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(3), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), true, sigma())); // R1 forall x0: Stack. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c57bf0), arg0, arg1);
  }

  static inline data_expression rewr_399_2_term(const application& t) { return rewr_399_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_399_2_term_arg_in_normal_form(const application& t) { return rewr_399_2(t[0], t[1]); }


  // [399] ==: (Stack -> Bool) # (Stack -> Bool) -> Bool
  static inline const data_expression& rewr_399_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf2ae0);
  }

  static inline data_expression rewr_399_0_term(const application&) { return rewr_399_0(); }

  static inline data_expression rewr_399_0_term_arg_in_normal_form(const application&) { return rewr_399_0(); }


  // [392] !=: (Stack4 -> Pos) # (Stack4 -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_392_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_391_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c58070), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_392_2_term(const application& t) { return rewr_392_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_392_2_term_arg_in_normal_form(const application& t) { return rewr_392_2(t[0], t[1]); }


  // [392] !=: (Stack4 -> Pos) # (Stack4 -> Pos) -> Bool
  static inline const data_expression& rewr_392_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9160);
  }

  static inline data_expression rewr_392_0_term(const application&) { return rewr_392_0(); }

  static inline data_expression rewr_392_0_term_arg_in_normal_form(const application&) { return rewr_392_0(); }


  // [391] ==: (Stack4 -> Pos) # (Stack4 -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_391_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack4. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(1), rewr_25_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Stack4. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c580a0), arg0, arg1);
  }

  static inline data_expression rewr_391_2_term(const application& t) { return rewr_391_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_391_2_term_arg_in_normal_form(const application& t) { return rewr_391_2(t[0], t[1]); }


  // [391] ==: (Stack4 -> Pos) # (Stack4 -> Pos) -> Bool
  static inline const data_expression& rewr_391_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf4cc0);
  }

  static inline data_expression rewr_391_0_term(const application&) { return rewr_391_0(); }

  static inline data_expression rewr_391_0_term_arg_in_normal_form(const application&) { return rewr_391_0(); }


  // [384] !=: (Bool # Stack # Stack -> Stack) # (Bool # Stack # Stack -> Stack) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_384_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_383_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c585b0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_384_2_term(const application& t) { return rewr_384_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_384_2_term_arg_in_normal_form(const application& t) { return rewr_384_2(t[0], t[1]); }


  // [384] !=: (Bool # Stack # Stack -> Stack) # (Bool # Stack # Stack -> Stack) -> Bool
  static inline const data_expression& rewr_384_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced2b0);
  }

  static inline data_expression rewr_384_0_term(const application&) { return rewr_384_0(); }

  static inline data_expression rewr_384_0_term_arg_in_normal_form(const application&) { return rewr_384_0(); }


  // [383] ==: (Bool # Stack # Stack -> Stack) # (Bool # Stack # Stack -> Stack) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_383_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Stack. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(23), rewr_108_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)), static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Stack. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c585e0), arg0, arg1);
  }

  static inline data_expression rewr_383_2_term(const application& t) { return rewr_383_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_383_2_term_arg_in_normal_form(const application& t) { return rewr_383_2(t[0], t[1]); }


  // [383] ==: (Bool # Stack # Stack -> Stack) # (Bool # Stack # Stack -> Stack) -> Bool
  static inline const data_expression& rewr_383_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf1af0);
  }

  static inline data_expression rewr_383_0_term(const application&) { return rewr_383_0(); }

  static inline data_expression rewr_383_0_term_arg_in_normal_form(const application&) { return rewr_383_0(); }


  // [377] !=: (Pos # Nat # Recipe # Bool # Stack -> Stack) # (Pos # Nat # Recipe # Bool # Stack -> Stack) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_377_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_376_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c58a60), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_377_2_term(const application& t) { return rewr_377_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_377_2_term_arg_in_normal_form(const application& t) { return rewr_377_2(t[0], t[1]); }


  // [377] !=: (Pos # Nat # Recipe # Bool # Stack -> Stack) # (Pos # Nat # Recipe # Bool # Stack -> Stack) -> Bool
  static inline const data_expression& rewr_377_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cecad0);
  }

  static inline data_expression rewr_377_0_term(const application&) { return rewr_377_0(); }

  static inline data_expression rewr_377_0_term_arg_in_normal_form(const application&) { return rewr_377_0(); }


  // [376] ==: (Pos # Nat # Recipe # Bool # Stack -> Stack) # (Pos # Nat # Recipe # Bool # Stack -> Stack) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_376_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Pos, x0: Nat, x0: Recipe, x0: Bool, x0: Stack. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(24), rewr_108_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Pos, x0: Nat, x0: Recipe, x0: Bool, x0: Stack. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c58a90), arg0, arg1);
  }

  static inline data_expression rewr_376_2_term(const application& t) { return rewr_376_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_376_2_term_arg_in_normal_form(const application& t) { return rewr_376_2(t[0], t[1]); }


  // [376] ==: (Pos # Nat # Recipe # Bool # Stack -> Stack) # (Pos # Nat # Recipe # Bool # Stack -> Stack) -> Bool
  static inline const data_expression& rewr_376_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced250);
  }

  static inline data_expression rewr_376_0_term(const application&) { return rewr_376_0(); }

  static inline data_expression rewr_376_0_term_arg_in_normal_form(const application&) { return rewr_376_0(); }


  // [370] !=: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_370_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_369_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c58ee0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_370_2_term(const application& t) { return rewr_370_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_370_2_term_arg_in_normal_form(const application& t) { return rewr_370_2(t[0], t[1]); }


  // [370] !=: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_370_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9340);
  }

  static inline data_expression rewr_370_0_term(const application&) { return rewr_370_0(); }

  static inline data_expression rewr_370_0_term_arg_in_normal_form(const application&) { return rewr_370_0(); }


  // [369] ==: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_369_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Nat. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(25), rewr_71_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Nat. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c58f10), arg0, arg1);
  }

  static inline data_expression rewr_369_2_term(const application& t) { return rewr_369_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_369_2_term_arg_in_normal_form(const application& t) { return rewr_369_2(t[0], t[1]); }


  // [369] ==: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_369_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced280);
  }

  static inline data_expression rewr_369_0_term(const application&) { return rewr_369_0(); }

  static inline data_expression rewr_369_0_term_arg_in_normal_form(const application&) { return rewr_369_0(); }


  // [363] !=: (Stack4 -> Nat) # (Stack4 -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_363_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_362_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c59300), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_363_2_term(const application& t) { return rewr_363_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_363_2_term_arg_in_normal_form(const application& t) { return rewr_363_2(t[0], t[1]); }


  // [363] !=: (Stack4 -> Nat) # (Stack4 -> Nat) -> Bool
  static inline const data_expression& rewr_363_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c48c70);
  }

  static inline data_expression rewr_363_0_term(const application&) { return rewr_363_0(); }

  static inline data_expression rewr_363_0_term_arg_in_normal_form(const application&) { return rewr_363_0(); }


  // [362] ==: (Stack4 -> Nat) # (Stack4 -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_362_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack4. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(1), rewr_71_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Stack4. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c59330), arg0, arg1);
  }

  static inline data_expression rewr_362_2_term(const application& t) { return rewr_362_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_362_2_term_arg_in_normal_form(const application& t) { return rewr_362_2(t[0], t[1]); }


  // [362] ==: (Stack4 -> Nat) # (Stack4 -> Nat) -> Bool
  static inline const data_expression& rewr_362_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cecaa0);
  }

  static inline data_expression rewr_362_0_term(const application&) { return rewr_362_0(); }

  static inline data_expression rewr_362_0_term_arg_in_normal_form(const application&) { return rewr_362_0(); }


  // [355] !=: (Bool # Recipe # Recipe -> Recipe) # (Bool # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_355_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_354_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bfe830), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_355_2_term(const application& t) { return rewr_355_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_355_2_term_arg_in_normal_form(const application& t) { return rewr_355_2(t[0], t[1]); }


  // [355] !=: (Bool # Recipe # Recipe -> Recipe) # (Bool # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_355_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced220);
  }

  static inline data_expression rewr_355_0_term(const application&) { return rewr_355_0(); }

  static inline data_expression rewr_355_0_term_arg_in_normal_form(const application&) { return rewr_355_0(); }


  // [354] ==: (Bool # Recipe # Recipe -> Recipe) # (Bool # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_354_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Recipe. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(26), rewr_174_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Recipe. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bfe860), arg0, arg1);
  }

  static inline data_expression rewr_354_2_term(const application& t) { return rewr_354_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_354_2_term_arg_in_normal_form(const application& t) { return rewr_354_2(t[0], t[1]); }


  // [354] ==: (Bool # Recipe # Recipe -> Recipe) # (Bool # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_354_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9520);
  }

  static inline data_expression rewr_354_0_term(const application&) { return rewr_354_0(); }

  static inline data_expression rewr_354_0_term_arg_in_normal_form(const application&) { return rewr_354_0(); }


  // [348] !=: (Stack4 -> Recipe) # (Stack4 -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_348_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_347_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bfec50), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_348_2_term(const application& t) { return rewr_348_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_348_2_term_arg_in_normal_form(const application& t) { return rewr_348_2(t[0], t[1]); }


  // [348] !=: (Stack4 -> Recipe) # (Stack4 -> Recipe) -> Bool
  static inline const data_expression& rewr_348_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9250);
  }

  static inline data_expression rewr_348_0_term(const application&) { return rewr_348_0(); }

  static inline data_expression rewr_348_0_term_arg_in_normal_form(const application&) { return rewr_348_0(); }


  // [347] ==: (Stack4 -> Recipe) # (Stack4 -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_347_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack4. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(1), rewr_174_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1))))), true, sigma())); // R1 forall x0: Stack4. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bfec80), arg0, arg1);
  }

  static inline data_expression rewr_347_2_term(const application& t) { return rewr_347_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_347_2_term_arg_in_normal_form(const application& t) { return rewr_347_2(t[0], t[1]); }


  // [347] ==: (Stack4 -> Recipe) # (Stack4 -> Recipe) -> Bool
  static inline const data_expression& rewr_347_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced1a0);
  }

  static inline data_expression rewr_347_0_term(const application&) { return rewr_347_0(); }

  static inline data_expression rewr_347_0_term_arg_in_normal_form(const application&) { return rewr_347_0(); }


  // [340] !=: (Stack4 -> Bool) # (Stack4 -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_340_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_339_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bff190), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_340_2_term(const application& t) { return rewr_340_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_340_2_term_arg_in_normal_form(const application& t) { return rewr_340_2(t[0], t[1]); }


  // [340] !=: (Stack4 -> Bool) # (Stack4 -> Bool) -> Bool
  static inline const data_expression& rewr_340_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c20370);
  }

  static inline data_expression rewr_340_0_term(const application&) { return rewr_340_0(); }

  static inline data_expression rewr_340_0_term_arg_in_normal_form(const application&) { return rewr_340_0(); }


  // [339] ==: (Stack4 -> Bool) # (Stack4 -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_339_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Stack4. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(1), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), true, sigma())); // R1 forall x0: Stack4. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bff1c0), arg0, arg1);
  }

  static inline data_expression rewr_339_2_term(const application& t) { return rewr_339_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_339_2_term_arg_in_normal_form(const application& t) { return rewr_339_2(t[0], t[1]); }


  // [339] ==: (Stack4 -> Bool) # (Stack4 -> Bool) -> Bool
  static inline const data_expression& rewr_339_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf0520);
  }

  static inline data_expression rewr_339_0_term(const application&) { return rewr_339_0(); }

  static inline data_expression rewr_339_0_term_arg_in_normal_form(const application&) { return rewr_339_0(); }


  // [24] if: Bool # Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_24_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1ac0), arg0, arg1, arg2);
  }

  static inline data_expression rewr_24_3_term(const application& t) { return rewr_24_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_24_3_term_arg_in_normal_form(const application& t) { return rewr_24_3(t[0], t[1], t[2]); }


  // [24] if: Bool # Bool # Bool -> Bool
  static inline const data_expression& rewr_24_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf0550);
  }

  static inline data_expression rewr_24_0_term(const application&) { return rewr_24_0(); }

  static inline data_expression rewr_24_0_term_arg_in_normal_form(const application&) { return rewr_24_0(); }


  // [335] !=: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_335_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_182_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bff550), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_335_2_term(const application& t) { return rewr_335_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_335_2_term_arg_in_normal_form(const application& t) { return rewr_335_2(t[0], t[1]); }


  // [335] !=: Bool # Bool -> Bool
  static inline const data_expression& rewr_335_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ced2e0);
  }

  static inline data_expression rewr_335_0_term(const application&) { return rewr_335_0(); }

  static inline data_expression rewr_335_0_term_arg_in_normal_form(const application&) { return rewr_335_0(); }


  // [182] ==: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_182_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(!@var_0)))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
        {
          const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
          return rewr_15_1(var_0); // R1 !@var_0
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
        if (uint_address(arg1) == 0x55e3f2be11c0) // F1
        {
          return rewr_15_1(var_0); // R1 !@var_0
        }
        else
        {
          if (uint_address(arg1) == 0x55e3f2bc5ff0) // F1
          {
            return var_0; // R1 @var_0
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c501c0), arg0, arg1);
  }

  static inline data_expression rewr_182_2_term(const application& t) { return rewr_182_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_182_2_term_arg_in_normal_form(const application& t) { return rewr_182_2(t[0], t[1]); }


  // [182] ==: Bool # Bool -> Bool
  static inline const data_expression& rewr_182_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2ceca70);
  }

  static inline data_expression rewr_182_0_term(const application&) { return rewr_182_0(); }

  static inline data_expression rewr_182_0_term_arg_in_normal_form(const application&) { return rewr_182_0(); }


  // [153] =>: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_153_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(true)))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
      if (uint_address(arg1) == 0x55e3f2be11c0) // F1
      {
        return rewr_15_1(var_0); // R1 !@var_0
      }
      else
      {
        if (uint_address(arg1) == 0x55e3f2bc5ff0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1dc0), arg0, arg1);
  }

  static inline data_expression rewr_153_2_term(const application& t) { return rewr_153_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_153_2_term_arg_in_normal_form(const application& t) { return rewr_153_2(t[0], t[1]); }


  // [153] =>: Bool # Bool -> Bool
  static inline const data_expression& rewr_153_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfc800);
  }

  static inline data_expression rewr_153_0_term(const application&) { return rewr_153_0(); }

  static inline data_expression rewr_153_0_term_arg_in_normal_form(const application&) { return rewr_153_0(); }


  // [297] ||: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_297_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(true)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
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
      if (uint_address(arg1) == 0x55e3f2be11c0) // F1
      {
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg1) == 0x55e3f2bc5ff0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c01380), arg0, arg1);
  }

  static inline data_expression rewr_297_2_term(const application& t) { return rewr_297_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_297_2_term_arg_in_normal_form(const application& t) { return rewr_297_2(t[0], t[1]); }


  // [297] ||: Bool # Bool -> Bool
  static inline const data_expression& rewr_297_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cecb80);
  }

  static inline data_expression rewr_297_0_term(const application&) { return rewr_297_0(); }

  static inline data_expression rewr_297_0_term_arg_in_normal_form(const application&) { return rewr_297_0(); }


  // [16] &&: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_16_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(false)))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
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
      if (uint_address(arg1) == 0x55e3f2be11c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
      }
      else
      {
        if (uint_address(arg1) == 0x55e3f2bc5ff0) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1d30), arg0, arg1);
  }

  static inline data_expression rewr_16_2_term(const application& t) { return rewr_16_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_16_2_term_arg_in_normal_form(const application& t) { return rewr_16_2(t[0], t[1]); }


  // [16] &&: Bool # Bool -> Bool
  static inline const data_expression& rewr_16_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9220);
  }

  static inline data_expression rewr_16_0_term(const application&) { return rewr_16_0(); }

  static inline data_expression rewr_16_0_term_arg_in_normal_form(const application&) { return rewr_16_0(); }


  // [15] !: Bool -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_15_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@R(false), @@F(!, @@S(@var_0, @@R(@var_0)), @@F(false, @@R(true), @@X)))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be1d60) // F1
        {
          const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
          return var_0; // R1 @var_0
        }
        else
        {
          if (uint_address(arg0) == 0x55e3f2be11c0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1d60), arg0);
  }

  static inline data_expression rewr_15_1_term(const application& t) { return rewr_15_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_15_1_term_arg_in_normal_form(const application& t) { return rewr_15_1(t[0]); }


  // [15] !: Bool -> Bool
  static inline const data_expression& rewr_15_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9930);
  }

  static inline data_expression rewr_15_0_term(const application&) { return rewr_15_0(); }

  static inline data_expression rewr_15_0_term_arg_in_normal_form(const application&) { return rewr_15_0(); }


  // [330] !=: Int # Int -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_330_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_326_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bffc70), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_330_2_term(const application& t) { return rewr_330_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_330_2_term_arg_in_normal_form(const application& t) { return rewr_330_2(t[0], t[1]); }


  // [330] !=: Int # Int -> Bool
  static inline const data_expression& rewr_330_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf94f0);
  }

  static inline data_expression rewr_330_0_term(const application&) { return rewr_330_0(); }

  static inline data_expression rewr_330_0_term_arg_in_normal_form(const application&) { return rewr_330_0(); }


  // [326] ==: Int # Int -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_326_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c00d80) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2c00d80) // F1
          {
            const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
            return rewr_71_2(var_1, var_2); // R1 @var_1 == @var_2
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2c00d50) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
            }
            else
            {
            }
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c00d50) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2c00d50) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_25_2(var_1, var_2); // R1 @var_1 == @var_2
            }
            else
            {
              if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2c00d80) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
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
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c00810), arg0, arg1);
  }

  static inline data_expression rewr_326_2_term(const application& t) { return rewr_326_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_326_2_term_arg_in_normal_form(const application& t) { return rewr_326_2(t[0], t[1]); }


  // [326] ==: Int # Int -> Bool
  static inline const data_expression& rewr_326_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf98d0);
  }

  static inline data_expression rewr_326_0_term(const application&) { return rewr_326_0(); }

  static inline data_expression rewr_326_0_term_arg_in_normal_form(const application&) { return rewr_326_0(); }


  // [44] -: Nat # Nat -> Int
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_44_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_295_2(var_1, var_0) == sort_bool::true_()) // C
      {
        return rewr_300_1(rewr_283_2(var_0, var_1)); // R1 @monus(@var_0, @var_1)
      }
      else
      {
        if (rewr_31_2(var_0, var_1) == sort_bool::true_()) // C
        {
          return rewr_313_1(rewr_283_2(var_1, var_0)); // R1 -@monus(@var_1, @var_0)
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be14c0), arg0, arg1);
  }

  static inline data_expression rewr_44_2_term(const application& t) { return rewr_44_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_44_2_term_arg_in_normal_form(const application& t) { return rewr_44_2(t[0], t[1]); }


  // [44] -: Nat # Nat -> Int
  static inline const data_expression& rewr_44_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf98a0);
  }

  static inline data_expression rewr_44_0_term(const application&) { return rewr_44_0(); }

  static inline data_expression rewr_44_0_term_arg_in_normal_form(const application&) { return rewr_44_0(); }


  // [313] -: Nat -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_313_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@R(0), @@F(@cNat, @@S(@var_0, @@R(-@var_0)), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2be18e0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2c30420); // R1 0
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be1490) // F1
        {
          const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
          return rewr_301_1(var_0); // R1 -@var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c00b10), arg0);
  }

  static inline data_expression rewr_313_1_term(const application& t) { return rewr_313_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_313_1_term_arg_in_normal_form(const application& t) { return rewr_313_1(t[0]); }


  // [313] -: Nat -> Int
  static inline const data_expression& rewr_313_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c2ae90);
  }

  static inline data_expression rewr_313_0_term(const application&) { return rewr_313_0(); }

  static inline data_expression rewr_313_0_term_arg_in_normal_form(const application&) { return rewr_313_0(); }


  // [43] Int2Nat: Int -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_43_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(@cInt, @@S(@var_0, @@R(@var_0)), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c00d80) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be14f0), arg0);
  }

  static inline data_expression rewr_43_1_term(const application& t) { return rewr_43_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_43_1_term_arg_in_normal_form(const application& t) { return rewr_43_1(t[0]); }


  // [43] Int2Nat: Int -> Nat
  static inline const data_expression& rewr_43_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2beac20);
  }

  static inline data_expression rewr_43_0_term(const application&) { return rewr_43_0(); }

  static inline data_expression rewr_43_0_term_arg_in_normal_form(const application&) { return rewr_43_0(); }


  // [295] <=: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_295_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@D(@@N(@@S(@var_0, @@R(true)))), @@X)
    {
      if (uint_address(arg0) == 0x55e3f2be18e0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be1490) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
          if (uint_address(arg1) == 0x55e3f2be18e0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be1490) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_152_2(var_1, var_2); // R1 @var_1 <= @var_2
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
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4cc50), arg0, arg1);
  }

  static inline data_expression rewr_295_2_term(const application& t) { return rewr_295_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_295_2_term_arg_in_normal_form(const application& t) { return rewr_295_2(t[0], t[1]); }


  // [295] <=: Nat # Nat -> Bool
  static inline const data_expression& rewr_295_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c2ae60);
  }

  static inline data_expression rewr_295_0_term(const application&) { return rewr_295_0(); }

  static inline data_expression rewr_295_0_term_arg_in_normal_form(const application&) { return rewr_295_0(); }


  // [31] <: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_31_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@N(@@F(0, @@R(false), @@X))
    {
      if (uint_address(arg1) == 0x55e3f2be18e0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
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
      if (uint_address(arg0) == 0x55e3f2be18e0) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be1490) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be1490) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be1490) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_151_2(var_1, var_2); // R1 @var_1 < @var_2
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
            return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1910), arg0, arg1);
  }

  static inline data_expression rewr_31_2_term(const application& t) { return rewr_31_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_31_2_term_arg_in_normal_form(const application& t) { return rewr_31_2(t[0], t[1]); }


  // [31] <: Nat # Nat -> Bool
  static inline const data_expression& rewr_31_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c2af50);
  }

  static inline data_expression rewr_31_0_term(const application&) { return rewr_31_0(); }

  static inline data_expression rewr_31_0_term_arg_in_normal_form(const application&) { return rewr_31_0(); }


  // [77] if: Bool # Nat # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_77_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f410), arg0, arg1, arg2);
  }

  static inline data_expression rewr_77_3_term(const application& t) { return rewr_77_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_77_3_term_arg_in_normal_form(const application& t) { return rewr_77_3(t[0], t[1], t[2]); }


  // [77] if: Bool # Nat # Nat -> Nat
  static inline const data_expression& rewr_77_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8740);
  }

  static inline data_expression rewr_77_0_term(const application&) { return rewr_77_0(); }

  static inline data_expression rewr_77_0_term_arg_in_normal_form(const application&) { return rewr_77_0(); }


  // [298] !=: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_298_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_71_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c00ff0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_298_2_term(const application& t) { return rewr_298_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_298_2_term_arg_in_normal_form(const application& t) { return rewr_298_2(t[0], t[1]); }


  // [298] !=: Nat # Nat -> Bool
  static inline const data_expression& rewr_298_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9830);
  }

  static inline data_expression rewr_298_0_term(const application&) { return rewr_298_0(); }

  static inline data_expression rewr_298_0_term_arg_in_normal_form(const application&) { return rewr_298_0(); }


  // [71] ==: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_71_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (uint_address(arg0) == 0x55e3f2be18e0) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be1490) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be1490) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be1490) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_25_2(var_1, var_2); // R1 @var_1 == @var_2
            }
            else
            {
              if (uint_address(arg1) == 0x55e3f2be18e0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
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
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f6b0), arg0, arg1);
  }

  static inline data_expression rewr_71_2_term(const application& t) { return rewr_71_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_71_2_term_arg_in_normal_form(const application& t) { return rewr_71_2(t[0], t[1]); }


  // [71] ==: Nat # Nat -> Bool
  static inline const data_expression& rewr_71_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8710);
  }

  static inline data_expression rewr_71_0_term(const application&) { return rewr_71_0(); }

  static inline data_expression rewr_71_0_term_arg_in_normal_form(const application&) { return rewr_71_0(); }


  // [283] @monus: Nat # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_283_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@D(@@N(@@S(@var_0, @@R(0)))), @@X)
    {
      if (uint_address(arg0) == 0x55e3f2be18e0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2cf9900); // R1 0
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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be1490) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (uint_address(arg1) == 0x55e3f2be18e0) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be1490) // F1
          {
            const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
            return rewr_276_3(*reinterpret_cast<const data_expression*>(0x55e3f2cd8860), var_1, var_2); // R1 @gtesubtb(false, @var_1, @var_2)
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address(arg1) == 0x55e3f2be18e0) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c50b50), arg0, arg1);
  }

  static inline data_expression rewr_283_2_term(const application& t) { return rewr_283_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_283_2_term_arg_in_normal_form(const application& t) { return rewr_283_2(t[0], t[1]); }


  // [283] @monus: Nat # Nat -> Nat
  static inline const data_expression& rewr_283_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf3280);
  }

  static inline data_expression rewr_283_0_term(const application&) { return rewr_283_0(); }

  static inline data_expression rewr_283_0_term_arg_in_normal_form(const application&) { return rewr_283_0(); }


  // [276] @gtesubtb: Bool # Pos # Pos -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_276_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(false, @@D(@@N(@@S(@var_0, @@N(@@F(1, @@R(pred(@var_0)), @@X))))), @@F(true, @@D(@@N(@@S(@var_0, @@N(@@F(1, @@R(pred(Nat2Pos(pred(@var_0)))), @@X))))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2be11c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        if (uint_address(arg2) == 0x55e3f2be1a30) // F1
        {
          return rewr_166_1(var_0); // R1 pred(@var_0)
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
        {
          const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
          if (uint_address(arg2) == 0x55e3f2be1a30) // F1
          {
            return rewr_166_1(rewr_160_1(rewr_166_1(var_0))); // R1 pred(Nat2Pos(pred(@var_0)))
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
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be15b0) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        if (uint_address(arg1[1]) == 0x55e3f2bc5ff0) // F2a true
        {
          const data_expression& t1 = down_cast<data_expression>(arg1[1]);
          const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
          if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x55e3f2be15b0) // F1
          {
            if (var_1 == arg2[1]) // M
            {
              if (uint_address(arg2[1]) == 0x55e3f2be11c0) // F2a false
              {
                const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_272_2(delayed_rewr_15_1<data_expression>(var_0), rewr_276_3(*reinterpret_cast<const data_expression*>(0x55e3f2cd8860), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(false, @var_2, @var_3))
              }
              else
              {
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_272_2(var_0, rewr_276_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
              }
            }
            else
            {
              if (uint_address(arg2[1]) == 0x55e3f2be11c0) // F2a false
              {
                const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_272_2(delayed_rewr_15_1<data_expression>(var_0), rewr_276_3(*reinterpret_cast<const data_expression*>(0x55e3f2cd8860), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(false, @var_2, @var_3))
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
          if (uint_address(arg1[1]) == 0x55e3f2be11c0) // F2a false
          {
            const data_expression& t1 = down_cast<data_expression>(arg1[1]);
            const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
            if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x55e3f2be15b0) // F1
            {
              if (var_1 == arg2[1]) // M
              {
                if (uint_address(arg2[1]) == 0x55e3f2bc5ff0) // F2a true
                {
                  const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_272_2(delayed_rewr_15_1<data_expression>(var_0), rewr_276_3(*reinterpret_cast<const data_expression*>(0x55e3f2c22730), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(true, @var_2, @var_3))
                }
                else
                {
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_272_2(var_0, rewr_276_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
                }
              }
              else
              {
                if (uint_address(arg2[1]) == 0x55e3f2bc5ff0) // F2a true
                {
                  const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_272_2(delayed_rewr_15_1<data_expression>(var_0), rewr_276_3(*reinterpret_cast<const data_expression*>(0x55e3f2c22730), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(true, @var_2, @var_3))
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
            if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x55e3f2be15b0) // F1
            {
              if (var_1 == arg2[1]) // M
              {
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_272_2(var_0, rewr_276_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2bba0), arg0, arg1, arg2);
  }

  static inline data_expression rewr_276_3_term(const application& t) { return rewr_276_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_276_3_term_arg_in_normal_form(const application& t) { return rewr_276_3(t[0], t[1], t[2]); }


  // [15] !: Bool -> Bool
  template < class DATA_EXPR0>
  class delayed_rewr_15_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_15_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_15_1(m_t0);
      }
  };
  
  // [276] @gtesubtb: Bool # Pos # Pos -> Nat
  static inline const data_expression& rewr_276_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf87a0);
  }

  static inline data_expression rewr_276_0_term(const application&) { return rewr_276_0(); }

  static inline data_expression rewr_276_0_term_arg_in_normal_form(const application&) { return rewr_276_0(); }


  // [272] @dub: Bool # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_272_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F(@cNat, @@S(@var_1, @@R(2 * @var_1 + if(@var_0, 1, 0))), @@X)))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be1490) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        return rewr_45_1(rewr_40_2(var_0, var_1)); // R1 2 * @var_1 + if(@var_0, 1, 0)
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
      if (uint_address(arg0) == 0x55e3f2be11c0) // F1
      {
        if (uint_address(arg1) == 0x55e3f2be18e0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cf9900); // R1 0
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
        {
          if (uint_address(arg1) == 0x55e3f2be18e0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c2aef0); // R1 1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2bc60), arg0, arg1);
  }

  static inline data_expression rewr_272_2_term(const application& t) { return rewr_272_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_272_2_term_arg_in_normal_form(const application& t) { return rewr_272_2(t[0], t[1]); }


  // [272] @dub: Bool # Nat -> Nat
  static inline const data_expression& rewr_272_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf97c0);
  }

  static inline data_expression rewr_272_0_term(const application&) { return rewr_272_0(); }

  static inline data_expression rewr_272_0_term_arg_in_normal_form(const application&) { return rewr_272_0(); }


  // [166] pred: Pos -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_166_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(1, @@R(0), @@F(@cDub, @@F(false, @@D(@@N(@@S(@var_0, @@R(@dub(true, pred(@var_0)))))), @@F(true, @@D(@@N(@@S(@var_0, @@R(2 * @var_0)))), @@D(@@X))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2be1a30) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2cf9900); // R1 0
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15b0) // F1
        {
          if (uint_address(arg0[1]) == 0x55e3f2be11c0) // F2a false
          {
            const data_expression& t1 = down_cast<data_expression>(arg0[1]);
            const data_expression& var_0 = down_cast<data_expression>(arg0[2]); // S2
            return rewr_272_2(*reinterpret_cast<const data_expression*>(0x55e3f2c22730), rewr_166_1(var_0)); // R1 @dub(true, pred(@var_0))
          }
          else
          {
            if (uint_address(arg0[1]) == 0x55e3f2bc5ff0) // F2a true
            {
              const data_expression& t1 = down_cast<data_expression>(arg0[1]);
              const data_expression& var_0 = down_cast<data_expression>(arg0[2]); // S2
              return rewr_45_1(rewr_40_2(*reinterpret_cast<const data_expression*>(0x55e3f2cd8860), var_0)); // R1 2 * @var_0
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2bc90), arg0);
  }

  static inline data_expression rewr_166_1_term(const application& t) { return rewr_166_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_166_1_term_arg_in_normal_form(const application& t) { return rewr_166_1(t[0]); }


  // [166] pred: Pos -> Nat
  static inline const data_expression& rewr_166_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8770);
  }

  static inline data_expression rewr_166_0_term(const application&) { return rewr_166_0(); }

  static inline data_expression rewr_166_0_term_arg_in_normal_form(const application&) { return rewr_166_0(); }


  // [160] Nat2Pos: Nat -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_160_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(@cNat, @@S(@var_0, @@R(@var_0)), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be1490) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2bdb0), arg0);
  }

  static inline data_expression rewr_160_1_term(const application& t) { return rewr_160_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_160_1_term_arg_in_normal_form(const application& t) { return rewr_160_1(t[0]); }


  // [160] Nat2Pos: Nat -> Pos
  static inline const data_expression& rewr_160_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c2af20);
  }

  static inline data_expression rewr_160_0_term(const application&) { return rewr_160_0(); }

  static inline data_expression rewr_160_0_term_arg_in_normal_form(const application&) { return rewr_160_0(); }


  // [152] <=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_152_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(1, @@D(@@N(@@S(@var_0, @@R(true)))), @@X)
    {
      if (uint_address(arg0) == 0x55e3f2be1a30) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15b0) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be15b0) // F1
          {
            const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
            const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
            return rewr_24_3(rewr_153_2(var_1, var_3), delayed_rewr_152_2<data_expression, data_expression>(var_2, var_4), delayed_rewr_151_2<data_expression, data_expression>(var_2, var_4)); // R1 if(@var_1 => @var_3, @var_2 <= @var_4, @var_2 < @var_4)
          }
          else
          {
            if (uint_address(arg1) == 0x55e3f2be1a30) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
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
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc6230), arg0, arg1);
  }

  static inline data_expression rewr_152_2_term(const application& t) { return rewr_152_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_152_2_term_arg_in_normal_form(const application& t) { return rewr_152_2(t[0], t[1]); }


  // [151] <: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_151_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_151_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_151_2(m_t0, m_t1);
      }
  };
  
  // [152] <=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_152_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_152_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_152_2(m_t0, m_t1);
      }
  };
  
  // [152] <=: Pos # Pos -> Bool
  static inline const data_expression& rewr_152_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8640);
  }

  static inline data_expression rewr_152_0_term(const application&) { return rewr_152_0(); }

  static inline data_expression rewr_152_0_term_arg_in_normal_form(const application&) { return rewr_152_0(); }


  // [151] <: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_151_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@N(@@F(1, @@R(false), @@X))
    {
      if (uint_address(arg1) == 0x55e3f2be1a30) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
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
      if (uint_address(arg0) == 0x55e3f2be1a30) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be15b0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15b0) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be15b0) // F1
            {
              const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
              const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
              return rewr_24_3(rewr_153_2(var_3, var_1), delayed_rewr_151_2<data_expression, data_expression>(var_2, var_4), delayed_rewr_152_2<data_expression, data_expression>(var_2, var_4)); // R1 if(@var_3 => @var_1, @var_2 < @var_4, @var_2 <= @var_4)
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
            return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc62c0), arg0, arg1);
  }

  static inline data_expression rewr_151_2_term(const application& t) { return rewr_151_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_151_2_term_arg_in_normal_form(const application& t) { return rewr_151_2(t[0], t[1]); }


  // [151] <: Pos # Pos -> Bool
  static inline const data_expression& rewr_151_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8b60);
  }

  static inline data_expression rewr_151_0_term(const application&) { return rewr_151_0(); }

  static inline data_expression rewr_151_0_term_arg_in_normal_form(const application&) { return rewr_151_0(); }


  // [155] !=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_155_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_25_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2c0b0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_155_2_term(const application& t) { return rewr_155_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_155_2_term_arg_in_normal_form(const application& t) { return rewr_155_2(t[0], t[1]); }


  // [155] !=: Pos # Pos -> Bool
  static inline const data_expression& rewr_155_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c2aec0);
  }

  static inline data_expression rewr_155_0_term(const application&) { return rewr_155_0(); }

  static inline data_expression rewr_155_0_term_arg_in_normal_form(const application&) { return rewr_155_0(); }


  // [25] ==: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_25_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (uint_address(arg0) == 0x55e3f2be1a30) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be15b0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2be15b0) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
            if (uint_address(arg1) == 0x55e3f2be1a30) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
            }
            else
            {
              if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2be15b0) // F1
              {
                const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
                const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
                return rewr_16_2(rewr_182_2(var_1, var_3), delayed_rewr_25_2<data_expression, data_expression>(var_2, var_4)); // R1 @var_1 == @var_3 && @var_2 == @var_4
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
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1a90), arg0, arg1);
  }

  static inline data_expression rewr_25_2_term(const application& t) { return rewr_25_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_25_2_term_arg_in_normal_form(const application& t) { return rewr_25_2(t[0], t[1]); }


  // [25] ==: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_25_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_25_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_25_2(m_t0, m_t1);
      }
  };
  
  // [25] ==: Pos # Pos -> Bool
  static inline const data_expression& rewr_25_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf85e0);
  }

  static inline data_expression rewr_25_0_term(const application&) { return rewr_25_0(); }

  static inline data_expression rewr_25_0_term_arg_in_normal_form(const application&) { return rewr_25_0(); }


  // [20] if: Bool # Position # Position -> Position
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_20_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1c40), arg0, arg1, arg2);
  }

  static inline data_expression rewr_20_3_term(const application& t) { return rewr_20_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_20_3_term_arg_in_normal_form(const application& t) { return rewr_20_3(t[0], t[1], t[2]); }


  // [20] if: Bool # Position # Position -> Position
  static inline const data_expression& rewr_20_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8610);
  }

  static inline data_expression rewr_20_0_term(const application&) { return rewr_20_0(); }

  static inline data_expression rewr_20_0_term_arg_in_normal_form(const application&) { return rewr_20_0(); }


  // [138] !=: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_138_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_19_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc6ad0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_138_2_term(const application& t) { return rewr_138_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_138_2_term_arg_in_normal_form(const application& t) { return rewr_138_2(t[0], t[1]); }


  // [138] !=: Position # Position -> Bool
  static inline const data_expression& rewr_138_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9f30);
  }

  static inline data_expression rewr_138_0_term(const application&) { return rewr_138_0(); }

  static inline data_expression rewr_138_0_term_arg_in_normal_form(const application&) { return rewr_138_0(); }


  // [19] ==: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_19_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_738_1(var_0), rewr_738_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_739_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_738_1<data_expression>(var_0), delayed_rewr_738_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1c70), arg0, arg1);
  }

  static inline data_expression rewr_19_2_term(const application& t) { return rewr_19_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_19_2_term_arg_in_normal_form(const application& t) { return rewr_19_2(t[0], t[1]); }


  // [738] @to_pos: Position -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_738_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_738_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_738_1(m_t0);
      }
  };
  
  // [19] ==: Position # Position -> Bool
  static inline const data_expression& rewr_19_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9ea0);
  }

  static inline data_expression rewr_19_0_term(const application&) { return rewr_19_0(); }

  static inline data_expression rewr_19_0_term_arg_in_normal_form(const application&) { return rewr_19_0(); }


  // [79] if: Bool # Recipe # Recipe -> Recipe
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_79_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f3b0), arg0, arg1, arg2);
  }

  static inline data_expression rewr_79_3_term(const application& t) { return rewr_79_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_79_3_term_arg_in_normal_form(const application& t) { return rewr_79_3(t[0], t[1], t[2]); }


  // [79] if: Bool # Recipe # Recipe -> Recipe
  static inline const data_expression& rewr_79_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9f00);
  }

  static inline data_expression rewr_79_0_term(const application&) { return rewr_79_0(); }

  static inline data_expression rewr_79_0_term_arg_in_normal_form(const application&) { return rewr_79_0(); }


  // [133] !=: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_133_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_174_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc6dd0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_133_2_term(const application& t) { return rewr_133_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_133_2_term_arg_in_normal_form(const application& t) { return rewr_133_2(t[0], t[1]); }


  // [133] !=: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_133_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cda030);
  }

  static inline data_expression rewr_133_0_term(const application&) { return rewr_133_0(); }

  static inline data_expression rewr_133_0_term_arg_in_normal_form(const application&) { return rewr_133_0(); }


  // [174] ==: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_174_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@S(@var_1, @@C(@to_pos(@var_0) != @to_pos(@var_1), @@R(false), @@C(@to_pos(@var_0) == @to_pos(@var_1), @@R(@equal_arguments(@var_0, @var_1)), @@M(@var_0, @@R(true), @@X))))))
    {
      const data_expression& var_0 = arg0; // S1
      const data_expression& var_1 = arg1; // S1
      if (rewr_155_2(delayed_rewr_756_1<data_expression>(var_0), delayed_rewr_756_1<data_expression>(var_1)) == sort_bool::true_()) // C
      {
        return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
      }
      else
      {
        if (rewr_25_2(rewr_756_1(var_0), rewr_756_1(var_1)) == sort_bool::true_()) // C
        {
          return rewr_757_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c50670), arg0, arg1);
  }

  static inline data_expression rewr_174_2_term(const application& t) { return rewr_174_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_174_2_term_arg_in_normal_form(const application& t) { return rewr_174_2(t[0], t[1]); }


  // [756] @to_pos: Recipe -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_756_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_756_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_756_1(m_t0);
      }
  };
  
  // [174] ==: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_174_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8b30);
  }

  static inline data_expression rewr_174_0_term(const application&) { return rewr_174_0(); }

  static inline data_expression rewr_174_0_term_arg_in_normal_form(const application&) { return rewr_174_0(); }


  // [127] !=: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_127_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_17_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc7100), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_127_2_term(const application& t) { return rewr_127_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_127_2_term_arg_in_normal_form(const application& t) { return rewr_127_2(t[0], t[1]); }


  // [127] !=: Robot # Robot -> Bool
  static inline const data_expression& rewr_127_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9ed0);
  }

  static inline data_expression rewr_127_0_term(const application&) { return rewr_127_0(); }

  static inline data_expression rewr_127_0_term_arg_in_normal_form(const application&) { return rewr_127_0(); }


  // [17] ==: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_17_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_774_1(var_0), rewr_774_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_775_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_774_1<data_expression>(var_0), delayed_rewr_774_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1d00), arg0, arg1);
  }

  static inline data_expression rewr_17_2_term(const application& t) { return rewr_17_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_17_2_term_arg_in_normal_form(const application& t) { return rewr_17_2(t[0], t[1]); }


  // [774] @to_pos: Robot -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_774_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_774_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_774_1(m_t0);
      }
  };
  
  // [17] ==: Robot # Robot -> Bool
  static inline const data_expression& rewr_17_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf88e0);
  }

  static inline data_expression rewr_17_0_term(const application&) { return rewr_17_0(); }

  static inline data_expression rewr_17_0_term_arg_in_normal_form(const application&) { return rewr_17_0(); }


  // [121] !=: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_121_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_28_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc7430), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_121_2_term(const application& t) { return rewr_121_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_121_2_term_arg_in_normal_form(const application& t) { return rewr_121_2(t[0], t[1]); }


  // [121] !=: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_121_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9fd0);
  }

  static inline data_expression rewr_121_0_term(const application&) { return rewr_121_0(); }

  static inline data_expression rewr_121_0_term_arg_in_normal_form(const application&) { return rewr_121_0(); }


  // [28] ==: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_28_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_793_1(var_0), rewr_793_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_794_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_793_1<data_expression>(var_0), delayed_rewr_793_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be19d0), arg0, arg1);
  }

  static inline data_expression rewr_28_2_term(const application& t) { return rewr_28_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_28_2_term_arg_in_normal_form(const application& t) { return rewr_28_2(t[0], t[1]); }


  // [793] @to_pos: ChuckStatus -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_793_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_793_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_793_1(m_t0);
      }
  };
  
  // [28] ==: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_28_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9a30);
  }

  static inline data_expression rewr_28_0_term(const application&) { return rewr_28_0(); }

  static inline data_expression rewr_28_0_term_arg_in_normal_form(const application&) { return rewr_28_0(); }


  // [115] !=: Enum5 # Enum5 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_115_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_114_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc7760), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_115_2_term(const application& t) { return rewr_115_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_115_2_term_arg_in_normal_form(const application& t) { return rewr_115_2(t[0], t[1]); }


  // [115] !=: Enum5 # Enum5 -> Bool
  static inline const data_expression& rewr_115_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8670);
  }

  static inline data_expression rewr_115_0_term(const application&) { return rewr_115_0(); }

  static inline data_expression rewr_115_0_term_arg_in_normal_form(const application&) { return rewr_115_0(); }


  // [114] ==: Enum5 # Enum5 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_114_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_818_1(var_0), rewr_818_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_819_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_818_1<data_expression>(var_0), delayed_rewr_818_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc7790), arg0, arg1);
  }

  static inline data_expression rewr_114_2_term(const application& t) { return rewr_114_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_114_2_term_arg_in_normal_form(const application& t) { return rewr_114_2(t[0], t[1]); }


  // [818] @to_pos: Enum5 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_818_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_818_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_818_1(m_t0);
      }
  };
  
  // [114] ==: Enum5 # Enum5 -> Bool
  static inline const data_expression& rewr_114_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9540);
  }

  static inline data_expression rewr_114_0_term(const application&) { return rewr_114_0(); }

  static inline data_expression rewr_114_0_term_arg_in_normal_form(const application&) { return rewr_114_0(); }


  // [75] if: Bool # Stack # Stack -> Stack
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_75_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f470), arg0, arg1, arg2);
  }

  static inline data_expression rewr_75_3_term(const application& t) { return rewr_75_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_75_3_term_arg_in_normal_form(const application& t) { return rewr_75_3(t[0], t[1], t[2]); }


  // [75] if: Bool # Stack # Stack -> Stack
  static inline const data_expression& rewr_75_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cda000);
  }

  static inline data_expression rewr_75_0_term(const application&) { return rewr_75_0(); }

  static inline data_expression rewr_75_0_term_arg_in_normal_form(const application&) { return rewr_75_0(); }


  // [109] !=: Stack # Stack -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_109_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_108_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc7a90), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_109_2_term(const application& t) { return rewr_109_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_109_2_term_arg_in_normal_form(const application& t) { return rewr_109_2(t[0], t[1]); }


  // [109] !=: Stack # Stack -> Bool
  static inline const data_expression& rewr_109_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9610);
  }

  static inline data_expression rewr_109_0_term(const application&) { return rewr_109_0(); }

  static inline data_expression rewr_109_0_term_arg_in_normal_form(const application&) { return rewr_109_0(); }


  // [108] ==: Stack # Stack -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_108_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_842_1(var_0), rewr_842_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_843_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_842_1<data_expression>(var_0), delayed_rewr_842_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc7ac0), arg0, arg1);
  }

  static inline data_expression rewr_108_2_term(const application& t) { return rewr_108_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_108_2_term_arg_in_normal_form(const application& t) { return rewr_108_2(t[0], t[1]); }


  // [842] @to_pos: Stack -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_842_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_842_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_842_1(m_t0);
      }
  };
  
  // [108] ==: Stack # Stack -> Bool
  static inline const data_expression& rewr_108_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd95e0);
  }

  static inline data_expression rewr_108_0_term(const application&) { return rewr_108_0(); }

  static inline data_expression rewr_108_0_term_arg_in_normal_form(const application&) { return rewr_108_0(); }


  // [102] !=: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_102_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_101_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc7df0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_102_2_term(const application& t) { return rewr_102_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_102_2_term_arg_in_normal_form(const application& t) { return rewr_102_2(t[0], t[1]); }


  // [102] !=: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_102_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9570);
  }

  static inline data_expression rewr_102_0_term(const application&) { return rewr_102_0(); }

  static inline data_expression rewr_102_0_term_arg_in_normal_form(const application&) { return rewr_102_0(); }


  // [101] ==: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_101_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_860_1(var_0), rewr_860_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_861_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_860_1<data_expression>(var_0), delayed_rewr_860_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2bc7e20), arg0, arg1);
  }

  static inline data_expression rewr_101_2_term(const application& t) { return rewr_101_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_101_2_term_arg_in_normal_form(const application& t) { return rewr_101_2(t[0], t[1]); }


  // [860] @to_pos: Enum3 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_860_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_860_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_860_1(m_t0);
      }
  };
  
  // [101] ==: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_101_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf89d0);
  }

  static inline data_expression rewr_101_0_term(const application&) { return rewr_101_0(); }

  static inline data_expression rewr_101_0_term_arg_in_normal_form(const application&) { return rewr_101_0(); }


  // [38] if: Bool # Stack1 # Stack1 -> Stack1
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_38_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1610), arg0, arg1, arg2);
  }

  static inline data_expression rewr_38_3_term(const application& t) { return rewr_38_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_38_3_term_arg_in_normal_form(const application& t) { return rewr_38_3(t[0], t[1], t[2]); }


  // [38] if: Bool # Stack1 # Stack1 -> Stack1
  static inline const data_expression& rewr_38_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8a80);
  }

  static inline data_expression rewr_38_0_term(const application&) { return rewr_38_0(); }

  static inline data_expression rewr_38_0_term_arg_in_normal_form(const application&) { return rewr_38_0(); }


  // [267] !=: Stack1 # Stack1 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_267_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_266_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4d2e0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_267_2_term(const application& t) { return rewr_267_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_267_2_term_arg_in_normal_form(const application& t) { return rewr_267_2(t[0], t[1]); }


  // [267] !=: Stack1 # Stack1 -> Bool
  static inline const data_expression& rewr_267_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfd510);
  }

  static inline data_expression rewr_267_0_term(const application&) { return rewr_267_0(); }

  static inline data_expression rewr_267_0_term_arg_in_normal_form(const application&) { return rewr_267_0(); }


  // [266] ==: Stack1 # Stack1 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_266_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_750_1(var_0), rewr_750_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_751_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_750_1<data_expression>(var_0), delayed_rewr_750_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4d310), arg0, arg1);
  }

  static inline data_expression rewr_266_2_term(const application& t) { return rewr_266_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_266_2_term_arg_in_normal_form(const application& t) { return rewr_266_2(t[0], t[1]); }


  // [750] @to_pos: Stack1 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_750_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_750_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_750_1(m_t0);
      }
  };
  
  // [266] ==: Stack1 # Stack1 -> Bool
  static inline const data_expression& rewr_266_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8a00);
  }

  static inline data_expression rewr_266_0_term(const application&) { return rewr_266_0(); }

  static inline data_expression rewr_266_0_term_arg_in_normal_form(const application&) { return rewr_266_0(); }


  // [260] !=: Enum6 # Enum6 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_260_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_259_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4d640), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_260_2_term(const application& t) { return rewr_260_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_260_2_term_arg_in_normal_form(const application& t) { return rewr_260_2(t[0], t[1]); }


  // [260] !=: Enum6 # Enum6 -> Bool
  static inline const data_expression& rewr_260_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfd540);
  }

  static inline data_expression rewr_260_0_term(const application&) { return rewr_260_0(); }

  static inline data_expression rewr_260_0_term_arg_in_normal_form(const application&) { return rewr_260_0(); }


  // [259] ==: Enum6 # Enum6 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_259_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_785_1(var_0), rewr_785_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_786_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_785_1<data_expression>(var_0), delayed_rewr_785_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4d670), arg0, arg1);
  }

  static inline data_expression rewr_259_2_term(const application& t) { return rewr_259_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_259_2_term_arg_in_normal_form(const application& t) { return rewr_259_2(t[0], t[1]); }


  // [785] @to_pos: Enum6 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_785_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_785_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_785_1(m_t0);
      }
  };
  
  // [259] ==: Enum6 # Enum6 -> Bool
  static inline const data_expression& rewr_259_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfd570);
  }

  static inline data_expression rewr_259_0_term(const application&) { return rewr_259_0(); }

  static inline data_expression rewr_259_0_term_arg_in_normal_form(const application&) { return rewr_259_0(); }


  // [253] !=: Stack2 # Stack2 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_253_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_205_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4d9a0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_253_2_term(const application& t) { return rewr_253_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_253_2_term_arg_in_normal_form(const application& t) { return rewr_253_2(t[0], t[1]); }


  // [253] !=: Stack2 # Stack2 -> Bool
  static inline const data_expression& rewr_253_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d01f00);
  }

  static inline data_expression rewr_253_0_term(const application&) { return rewr_253_0(); }

  static inline data_expression rewr_253_0_term_arg_in_normal_form(const application&) { return rewr_253_0(); }


  // [205] ==: Stack2 # Stack2 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_205_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_846_1(var_0), rewr_846_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_839_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_846_1<data_expression>(var_0), delayed_rewr_846_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4f3e0), arg0, arg1);
  }

  static inline data_expression rewr_205_2_term(const application& t) { return rewr_205_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_205_2_term_arg_in_normal_form(const application& t) { return rewr_205_2(t[0], t[1]); }


  // [846] @to_pos: Stack2 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_846_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_846_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_846_1(m_t0);
      }
  };
  
  // [205] ==: Stack2 # Stack2 -> Bool
  static inline const data_expression& rewr_205_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8820);
  }

  static inline data_expression rewr_205_0_term(const application&) { return rewr_205_0(); }

  static inline data_expression rewr_205_0_term_arg_in_normal_form(const application&) { return rewr_205_0(); }


  // [247] !=: Enum4 # Enum4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_247_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_246_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4dcd0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_247_2_term(const application& t) { return rewr_247_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_247_2_term_arg_in_normal_form(const application& t) { return rewr_247_2(t[0], t[1]); }


  // [247] !=: Enum4 # Enum4 -> Bool
  static inline const data_expression& rewr_247_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d025d0);
  }

  static inline data_expression rewr_247_0_term(const application&) { return rewr_247_0(); }

  static inline data_expression rewr_247_0_term_arg_in_normal_form(const application&) { return rewr_247_0(); }


  // [246] ==: Enum4 # Enum4 -> Bool
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
      if (rewr_25_2(rewr_854_1(var_0), rewr_854_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_855_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_854_1<data_expression>(var_0), delayed_rewr_854_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4dd00), arg0, arg1);
  }

  static inline data_expression rewr_246_2_term(const application& t) { return rewr_246_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_246_2_term_arg_in_normal_form(const application& t) { return rewr_246_2(t[0], t[1]); }


  // [854] @to_pos: Enum4 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_854_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_854_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_854_1(m_t0);
      }
  };
  
  // [246] ==: Enum4 # Enum4 -> Bool
  static inline const data_expression& rewr_246_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfd4e0);
  }

  static inline data_expression rewr_246_0_term(const application&) { return rewr_246_0(); }

  static inline data_expression rewr_246_0_term_arg_in_normal_form(const application&) { return rewr_246_0(); }


  // [240] !=: Enum21 # Enum21 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_240_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_239_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4e030), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_240_2_term(const application& t) { return rewr_240_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_240_2_term_arg_in_normal_form(const application& t) { return rewr_240_2(t[0], t[1]); }


  // [240] !=: Enum21 # Enum21 -> Bool
  static inline const data_expression& rewr_240_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9fa0);
  }

  static inline data_expression rewr_240_0_term(const application&) { return rewr_240_0(); }

  static inline data_expression rewr_240_0_term_arg_in_normal_form(const application&) { return rewr_240_0(); }


  // [239] ==: Enum21 # Enum21 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_239_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_921_1(var_0), rewr_921_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_922_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_921_1<data_expression>(var_0), delayed_rewr_921_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4e060), arg0, arg1);
  }

  static inline data_expression rewr_239_2_term(const application& t) { return rewr_239_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_239_2_term_arg_in_normal_form(const application& t) { return rewr_239_2(t[0], t[1]); }


  // [921] @to_pos: Enum21 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_921_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_921_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_921_1(m_t0);
      }
  };
  
  // [239] ==: Enum21 # Enum21 -> Bool
  static inline const data_expression& rewr_239_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9600);
  }

  static inline data_expression rewr_239_0_term(const application&) { return rewr_239_0(); }

  static inline data_expression rewr_239_0_term_arg_in_normal_form(const application&) { return rewr_239_0(); }


  // [233] !=: Stack3 # Stack3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_233_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_190_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4e390), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_233_2_term(const application& t) { return rewr_233_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_233_2_term_arg_in_normal_form(const application& t) { return rewr_233_2(t[0], t[1]); }


  // [233] !=: Stack3 # Stack3 -> Bool
  static inline const data_expression& rewr_233_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf8490);
  }

  static inline data_expression rewr_233_0_term(const application&) { return rewr_233_0(); }

  static inline data_expression rewr_233_0_term_arg_in_normal_form(const application&) { return rewr_233_0(); }


  // [190] ==: Stack3 # Stack3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_190_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_952_1(var_0), rewr_952_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_953_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_952_1<data_expression>(var_0), delayed_rewr_952_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4fd10), arg0, arg1);
  }

  static inline data_expression rewr_190_2_term(const application& t) { return rewr_190_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_190_2_term_arg_in_normal_form(const application& t) { return rewr_190_2(t[0], t[1]); }


  // [952] @to_pos: Stack3 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_952_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_952_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_952_1(m_t0);
      }
  };
  
  // [190] ==: Stack3 # Stack3 -> Bool
  static inline const data_expression& rewr_190_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd8960);
  }

  static inline data_expression rewr_190_0_term(const application&) { return rewr_190_0(); }

  static inline data_expression rewr_190_0_term_arg_in_normal_form(const application&) { return rewr_190_0(); }


  // [84] if: Bool # Stack4 # Stack4 -> Stack4
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_84_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x55e3f2bc5ff0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x55e3f2be11c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f2c0), arg0, arg1, arg2);
  }

  static inline data_expression rewr_84_3_term(const application& t) { return rewr_84_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_84_3_term_arg_in_normal_form(const application& t) { return rewr_84_3(t[0], t[1], t[2]); }


  // [84] if: Bool # Stack4 # Stack4 -> Stack4
  static inline const data_expression& rewr_84_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d024a0);
  }

  static inline data_expression rewr_84_0_term(const application&) { return rewr_84_0(); }

  static inline data_expression rewr_84_0_term_arg_in_normal_form(const application&) { return rewr_84_0(); }


  // [228] !=: Stack4 # Stack4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_228_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_227_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4e690), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_228_2_term(const application& t) { return rewr_228_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_228_2_term_arg_in_normal_form(const application& t) { return rewr_228_2(t[0], t[1]); }


  // [228] !=: Stack4 # Stack4 -> Bool
  static inline const data_expression& rewr_228_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9630);
  }

  static inline data_expression rewr_228_0_term(const application&) { return rewr_228_0(); }

  static inline data_expression rewr_228_0_term_arg_in_normal_form(const application&) { return rewr_228_0(); }


  // [227] ==: Stack4 # Stack4 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_227_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_25_2(rewr_976_1(var_0), rewr_976_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_977_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_155_2(delayed_rewr_976_1<data_expression>(var_0), delayed_rewr_976_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4e6c0), arg0, arg1);
  }

  static inline data_expression rewr_227_2_term(const application& t) { return rewr_227_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_227_2_term_arg_in_normal_form(const application& t) { return rewr_227_2(t[0], t[1]); }


  // [976] @to_pos: Stack4 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_976_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_976_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_976_1(m_t0);
      }
  };
  
  // [227] ==: Stack4 # Stack4 -> Bool
  static inline const data_expression& rewr_227_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfc460);
  }

  static inline data_expression rewr_227_0_term(const application&) { return rewr_227_0(); }

  static inline data_expression rewr_227_0_term_arg_in_normal_form(const application&) { return rewr_227_0(); }


  // [221] !=: @NatPair # @NatPair -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_221_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_220_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4e9f0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_221_2_term(const application& t) { return rewr_221_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_221_2_term_arg_in_normal_form(const application& t) { return rewr_221_2(t[0], t[1]); }


  // [221] !=: @NatPair # @NatPair -> Bool
  static inline const data_expression& rewr_221_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d01de0);
  }

  static inline data_expression rewr_221_0_term(const application&) { return rewr_221_0(); }

  static inline data_expression rewr_221_0_term_arg_in_normal_form(const application&) { return rewr_221_0(); }


  // [220] ==: @NatPair # @NatPair -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_220_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x55e3f2c2be10) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x55e3f2c2be10) // F1
          {
            const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
            const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
            return rewr_16_2(rewr_71_2(var_1, var_3), delayed_rewr_71_2<data_expression, data_expression>(var_2, var_4)); // R1 @var_1 == @var_3 && @var_2 == @var_4
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
          return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4ea20), arg0, arg1);
  }

  static inline data_expression rewr_220_2_term(const application& t) { return rewr_220_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_220_2_term_arg_in_normal_form(const application& t) { return rewr_220_2(t[0], t[1]); }


  // [220] ==: @NatPair # @NatPair -> Bool
  static inline const data_expression& rewr_220_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfcdc0);
  }

  static inline data_expression rewr_220_0_term(const application&) { return rewr_220_0(); }

  static inline data_expression rewr_220_0_term_arg_in_normal_form(const application&) { return rewr_220_0(); }


  // [214] !=: (Enum4 # Robot # Robot # Robot # Robot -> Robot) # (Enum4 # Robot # Robot # Robot # Robot -> Robot) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_214_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_213_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4ee70), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_214_2_term(const application& t) { return rewr_214_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_214_2_term_arg_in_normal_form(const application& t) { return rewr_214_2(t[0], t[1]); }


  // [214] !=: (Enum4 # Robot # Robot # Robot # Robot -> Robot) # (Enum4 # Robot # Robot # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_214_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d01ed0);
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
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(27), rewr_17_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(8))))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Robot. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4eea0), arg0, arg1);
  }

  static inline data_expression rewr_213_2_term(const application& t) { return rewr_213_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_213_2_term_arg_in_normal_form(const application& t) { return rewr_213_2(t[0], t[1]); }


  // [213] ==: (Enum4 # Robot # Robot # Robot # Robot -> Robot) # (Enum4 # Robot # Robot # Robot # Robot -> Robot) -> Bool
  static inline const data_expression& rewr_213_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02b60);
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
      return rewr_15_1(rewr_206_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4f2f0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_207_2_term(const application& t) { return rewr_207_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_207_2_term_arg_in_normal_form(const application& t) { return rewr_207_2(t[0], t[1]); }


  // [207] !=: (Enum4 # Position # Position # Position # Position -> Position) # (Enum4 # Position # Position # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_207_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfd5e0);
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
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(28), rewr_19_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9)), static_cast<data_expression>(this_rewriter->bound_variable_get(9))))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Position. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4f320), arg0, arg1);
  }

  static inline data_expression rewr_206_2_term(const application& t) { return rewr_206_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_206_2_term_arg_in_normal_form(const application& t) { return rewr_206_2(t[0], t[1]); }


  // [206] ==: (Enum4 # Position # Position # Position # Position -> Position) # (Enum4 # Position # Position # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_206_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02c60);
  }

  static inline data_expression rewr_206_0_term(const application&) { return rewr_206_0(); }

  static inline data_expression rewr_206_0_term_arg_in_normal_form(const application&) { return rewr_206_0(); }


  // [199] !=: (Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2) # (Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_199_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_198_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4f7a0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_199_2_term(const application& t) { return rewr_199_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_199_2_term_arg_in_normal_form(const application& t) { return rewr_199_2(t[0], t[1]); }


  // [199] !=: (Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2) # (Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2) -> Bool
  static inline const data_expression& rewr_199_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf86a0);
  }

  static inline data_expression rewr_199_0_term(const application&) { return rewr_199_0(); }

  static inline data_expression rewr_199_0_term_arg_in_normal_form(const application&) { return rewr_199_0(); }


  // [198] ==: (Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2) # (Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_198_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum4, x0,x0,x0,x0: Stack2. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(29), rewr_205_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Stack2. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4f7d0), arg0, arg1);
  }

  static inline data_expression rewr_198_2_term(const application& t) { return rewr_198_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_198_2_term_arg_in_normal_form(const application& t) { return rewr_198_2(t[0], t[1]); }


  // [198] ==: (Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2) # (Enum4 # Stack2 # Stack2 # Stack2 # Stack2 -> Stack2) -> Bool
  static inline const data_expression& rewr_198_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf9640);
  }

  static inline data_expression rewr_198_0_term(const application&) { return rewr_198_0(); }

  static inline data_expression rewr_198_0_term_arg_in_normal_form(const application&) { return rewr_198_0(); }


  // [192] !=: (Enum4 # Bool # Bool # Bool # Bool -> Bool) # (Enum4 # Bool # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_192_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_191_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4fc20), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_192_2_term(const application& t) { return rewr_192_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_192_2_term_arg_in_normal_form(const application& t) { return rewr_192_2(t[0], t[1]); }


  // [192] !=: (Enum4 # Bool # Bool # Bool # Bool -> Bool) # (Enum4 # Bool # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_192_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02d10);
  }

  static inline data_expression rewr_192_0_term(const application&) { return rewr_192_0(); }

  static inline data_expression rewr_192_0_term_arg_in_normal_form(const application&) { return rewr_192_0(); }


  // [191] ==: (Enum4 # Bool # Bool # Bool # Bool -> Bool) # (Enum4 # Bool # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_191_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum4, x0,x0,x0,x0: Bool. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(30), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(13)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), delayed_application5<data_expression,data_expression,data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(13)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), true, sigma())); // R1 forall x0: Enum4, x0,x0,x0,x0: Bool. @var_0(x0, x0, x0, x0, x0) == @var_1(x0, x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c4fc50), arg0, arg1);
  }

  static inline data_expression rewr_191_2_term(const application& t) { return rewr_191_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_191_2_term_arg_in_normal_form(const application& t) { return rewr_191_2(t[0], t[1]); }


  // [191] ==: (Enum4 # Bool # Bool # Bool # Bool -> Bool) # (Enum4 # Bool # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_191_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf96d0);
  }

  static inline data_expression rewr_191_0_term(const application&) { return rewr_191_0(); }

  static inline data_expression rewr_191_0_term_arg_in_normal_form(const application&) { return rewr_191_0(); }


  // [184] !=: (Enum3 # Stack3 # Stack3 # Stack3 -> Stack3) # (Enum3 # Stack3 # Stack3 # Stack3 -> Stack3) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_184_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_183_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c500d0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_184_2_term(const application& t) { return rewr_184_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_184_2_term_arg_in_normal_form(const application& t) { return rewr_184_2(t[0], t[1]); }


  // [184] !=: (Enum3 # Stack3 # Stack3 # Stack3 -> Stack3) # (Enum3 # Stack3 # Stack3 # Stack3 -> Stack3) -> Bool
  static inline const data_expression& rewr_184_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf9700);
  }

  static inline data_expression rewr_184_0_term(const application&) { return rewr_184_0(); }

  static inline data_expression rewr_184_0_term_arg_in_normal_form(const application&) { return rewr_184_0(); }


  // [183] ==: (Enum3 # Stack3 # Stack3 # Stack3 -> Stack3) # (Enum3 # Stack3 # Stack3 # Stack3 -> Stack3) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_183_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Stack3. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(31), rewr_190_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(12)), static_cast<data_expression>(this_rewriter->bound_variable_get(12)), static_cast<data_expression>(this_rewriter->bound_variable_get(12)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(12)), static_cast<data_expression>(this_rewriter->bound_variable_get(12)), static_cast<data_expression>(this_rewriter->bound_variable_get(12))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Stack3. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c50100), arg0, arg1);
  }

  static inline data_expression rewr_183_2_term(const application& t) { return rewr_183_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_183_2_term_arg_in_normal_form(const application& t) { return rewr_183_2(t[0], t[1]); }


  // [183] ==: (Enum3 # Stack3 # Stack3 # Stack3 -> Stack3) # (Enum3 # Stack3 # Stack3 # Stack3 -> Stack3) -> Bool
  static inline const data_expression& rewr_183_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf97e0);
  }

  static inline data_expression rewr_183_0_term(const application&) { return rewr_183_0(); }

  static inline data_expression rewr_183_0_term_arg_in_normal_form(const application&) { return rewr_183_0(); }


  // [176] !=: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_176_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_175_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c50580), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_176_2_term(const application& t) { return rewr_176_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_176_2_term_arg_in_normal_form(const application& t) { return rewr_176_2(t[0], t[1]); }


  // [176] !=: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_176_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02630);
  }

  static inline data_expression rewr_176_0_term(const application&) { return rewr_176_0(); }

  static inline data_expression rewr_176_0_term_arg_in_normal_form(const application&) { return rewr_176_0(); }


  // [175] ==: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_175_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Bool. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(32), rewr_182_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), delayed_application4<data_expression,data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(14)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Bool. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c505b0), arg0, arg1);
  }

  static inline data_expression rewr_175_2_term(const application& t) { return rewr_175_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_175_2_term_arg_in_normal_form(const application& t) { return rewr_175_2(t[0], t[1]); }


  // [175] ==: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_175_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf9610);
  }

  static inline data_expression rewr_175_0_term(const application&) { return rewr_175_0(); }

  static inline data_expression rewr_175_0_term_arg_in_normal_form(const application&) { return rewr_175_0(); }


  // [168] !=: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_168_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_15_1(rewr_167_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c50a90), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_168_2_term(const application& t) { return rewr_168_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_168_2_term_arg_in_normal_form(const application& t) { return rewr_168_2(t[0], t[1]); }


  // [168] !=: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_168_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d01ad0);
  }

  static inline data_expression rewr_168_0_term(const application&) { return rewr_168_0(); }

  static inline data_expression rewr_168_0_term_arg_in_normal_form(const application&) { return rewr_168_0(); }


  // [167] ==: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_167_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(33), rewr_174_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(14)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x55e3f2c22730); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c50ac0), arg0, arg1);
  }

  static inline data_expression rewr_167_2_term(const application& t) { return rewr_167_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_167_2_term_arg_in_normal_form(const application& t) { return rewr_167_2(t[0], t[1]); }


  // [167] ==: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_167_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02c10);
  }

  static inline data_expression rewr_167_0_term(const application&) { return rewr_167_0(); }

  static inline data_expression rewr_167_0_term_arg_in_normal_form(const application&) { return rewr_167_0(); }


  // [88] emptystack4: Stack4
  static inline const data_expression& rewr_88_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02d70);
  }

  static inline data_expression rewr_88_0_term(const application&) { return rewr_88_0(); }

  static inline data_expression rewr_88_0_term_arg_in_normal_form(const application&) { return rewr_88_0(); }


  // [86] push4: Pos # Nat # Recipe # Bool # Stack4 -> Stack4
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_86_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f260), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1), local_rewrite(arg_not_nf2), local_rewrite(arg_not_nf3), local_rewrite(arg_not_nf4));
  }

  static inline data_expression rewr_86_5_term(const application& t) { return rewr_86_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_86_5_term_arg_in_normal_form(const application& t) { return rewr_86_5(t[0], t[1], t[2], t[3], t[4]); }


  // [86] push4: Pos # Nat # Recipe # Bool # Stack4 -> Stack4
  static inline const data_expression& rewr_86_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf97b0);
  }

  static inline data_expression rewr_86_0_term(const application&) { return rewr_86_0(); }

  static inline data_expression rewr_86_0_term_arg_in_normal_form(const application&) { return rewr_86_0(); }


  // [70] emptystack3: Stack3
  static inline const data_expression& rewr_70_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02d40);
  }

  static inline data_expression rewr_70_0_term(const application&) { return rewr_70_0(); }

  static inline data_expression rewr_70_0_term_arg_in_normal_form(const application&) { return rewr_70_0(); }


  // [66] push3: Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4, class DATA_EXPR5, class DATA_EXPR6, class DATA_EXPR7, class DATA_EXPR8, class DATA_EXPR9, class DATA_EXPR10, class DATA_EXPR11>
  static inline data_expression rewr_66_12(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4, const DATA_EXPR5& arg_not_nf5, const DATA_EXPR6& arg_not_nf6, const DATA_EXPR7& arg_not_nf7, const DATA_EXPR8& arg_not_nf8, const DATA_EXPR9& arg_not_nf9, const DATA_EXPR10& arg_not_nf10, const DATA_EXPR11& arg_not_nf11)

  {
    return make_term_with_many_arguments(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f860), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1), local_rewrite(arg_not_nf2), local_rewrite(arg_not_nf3), local_rewrite(arg_not_nf4), local_rewrite(arg_not_nf5), local_rewrite(arg_not_nf6), local_rewrite(arg_not_nf7), local_rewrite(arg_not_nf8), local_rewrite(arg_not_nf9), local_rewrite(arg_not_nf10), local_rewrite(arg_not_nf11));
  }

  static inline data_expression rewr_66_12_term(const application& t) { return rewr_66_12(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4]), term_not_in_normal_form(t[5]), term_not_in_normal_form(t[6]), term_not_in_normal_form(t[7]), term_not_in_normal_form(t[8]), term_not_in_normal_form(t[9]), term_not_in_normal_form(t[10]), term_not_in_normal_form(t[11])); }

  static inline data_expression rewr_66_12_term_arg_in_normal_form(const application& t) { return rewr_66_12(t[0], t[1], t[2], t[3], t[4], t[5], t[6], t[7], t[8], t[9], t[10], t[11]); }


  // [66] push3: Pos # Robot # Position # Position # Robot # Position # Position # Recipe # Bool # Bool # Bool # Stack3 -> Stack3
  static inline const data_expression& rewr_66_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf96a0);
  }

  static inline data_expression rewr_66_0_term(const application&) { return rewr_66_0(); }

  static inline data_expression rewr_66_0_term_arg_in_normal_form(const application&) { return rewr_66_0(); }


  // [916] e0_21: Enum21
  static inline const data_expression& rewr_916_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02ff0);
  }

  static inline data_expression rewr_916_0_term(const application&) { return rewr_916_0(); }

  static inline data_expression rewr_916_0_term_arg_in_normal_form(const application&) { return rewr_916_0(); }


  // [915] e1_21: Enum21
  static inline const data_expression& rewr_915_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d01e50);
  }

  static inline data_expression rewr_915_0_term(const application&) { return rewr_915_0(); }

  static inline data_expression rewr_915_0_term_arg_in_normal_form(const application&) { return rewr_915_0(); }


  // [914] e2_21: Enum21
  static inline const data_expression& rewr_914_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02660);
  }

  static inline data_expression rewr_914_0_term(const application&) { return rewr_914_0(); }

  static inline data_expression rewr_914_0_term_arg_in_normal_form(const application&) { return rewr_914_0(); }


  // [913] e3_21: Enum21
  static inline const data_expression& rewr_913_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d026d0);
  }

  static inline data_expression rewr_913_0_term(const application&) { return rewr_913_0(); }

  static inline data_expression rewr_913_0_term_arg_in_normal_form(const application&) { return rewr_913_0(); }


  // [912] e4_21: Enum21
  static inline const data_expression& rewr_912_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd8d70);
  }

  static inline data_expression rewr_912_0_term(const application&) { return rewr_912_0(); }

  static inline data_expression rewr_912_0_term_arg_in_normal_form(const application&) { return rewr_912_0(); }


  // [911] e5_21: Enum21
  static inline const data_expression& rewr_911_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd8de0);
  }

  static inline data_expression rewr_911_0_term(const application&) { return rewr_911_0(); }

  static inline data_expression rewr_911_0_term_arg_in_normal_form(const application&) { return rewr_911_0(); }


  // [910] e6_21: Enum21
  static inline const data_expression& rewr_910_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf7ad0);
  }

  static inline data_expression rewr_910_0_term(const application&) { return rewr_910_0(); }

  static inline data_expression rewr_910_0_term_arg_in_normal_form(const application&) { return rewr_910_0(); }


  // [909] e7_21: Enum21
  static inline const data_expression& rewr_909_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf7b40);
  }

  static inline data_expression rewr_909_0_term(const application&) { return rewr_909_0(); }

  static inline data_expression rewr_909_0_term_arg_in_normal_form(const application&) { return rewr_909_0(); }


  // [908] e8_21: Enum21
  static inline const data_expression& rewr_908_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf7bb0);
  }

  static inline data_expression rewr_908_0_term(const application&) { return rewr_908_0(); }

  static inline data_expression rewr_908_0_term_arg_in_normal_form(const application&) { return rewr_908_0(); }


  // [907] e9_21: Enum21
  static inline const data_expression& rewr_907_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf7c20);
  }

  static inline data_expression rewr_907_0_term(const application&) { return rewr_907_0(); }

  static inline data_expression rewr_907_0_term_arg_in_normal_form(const application&) { return rewr_907_0(); }


  // [906] e10_21: Enum21
  static inline const data_expression& rewr_906_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf7c90);
  }

  static inline data_expression rewr_906_0_term(const application&) { return rewr_906_0(); }

  static inline data_expression rewr_906_0_term_arg_in_normal_form(const application&) { return rewr_906_0(); }


  // [905] e11_21: Enum21
  static inline const data_expression& rewr_905_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd97c0);
  }

  static inline data_expression rewr_905_0_term(const application&) { return rewr_905_0(); }

  static inline data_expression rewr_905_0_term_arg_in_normal_form(const application&) { return rewr_905_0(); }


  // [904] e12_21: Enum21
  static inline const data_expression& rewr_904_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9830);
  }

  static inline data_expression rewr_904_0_term(const application&) { return rewr_904_0(); }

  static inline data_expression rewr_904_0_term_arg_in_normal_form(const application&) { return rewr_904_0(); }


  // [903] e13_21: Enum21
  static inline const data_expression& rewr_903_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd98a0);
  }

  static inline data_expression rewr_903_0_term(const application&) { return rewr_903_0(); }

  static inline data_expression rewr_903_0_term_arg_in_normal_form(const application&) { return rewr_903_0(); }


  // [902] e14_21: Enum21
  static inline const data_expression& rewr_902_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd9910);
  }

  static inline data_expression rewr_902_0_term(const application&) { return rewr_902_0(); }

  static inline data_expression rewr_902_0_term_arg_in_normal_form(const application&) { return rewr_902_0(); }


  // [901] e15_21: Enum21
  static inline const data_expression& rewr_901_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d034a0);
  }

  static inline data_expression rewr_901_0_term(const application&) { return rewr_901_0(); }

  static inline data_expression rewr_901_0_term_arg_in_normal_form(const application&) { return rewr_901_0(); }


  // [900] e16_21: Enum21
  static inline const data_expression& rewr_900_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfa3f0);
  }

  static inline data_expression rewr_900_0_term(const application&) { return rewr_900_0(); }

  static inline data_expression rewr_900_0_term_arg_in_normal_form(const application&) { return rewr_900_0(); }


  // [899] e17_21: Enum21
  static inline const data_expression& rewr_899_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfa460);
  }

  static inline data_expression rewr_899_0_term(const application&) { return rewr_899_0(); }

  static inline data_expression rewr_899_0_term_arg_in_normal_form(const application&) { return rewr_899_0(); }


  // [898] e18_21: Enum21
  static inline const data_expression& rewr_898_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfa4d0);
  }

  static inline data_expression rewr_898_0_term(const application&) { return rewr_898_0(); }

  static inline data_expression rewr_898_0_term_arg_in_normal_form(const application&) { return rewr_898_0(); }


  // [897] e19_21: Enum21
  static inline const data_expression& rewr_897_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bfa540);
  }

  static inline data_expression rewr_897_0_term(const application&) { return rewr_897_0(); }

  static inline data_expression rewr_897_0_term_arg_in_normal_form(const application&) { return rewr_897_0(); }


  // [896] e20_21: Enum21
  static inline const data_expression& rewr_896_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d034d0);
  }

  static inline data_expression rewr_896_0_term(const application&) { return rewr_896_0(); }

  static inline data_expression rewr_896_0_term_arg_in_normal_form(const application&) { return rewr_896_0(); }


  // [11] e0_4: Enum4
  static inline const data_expression& rewr_11_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf2340);
  }

  static inline data_expression rewr_11_0_term(const application&) { return rewr_11_0(); }

  static inline data_expression rewr_11_0_term_arg_in_normal_form(const application&) { return rewr_11_0(); }


  // [10] e1_4: Enum4
  static inline const data_expression& rewr_10_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf23b0);
  }

  static inline data_expression rewr_10_0_term(const application&) { return rewr_10_0(); }

  static inline data_expression rewr_10_0_term_arg_in_normal_form(const application&) { return rewr_10_0(); }


  // [9] e2_4: Enum4
  static inline const data_expression& rewr_9_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf2420);
  }

  static inline data_expression rewr_9_0_term(const application&) { return rewr_9_0(); }

  static inline data_expression rewr_9_0_term_arg_in_normal_form(const application&) { return rewr_9_0(); }


  // [8] e3_4: Enum4
  static inline const data_expression& rewr_8_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bf2490);
  }

  static inline data_expression rewr_8_0_term(const application&) { return rewr_8_0(); }

  static inline data_expression rewr_8_0_term_arg_in_normal_form(const application&) { return rewr_8_0(); }


  // [99] emptystack2: Stack2
  static inline const data_expression& rewr_99_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d03710);
  }

  static inline data_expression rewr_99_0_term(const application&) { return rewr_99_0(); }

  static inline data_expression rewr_99_0_term_arg_in_normal_form(const application&) { return rewr_99_0(); }


  // [54] push2: Pos # Robot # Position # Position # Bool # Stack2 -> Stack2
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4, class DATA_EXPR5>
  static inline data_expression rewr_54_6(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4, const DATA_EXPR5& arg_not_nf5)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be0fe0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1), local_rewrite(arg_not_nf2), local_rewrite(arg_not_nf3), local_rewrite(arg_not_nf4), local_rewrite(arg_not_nf5));
  }

  static inline data_expression rewr_54_6_term(const application& t) { return rewr_54_6(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4]), term_not_in_normal_form(t[5])); }

  static inline data_expression rewr_54_6_term_arg_in_normal_form(const application& t) { return rewr_54_6(t[0], t[1], t[2], t[3], t[4], t[5]); }


  // [54] push2: Pos # Robot # Position # Position # Bool # Stack2 -> Stack2
  static inline const data_expression& rewr_54_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9750);
  }

  static inline data_expression rewr_54_0_term(const application&) { return rewr_54_0(); }

  static inline data_expression rewr_54_0_term_arg_in_normal_form(const application&) { return rewr_54_0(); }


  // [790] e0_6: Enum6
  static inline const data_expression& rewr_790_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d029b0);
  }

  static inline data_expression rewr_790_0_term(const application&) { return rewr_790_0(); }

  static inline data_expression rewr_790_0_term_arg_in_normal_form(const application&) { return rewr_790_0(); }


  // [797] e1_6: Enum6
  static inline const data_expression& rewr_797_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d029e0);
  }

  static inline data_expression rewr_797_0_term(const application&) { return rewr_797_0(); }

  static inline data_expression rewr_797_0_term_arg_in_normal_form(const application&) { return rewr_797_0(); }


  // [789] e2_6: Enum6
  static inline const data_expression& rewr_789_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d039a0);
  }

  static inline data_expression rewr_789_0_term(const application&) { return rewr_789_0(); }

  static inline data_expression rewr_789_0_term_arg_in_normal_form(const application&) { return rewr_789_0(); }


  // [784] e3_6: Enum6
  static inline const data_expression& rewr_784_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d03a10);
  }

  static inline data_expression rewr_784_0_term(const application&) { return rewr_784_0(); }

  static inline data_expression rewr_784_0_term_arg_in_normal_form(const application&) { return rewr_784_0(); }


  // [783] e4_6: Enum6
  static inline const data_expression& rewr_783_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d03540);
  }

  static inline data_expression rewr_783_0_term(const application&) { return rewr_783_0(); }

  static inline data_expression rewr_783_0_term_arg_in_normal_form(const application&) { return rewr_783_0(); }


  // [782] e5_6: Enum6
  static inline const data_expression& rewr_782_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d035b0);
  }

  static inline data_expression rewr_782_0_term(const application&) { return rewr_782_0(); }

  static inline data_expression rewr_782_0_term_arg_in_normal_form(const application&) { return rewr_782_0(); }


  // [42] emptystack1: Stack1
  static inline const data_expression& rewr_42_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d03a80);
  }

  static inline data_expression rewr_42_0_term(const application&) { return rewr_42_0(); }

  static inline data_expression rewr_42_0_term_arg_in_normal_form(const application&) { return rewr_42_0(); }


  // [39] push1: Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4, class DATA_EXPR5, class DATA_EXPR6, class DATA_EXPR7, class DATA_EXPR8, class DATA_EXPR9>
  static inline data_expression rewr_39_10(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4, const DATA_EXPR5& arg_not_nf5, const DATA_EXPR6& arg_not_nf6, const DATA_EXPR7& arg_not_nf7, const DATA_EXPR8& arg_not_nf8, const DATA_EXPR9& arg_not_nf9)

  {
    return make_term_with_many_arguments(data_expression((atermpp::detail::_aterm*)0x55e3f2be15e0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1), local_rewrite(arg_not_nf2), local_rewrite(arg_not_nf3), local_rewrite(arg_not_nf4), local_rewrite(arg_not_nf5), local_rewrite(arg_not_nf6), local_rewrite(arg_not_nf7), local_rewrite(arg_not_nf8), local_rewrite(arg_not_nf9));
  }

  static inline data_expression rewr_39_10_term(const application& t) { return rewr_39_10(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4]), term_not_in_normal_form(t[5]), term_not_in_normal_form(t[6]), term_not_in_normal_form(t[7]), term_not_in_normal_form(t[8]), term_not_in_normal_form(t[9])); }

  static inline data_expression rewr_39_10_term_arg_in_normal_form(const application& t) { return rewr_39_10(t[0], t[1], t[2], t[3], t[4], t[5], t[6], t[7], t[8], t[9]); }


  // [39] push1: Pos # Robot # Position # Position # Bool # Nat # Nat # ChuckStatus # ChuckStatus # Stack1 -> Stack1
  static inline const data_expression& rewr_39_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d03670);
  }

  static inline data_expression rewr_39_0_term(const application&) { return rewr_39_0(); }

  static inline data_expression rewr_39_0_term_arg_in_normal_form(const application&) { return rewr_39_0(); }


  // [14] e0_3: Enum3
  static inline const data_expression& rewr_14_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c3ebc0);
  }

  static inline data_expression rewr_14_0_term(const application&) { return rewr_14_0(); }

  static inline data_expression rewr_14_0_term_arg_in_normal_form(const application&) { return rewr_14_0(); }


  // [13] e1_3: Enum3
  static inline const data_expression& rewr_13_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c3ec30);
  }

  static inline data_expression rewr_13_0_term(const application&) { return rewr_13_0(); }

  static inline data_expression rewr_13_0_term_arg_in_normal_form(const application&) { return rewr_13_0(); }


  // [12] e2_3: Enum3
  static inline const data_expression& rewr_12_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d036e0);
  }

  static inline data_expression rewr_12_0_term(const application&) { return rewr_12_0(); }

  static inline data_expression rewr_12_0_term_arg_in_normal_form(const application&) { return rewr_12_0(); }


  // [83] emptystack: Stack
  static inline const data_expression& rewr_83_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c3ecf0);
  }

  static inline data_expression rewr_83_0_term(const application&) { return rewr_83_0(); }

  static inline data_expression rewr_83_0_term_arg_in_normal_form(const application&) { return rewr_83_0(); }


  // [76] push: Pos # Nat # Recipe # Bool # Stack -> Stack
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3, class DATA_EXPR4>
  static inline data_expression rewr_76_5(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3, const DATA_EXPR4& arg_not_nf4)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2f440), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1), local_rewrite(arg_not_nf2), local_rewrite(arg_not_nf3), local_rewrite(arg_not_nf4));
  }

  static inline data_expression rewr_76_5_term(const application& t) { return rewr_76_5(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3]), term_not_in_normal_form(t[4])); }

  static inline data_expression rewr_76_5_term_arg_in_normal_form(const application& t) { return rewr_76_5(t[0], t[1], t[2], t[3], t[4]); }


  // [76] push: Pos # Nat # Recipe # Bool # Stack -> Stack
  static inline const data_expression& rewr_76_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d03950);
  }

  static inline data_expression rewr_76_0_term(const application&) { return rewr_76_0(); }

  static inline data_expression rewr_76_0_term_arg_in_normal_form(const application&) { return rewr_76_0(); }


  // [813] e0_5: Enum5
  static inline const data_expression& rewr_813_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2fb10);
  }

  static inline data_expression rewr_813_0_term(const application&) { return rewr_813_0(); }

  static inline data_expression rewr_813_0_term_arg_in_normal_form(const application&) { return rewr_813_0(); }


  // [812] e1_5: Enum5
  static inline const data_expression& rewr_812_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2fb90);
  }

  static inline data_expression rewr_812_0_term(const application&) { return rewr_812_0(); }

  static inline data_expression rewr_812_0_term_arg_in_normal_form(const application&) { return rewr_812_0(); }


  // [811] e2_5: Enum5
  static inline const data_expression& rewr_811_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2fc10);
  }

  static inline data_expression rewr_811_0_term(const application&) { return rewr_811_0(); }

  static inline data_expression rewr_811_0_term_arg_in_normal_form(const application&) { return rewr_811_0(); }


  // [810] e3_5: Enum5
  static inline const data_expression& rewr_810_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2fc90);
  }

  static inline data_expression rewr_810_0_term(const application&) { return rewr_810_0(); }

  static inline data_expression rewr_810_0_term_arg_in_normal_form(const application&) { return rewr_810_0(); }


  // [809] e4_5: Enum5
  static inline const data_expression& rewr_809_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2fd10);
  }

  static inline data_expression rewr_809_0_term(const application&) { return rewr_809_0(); }

  static inline data_expression rewr_809_0_term_arg_in_normal_form(const application&) { return rewr_809_0(); }


  // [41] Notifying: ChuckStatus
  static inline const data_expression& rewr_41_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2fd90);
  }

  static inline data_expression rewr_41_0_term(const application&) { return rewr_41_0(); }

  static inline data_expression rewr_41_0_term_arg_in_normal_form(const application&) { return rewr_41_0(); }


  // [64] Processed: ChuckStatus
  static inline const data_expression& rewr_64_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2fe10);
  }

  static inline data_expression rewr_64_0_term(const application&) { return rewr_64_0(); }

  static inline data_expression rewr_64_0_term_arg_in_normal_form(const application&) { return rewr_64_0(); }


  // [30] Wafer: ChuckStatus
  static inline const data_expression& rewr_30_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2fe90);
  }

  static inline data_expression rewr_30_0_term(const application&) { return rewr_30_0(); }

  static inline data_expression rewr_30_0_term_arg_in_normal_form(const application&) { return rewr_30_0(); }


  // [36] Empty: ChuckStatus
  static inline const data_expression& rewr_36_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2ff10);
  }

  static inline data_expression rewr_36_0_term(const application&) { return rewr_36_0(); }

  static inline data_expression rewr_36_0_term_arg_in_normal_form(const application&) { return rewr_36_0(); }


  // [46] RobotThree: Robot
  static inline const data_expression& rewr_46_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d2ff90);
  }

  static inline data_expression rewr_46_0_term(const application&) { return rewr_46_0(); }

  static inline data_expression rewr_46_0_term_arg_in_normal_form(const application&) { return rewr_46_0(); }


  // [47] RobotTwo: Robot
  static inline const data_expression& rewr_47_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d30010);
  }

  static inline data_expression rewr_47_0_term(const application&) { return rewr_47_0(); }

  static inline data_expression rewr_47_0_term_arg_in_normal_form(const application&) { return rewr_47_0(); }


  // [18] RobotOne: Robot
  static inline const data_expression& rewr_18_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf7ea0);
  }

  static inline data_expression rewr_18_0_term(const application&) { return rewr_18_0(); }

  static inline data_expression rewr_18_0_term_arg_in_normal_form(const application&) { return rewr_18_0(); }


  // [100] RecipeThree: Recipe
  static inline const data_expression& rewr_100_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf7f10);
  }

  static inline data_expression rewr_100_0_term(const application&) { return rewr_100_0(); }

  static inline data_expression rewr_100_0_term_arg_in_normal_form(const application&) { return rewr_100_0(); }


  // [87] RecipeTwo: Recipe
  static inline const data_expression& rewr_87_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf7f80);
  }

  static inline data_expression rewr_87_0_term(const application&) { return rewr_87_0(); }

  static inline data_expression rewr_87_0_term_arg_in_normal_form(const application&) { return rewr_87_0(); }


  // [81] RecipeOne: Recipe
  static inline const data_expression& rewr_81_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf7ff0);
  }

  static inline data_expression rewr_81_0_term(const application&) { return rewr_81_0(); }

  static inline data_expression rewr_81_0_term_arg_in_normal_form(const application&) { return rewr_81_0(); }


  // [48] ChuckEmptyTwo: Position
  static inline const data_expression& rewr_48_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c33470);
  }

  static inline data_expression rewr_48_0_term(const application&) { return rewr_48_0(); }

  static inline data_expression rewr_48_0_term_arg_in_normal_form(const application&) { return rewr_48_0(); }


  // [49] ChuckEmptyOne: Position
  static inline const data_expression& rewr_49_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c334e0);
  }

  static inline data_expression rewr_49_0_term(const application&) { return rewr_49_0(); }

  static inline data_expression rewr_49_0_term_arg_in_normal_form(const application&) { return rewr_49_0(); }


  // [733] ChuckProj: Position
  static inline const data_expression& rewr_733_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c33550);
  }

  static inline data_expression rewr_733_0_term(const application&) { return rewr_733_0(); }

  static inline data_expression rewr_733_0_term_arg_in_normal_form(const application&) { return rewr_733_0(); }


  // [50] ChuckMeas: Position
  static inline const data_expression& rewr_50_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c335c0);
  }

  static inline data_expression rewr_50_0_term(const application&) { return rewr_50_0(); }

  static inline data_expression rewr_50_0_term_arg_in_normal_form(const application&) { return rewr_50_0(); }


  // [21] ChuckOut: Position
  static inline const data_expression& rewr_21_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c33630);
  }

  static inline data_expression rewr_21_0_term(const application&) { return rewr_21_0(); }

  static inline data_expression rewr_21_0_term_arg_in_normal_form(const application&) { return rewr_21_0(); }


  // [23] ChuckIn: Position
  static inline const data_expression& rewr_23_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d032d0);
  }

  static inline data_expression rewr_23_0_term(const application&) { return rewr_23_0(); }

  static inline data_expression rewr_23_0_term_arg_in_normal_form(const application&) { return rewr_23_0(); }


  // [22] Tray: Position
  static inline const data_expression& rewr_22_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d03340);
  }

  static inline data_expression rewr_22_0_term(const application&) { return rewr_22_0(); }

  static inline data_expression rewr_22_0_term_arg_in_normal_form(const application&) { return rewr_22_0(); }


  // [52] false: Bool
  static inline const data_expression& rewr_52_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cd8860);
  }

  static inline data_expression rewr_52_0_term(const application&) { return rewr_52_0(); }

  static inline data_expression rewr_52_0_term_arg_in_normal_form(const application&) { return rewr_52_0(); }


  // [7] true: Bool
  static inline const data_expression& rewr_7_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2c22730);
  }

  static inline data_expression rewr_7_0_term(const application&) { return rewr_7_0(); }

  static inline data_expression rewr_7_0_term_arg_in_normal_form(const application&) { return rewr_7_0(); }


  // [301] @cNeg: Pos -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_301_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c00d50), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_301_1_term(const application& t) { return rewr_301_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_301_1_term_arg_in_normal_form(const application& t) { return rewr_301_1(t[0]); }


  // [301] @cNeg: Pos -> Int
  static inline const data_expression& rewr_301_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d033f0);
  }

  static inline data_expression rewr_301_0_term(const application&) { return rewr_301_0(); }

  static inline data_expression rewr_301_0_term_arg_in_normal_form(const application&) { return rewr_301_0(); }


  // [300] @cInt: Nat -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_300_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c00d80), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_300_1_term(const application& t) { return rewr_300_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_300_1_term_arg_in_normal_form(const application& t) { return rewr_300_1(t[0]); }


  // [300] @cInt: Nat -> Int
  static inline const data_expression& rewr_300_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d30670);
  }

  static inline data_expression rewr_300_0_term(const application&) { return rewr_300_0(); }

  static inline data_expression rewr_300_0_term_arg_in_normal_form(const application&) { return rewr_300_0(); }


  // [158] @cPair: Nat # Nat -> @NatPair
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_158_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2c2be10), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_158_2_term(const application& t) { return rewr_158_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_158_2_term_arg_in_normal_form(const application& t) { return rewr_158_2(t[0], t[1]); }


  // [158] @cPair: Nat # Nat -> @NatPair
  static inline const data_expression& rewr_158_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d027a0);
  }

  static inline data_expression rewr_158_0_term(const application&) { return rewr_158_0(); }

  static inline data_expression rewr_158_0_term_arg_in_normal_form(const application&) { return rewr_158_0(); }


  // [45] @cNat: Pos -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_45_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be1490), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_45_1_term(const application& t) { return rewr_45_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_45_1_term_arg_in_normal_form(const application& t) { return rewr_45_1(t[0]); }


  // [45] @cNat: Pos -> Nat
  static inline const data_expression& rewr_45_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d027d0);
  }

  static inline data_expression rewr_45_0_term(const application&) { return rewr_45_0(); }

  static inline data_expression rewr_45_0_term_arg_in_normal_form(const application&) { return rewr_45_0(); }


  // [32] 0: Nat
  static inline const data_expression& rewr_32_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2cf9900);
  }

  static inline data_expression rewr_32_0_term(const application&) { return rewr_32_0(); }

  static inline data_expression rewr_32_0_term_arg_in_normal_form(const application&) { return rewr_32_0(); }


  // [40] @cDub: Bool # Pos -> Pos
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_40_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x55e3f2be15b0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_40_2_term(const application& t) { return rewr_40_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_40_2_term_arg_in_normal_form(const application& t) { return rewr_40_2(t[0], t[1]); }


  // [40] @cDub: Bool # Pos -> Pos
  static inline const data_expression& rewr_40_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2d02840);
  }

  static inline data_expression rewr_40_0_term(const application&) { return rewr_40_0(); }

  static inline data_expression rewr_40_0_term_arg_in_normal_form(const application&) { return rewr_40_0(); }


  // [27] 1: Pos
  static inline const data_expression& rewr_27_0()

  {
    return *reinterpret_cast<const data_expression*>(0x55e3f2bd9d80);
  }

  static inline data_expression rewr_27_0_term(const application&) { return rewr_27_0(); }

  static inline data_expression rewr_27_0_term_arg_in_normal_form(const application&) { return rewr_27_0(); }


};
} // namespace
void set_the_precompiled_rewrite_functions_in_a_lookup_table()
{
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 14 + 0] = rewr_functions::rewr_14_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 14 + 0] = rewr_functions::rewr_14_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 13 + 0] = rewr_functions::rewr_13_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 13 + 0] = rewr_functions::rewr_13_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 12 + 0] = rewr_functions::rewr_12_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 12 + 0] = rewr_functions::rewr_12_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 11 + 0] = rewr_functions::rewr_11_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 11 + 0] = rewr_functions::rewr_11_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 10 + 0] = rewr_functions::rewr_10_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 10 + 0] = rewr_functions::rewr_10_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 9 + 0] = rewr_functions::rewr_9_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 9 + 0] = rewr_functions::rewr_9_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 8 + 0] = rewr_functions::rewr_8_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 8 + 0] = rewr_functions::rewr_8_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 7 + 0] = rewr_functions::rewr_7_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 7 + 0] = rewr_functions::rewr_7_0_term_arg_in_normal_form;
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
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 0 + 5] = rewr_functions::rewr_0_5_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 0 + 5] = rewr_functions::rewr_0_5_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 152 + 0] = rewr_functions::rewr_152_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 152 + 0] = rewr_functions::rewr_152_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 152 + 2] = rewr_functions::rewr_152_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 152 + 2] = rewr_functions::rewr_152_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 151 + 0] = rewr_functions::rewr_151_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 151 + 0] = rewr_functions::rewr_151_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 151 + 2] = rewr_functions::rewr_151_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 151 + 2] = rewr_functions::rewr_151_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 138 + 0] = rewr_functions::rewr_138_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 138 + 0] = rewr_functions::rewr_138_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 138 + 2] = rewr_functions::rewr_138_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 138 + 2] = rewr_functions::rewr_138_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 133 + 0] = rewr_functions::rewr_133_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 133 + 0] = rewr_functions::rewr_133_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 133 + 2] = rewr_functions::rewr_133_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 133 + 2] = rewr_functions::rewr_133_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 127 + 0] = rewr_functions::rewr_127_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 127 + 0] = rewr_functions::rewr_127_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 127 + 2] = rewr_functions::rewr_127_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 127 + 2] = rewr_functions::rewr_127_2_term_arg_in_normal_form;
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
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 109 + 0] = rewr_functions::rewr_109_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 109 + 0] = rewr_functions::rewr_109_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 109 + 2] = rewr_functions::rewr_109_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 109 + 2] = rewr_functions::rewr_109_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 108 + 0] = rewr_functions::rewr_108_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 108 + 0] = rewr_functions::rewr_108_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 108 + 2] = rewr_functions::rewr_108_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 108 + 2] = rewr_functions::rewr_108_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 102 + 0] = rewr_functions::rewr_102_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 102 + 0] = rewr_functions::rewr_102_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 102 + 2] = rewr_functions::rewr_102_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 102 + 2] = rewr_functions::rewr_102_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 101 + 0] = rewr_functions::rewr_101_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 101 + 0] = rewr_functions::rewr_101_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 101 + 2] = rewr_functions::rewr_101_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 101 + 2] = rewr_functions::rewr_101_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 64 + 0] = rewr_functions::rewr_64_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 64 + 0] = rewr_functions::rewr_64_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 63 + 0] = rewr_functions::rewr_63_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 63 + 0] = rewr_functions::rewr_63_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 63 + 1] = rewr_functions::rewr_63_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 63 + 1] = rewr_functions::rewr_63_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 62 + 0] = rewr_functions::rewr_62_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 62 + 0] = rewr_functions::rewr_62_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 62 + 1] = rewr_functions::rewr_62_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 62 + 1] = rewr_functions::rewr_62_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 61 + 0] = rewr_functions::rewr_61_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 61 + 0] = rewr_functions::rewr_61_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 61 + 1] = rewr_functions::rewr_61_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 61 + 1] = rewr_functions::rewr_61_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 60 + 0] = rewr_functions::rewr_60_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 60 + 0] = rewr_functions::rewr_60_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 60 + 1] = rewr_functions::rewr_60_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 60 + 1] = rewr_functions::rewr_60_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 59 + 0] = rewr_functions::rewr_59_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 59 + 0] = rewr_functions::rewr_59_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 59 + 1] = rewr_functions::rewr_59_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 59 + 1] = rewr_functions::rewr_59_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 58 + 0] = rewr_functions::rewr_58_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 58 + 0] = rewr_functions::rewr_58_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 58 + 1] = rewr_functions::rewr_58_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 58 + 1] = rewr_functions::rewr_58_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 57 + 0] = rewr_functions::rewr_57_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 57 + 0] = rewr_functions::rewr_57_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 57 + 1] = rewr_functions::rewr_57_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 57 + 1] = rewr_functions::rewr_57_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 56 + 0] = rewr_functions::rewr_56_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 56 + 0] = rewr_functions::rewr_56_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 56 + 1] = rewr_functions::rewr_56_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 56 + 1] = rewr_functions::rewr_56_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 55 + 0] = rewr_functions::rewr_55_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 55 + 0] = rewr_functions::rewr_55_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 55 + 1] = rewr_functions::rewr_55_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 55 + 1] = rewr_functions::rewr_55_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 54 + 0] = rewr_functions::rewr_54_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 54 + 0] = rewr_functions::rewr_54_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 54 + 6] = rewr_functions::rewr_54_6_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 54 + 6] = rewr_functions::rewr_54_6_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 53 + 0] = rewr_functions::rewr_53_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 53 + 0] = rewr_functions::rewr_53_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 53 + 1] = rewr_functions::rewr_53_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 53 + 1] = rewr_functions::rewr_53_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 52 + 0] = rewr_functions::rewr_52_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 52 + 0] = rewr_functions::rewr_52_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 51 + 0] = rewr_functions::rewr_51_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 51 + 0] = rewr_functions::rewr_51_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 51 + 1] = rewr_functions::rewr_51_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 51 + 1] = rewr_functions::rewr_51_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 50 + 0] = rewr_functions::rewr_50_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 50 + 0] = rewr_functions::rewr_50_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 49 + 0] = rewr_functions::rewr_49_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 49 + 0] = rewr_functions::rewr_49_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 48 + 0] = rewr_functions::rewr_48_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 48 + 0] = rewr_functions::rewr_48_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 47 + 0] = rewr_functions::rewr_47_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 47 + 0] = rewr_functions::rewr_47_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 46 + 0] = rewr_functions::rewr_46_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 46 + 0] = rewr_functions::rewr_46_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 45 + 0] = rewr_functions::rewr_45_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 45 + 0] = rewr_functions::rewr_45_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 45 + 1] = rewr_functions::rewr_45_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 45 + 1] = rewr_functions::rewr_45_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 44 + 0] = rewr_functions::rewr_44_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 44 + 0] = rewr_functions::rewr_44_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 44 + 2] = rewr_functions::rewr_44_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 44 + 2] = rewr_functions::rewr_44_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 43 + 0] = rewr_functions::rewr_43_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 43 + 0] = rewr_functions::rewr_43_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 43 + 1] = rewr_functions::rewr_43_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 43 + 1] = rewr_functions::rewr_43_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 42 + 0] = rewr_functions::rewr_42_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 42 + 0] = rewr_functions::rewr_42_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 41 + 0] = rewr_functions::rewr_41_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 41 + 0] = rewr_functions::rewr_41_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 40 + 0] = rewr_functions::rewr_40_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 40 + 0] = rewr_functions::rewr_40_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 40 + 2] = rewr_functions::rewr_40_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 40 + 2] = rewr_functions::rewr_40_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 39 + 0] = rewr_functions::rewr_39_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 39 + 0] = rewr_functions::rewr_39_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 39 + 10] = rewr_functions::rewr_39_10_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 39 + 10] = rewr_functions::rewr_39_10_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 38 + 0] = rewr_functions::rewr_38_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 38 + 0] = rewr_functions::rewr_38_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 38 + 3] = rewr_functions::rewr_38_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 38 + 3] = rewr_functions::rewr_38_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 37 + 0] = rewr_functions::rewr_37_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 37 + 0] = rewr_functions::rewr_37_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 37 + 1] = rewr_functions::rewr_37_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 37 + 1] = rewr_functions::rewr_37_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 36 + 0] = rewr_functions::rewr_36_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 36 + 0] = rewr_functions::rewr_36_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 35 + 0] = rewr_functions::rewr_35_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 35 + 0] = rewr_functions::rewr_35_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 35 + 1] = rewr_functions::rewr_35_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 35 + 1] = rewr_functions::rewr_35_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 34 + 0] = rewr_functions::rewr_34_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 34 + 0] = rewr_functions::rewr_34_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 34 + 1] = rewr_functions::rewr_34_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 34 + 1] = rewr_functions::rewr_34_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 33 + 0] = rewr_functions::rewr_33_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 33 + 0] = rewr_functions::rewr_33_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 33 + 1] = rewr_functions::rewr_33_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 33 + 1] = rewr_functions::rewr_33_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 32 + 0] = rewr_functions::rewr_32_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 32 + 0] = rewr_functions::rewr_32_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 31 + 0] = rewr_functions::rewr_31_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 31 + 0] = rewr_functions::rewr_31_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 31 + 2] = rewr_functions::rewr_31_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 31 + 2] = rewr_functions::rewr_31_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 30 + 0] = rewr_functions::rewr_30_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 30 + 0] = rewr_functions::rewr_30_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 29 + 0] = rewr_functions::rewr_29_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 29 + 0] = rewr_functions::rewr_29_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 29 + 1] = rewr_functions::rewr_29_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 29 + 1] = rewr_functions::rewr_29_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 28 + 0] = rewr_functions::rewr_28_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 28 + 0] = rewr_functions::rewr_28_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 28 + 2] = rewr_functions::rewr_28_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 28 + 2] = rewr_functions::rewr_28_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 27 + 0] = rewr_functions::rewr_27_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 27 + 0] = rewr_functions::rewr_27_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 26 + 0] = rewr_functions::rewr_26_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 26 + 0] = rewr_functions::rewr_26_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 26 + 1] = rewr_functions::rewr_26_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 26 + 1] = rewr_functions::rewr_26_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 25 + 0] = rewr_functions::rewr_25_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 25 + 0] = rewr_functions::rewr_25_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 25 + 2] = rewr_functions::rewr_25_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 25 + 2] = rewr_functions::rewr_25_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 24 + 0] = rewr_functions::rewr_24_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 24 + 0] = rewr_functions::rewr_24_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 24 + 3] = rewr_functions::rewr_24_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 24 + 3] = rewr_functions::rewr_24_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 23 + 0] = rewr_functions::rewr_23_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 23 + 0] = rewr_functions::rewr_23_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 22 + 0] = rewr_functions::rewr_22_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 22 + 0] = rewr_functions::rewr_22_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 21 + 0] = rewr_functions::rewr_21_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 21 + 0] = rewr_functions::rewr_21_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 20 + 0] = rewr_functions::rewr_20_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 20 + 0] = rewr_functions::rewr_20_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 20 + 3] = rewr_functions::rewr_20_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 20 + 3] = rewr_functions::rewr_20_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 19 + 0] = rewr_functions::rewr_19_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 19 + 0] = rewr_functions::rewr_19_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 19 + 2] = rewr_functions::rewr_19_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 19 + 2] = rewr_functions::rewr_19_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 18 + 0] = rewr_functions::rewr_18_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 18 + 0] = rewr_functions::rewr_18_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 17 + 0] = rewr_functions::rewr_17_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 17 + 0] = rewr_functions::rewr_17_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 17 + 2] = rewr_functions::rewr_17_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 17 + 2] = rewr_functions::rewr_17_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 16 + 0] = rewr_functions::rewr_16_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 16 + 0] = rewr_functions::rewr_16_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 16 + 2] = rewr_functions::rewr_16_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 16 + 2] = rewr_functions::rewr_16_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 15 + 0] = rewr_functions::rewr_15_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 15 + 0] = rewr_functions::rewr_15_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 15 + 1] = rewr_functions::rewr_15_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 15 + 1] = rewr_functions::rewr_15_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 153 + 0] = rewr_functions::rewr_153_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 153 + 0] = rewr_functions::rewr_153_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 153 + 2] = rewr_functions::rewr_153_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 153 + 2] = rewr_functions::rewr_153_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 355 + 0] = rewr_functions::rewr_355_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 355 + 0] = rewr_functions::rewr_355_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 355 + 2] = rewr_functions::rewr_355_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 355 + 2] = rewr_functions::rewr_355_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 354 + 0] = rewr_functions::rewr_354_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 354 + 0] = rewr_functions::rewr_354_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 354 + 2] = rewr_functions::rewr_354_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 354 + 2] = rewr_functions::rewr_354_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 348 + 0] = rewr_functions::rewr_348_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 348 + 0] = rewr_functions::rewr_348_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 348 + 2] = rewr_functions::rewr_348_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 348 + 2] = rewr_functions::rewr_348_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 347 + 0] = rewr_functions::rewr_347_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 347 + 0] = rewr_functions::rewr_347_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 347 + 2] = rewr_functions::rewr_347_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 347 + 2] = rewr_functions::rewr_347_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 340 + 0] = rewr_functions::rewr_340_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 340 + 0] = rewr_functions::rewr_340_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 340 + 2] = rewr_functions::rewr_340_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 340 + 2] = rewr_functions::rewr_340_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 339 + 0] = rewr_functions::rewr_339_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 339 + 0] = rewr_functions::rewr_339_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 339 + 2] = rewr_functions::rewr_339_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 339 + 2] = rewr_functions::rewr_339_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 335 + 0] = rewr_functions::rewr_335_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 335 + 0] = rewr_functions::rewr_335_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 335 + 2] = rewr_functions::rewr_335_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 335 + 2] = rewr_functions::rewr_335_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 330 + 0] = rewr_functions::rewr_330_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 330 + 0] = rewr_functions::rewr_330_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 330 + 2] = rewr_functions::rewr_330_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 330 + 2] = rewr_functions::rewr_330_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 326 + 0] = rewr_functions::rewr_326_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 326 + 0] = rewr_functions::rewr_326_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 326 + 2] = rewr_functions::rewr_326_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 326 + 2] = rewr_functions::rewr_326_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 313 + 0] = rewr_functions::rewr_313_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 313 + 0] = rewr_functions::rewr_313_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 313 + 1] = rewr_functions::rewr_313_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 313 + 1] = rewr_functions::rewr_313_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 301 + 0] = rewr_functions::rewr_301_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 301 + 0] = rewr_functions::rewr_301_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 301 + 1] = rewr_functions::rewr_301_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 301 + 1] = rewr_functions::rewr_301_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 300 + 0] = rewr_functions::rewr_300_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 300 + 0] = rewr_functions::rewr_300_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 300 + 1] = rewr_functions::rewr_300_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 300 + 1] = rewr_functions::rewr_300_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 298 + 0] = rewr_functions::rewr_298_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 298 + 0] = rewr_functions::rewr_298_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 298 + 2] = rewr_functions::rewr_298_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 298 + 2] = rewr_functions::rewr_298_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 297 + 0] = rewr_functions::rewr_297_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 297 + 0] = rewr_functions::rewr_297_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 297 + 2] = rewr_functions::rewr_297_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 297 + 2] = rewr_functions::rewr_297_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 276 + 0] = rewr_functions::rewr_276_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 276 + 0] = rewr_functions::rewr_276_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 276 + 3] = rewr_functions::rewr_276_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 276 + 3] = rewr_functions::rewr_276_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 272 + 0] = rewr_functions::rewr_272_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 272 + 0] = rewr_functions::rewr_272_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 272 + 2] = rewr_functions::rewr_272_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 272 + 2] = rewr_functions::rewr_272_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 166 + 0] = rewr_functions::rewr_166_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 166 + 0] = rewr_functions::rewr_166_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 166 + 1] = rewr_functions::rewr_166_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 166 + 1] = rewr_functions::rewr_166_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 160 + 0] = rewr_functions::rewr_160_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 160 + 0] = rewr_functions::rewr_160_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 160 + 1] = rewr_functions::rewr_160_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 160 + 1] = rewr_functions::rewr_160_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 158 + 0] = rewr_functions::rewr_158_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 158 + 0] = rewr_functions::rewr_158_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 158 + 2] = rewr_functions::rewr_158_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 158 + 2] = rewr_functions::rewr_158_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 155 + 0] = rewr_functions::rewr_155_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 155 + 0] = rewr_functions::rewr_155_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 155 + 2] = rewr_functions::rewr_155_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 155 + 2] = rewr_functions::rewr_155_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 100 + 0] = rewr_functions::rewr_100_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 100 + 0] = rewr_functions::rewr_100_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 99 + 0] = rewr_functions::rewr_99_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 99 + 0] = rewr_functions::rewr_99_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 98 + 0] = rewr_functions::rewr_98_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 98 + 0] = rewr_functions::rewr_98_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 98 + 1] = rewr_functions::rewr_98_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 98 + 1] = rewr_functions::rewr_98_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 97 + 0] = rewr_functions::rewr_97_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 97 + 0] = rewr_functions::rewr_97_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 97 + 1] = rewr_functions::rewr_97_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 97 + 1] = rewr_functions::rewr_97_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 96 + 0] = rewr_functions::rewr_96_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 96 + 0] = rewr_functions::rewr_96_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 96 + 1] = rewr_functions::rewr_96_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 96 + 1] = rewr_functions::rewr_96_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 95 + 0] = rewr_functions::rewr_95_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 95 + 0] = rewr_functions::rewr_95_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 95 + 1] = rewr_functions::rewr_95_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 95 + 1] = rewr_functions::rewr_95_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 94 + 0] = rewr_functions::rewr_94_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 94 + 0] = rewr_functions::rewr_94_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 94 + 1] = rewr_functions::rewr_94_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 94 + 1] = rewr_functions::rewr_94_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 93 + 0] = rewr_functions::rewr_93_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 93 + 0] = rewr_functions::rewr_93_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 93 + 1] = rewr_functions::rewr_93_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 93 + 1] = rewr_functions::rewr_93_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 92 + 0] = rewr_functions::rewr_92_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 92 + 0] = rewr_functions::rewr_92_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 92 + 1] = rewr_functions::rewr_92_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 92 + 1] = rewr_functions::rewr_92_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 91 + 0] = rewr_functions::rewr_91_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 91 + 0] = rewr_functions::rewr_91_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 91 + 1] = rewr_functions::rewr_91_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 91 + 1] = rewr_functions::rewr_91_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 90 + 0] = rewr_functions::rewr_90_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 90 + 0] = rewr_functions::rewr_90_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 90 + 1] = rewr_functions::rewr_90_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 90 + 1] = rewr_functions::rewr_90_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 89 + 0] = rewr_functions::rewr_89_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 89 + 0] = rewr_functions::rewr_89_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 89 + 1] = rewr_functions::rewr_89_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 89 + 1] = rewr_functions::rewr_89_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 88 + 0] = rewr_functions::rewr_88_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 88 + 0] = rewr_functions::rewr_88_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 87 + 0] = rewr_functions::rewr_87_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 87 + 0] = rewr_functions::rewr_87_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 86 + 0] = rewr_functions::rewr_86_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 86 + 0] = rewr_functions::rewr_86_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 86 + 5] = rewr_functions::rewr_86_5_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 86 + 5] = rewr_functions::rewr_86_5_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 85 + 0] = rewr_functions::rewr_85_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 85 + 0] = rewr_functions::rewr_85_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 85 + 1] = rewr_functions::rewr_85_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 85 + 1] = rewr_functions::rewr_85_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 84 + 0] = rewr_functions::rewr_84_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 84 + 0] = rewr_functions::rewr_84_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 84 + 3] = rewr_functions::rewr_84_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 84 + 3] = rewr_functions::rewr_84_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 83 + 0] = rewr_functions::rewr_83_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 83 + 0] = rewr_functions::rewr_83_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 82 + 0] = rewr_functions::rewr_82_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 82 + 0] = rewr_functions::rewr_82_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 82 + 1] = rewr_functions::rewr_82_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 82 + 1] = rewr_functions::rewr_82_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 81 + 0] = rewr_functions::rewr_81_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 81 + 0] = rewr_functions::rewr_81_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 80 + 0] = rewr_functions::rewr_80_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 80 + 0] = rewr_functions::rewr_80_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 80 + 1] = rewr_functions::rewr_80_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 80 + 1] = rewr_functions::rewr_80_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 79 + 0] = rewr_functions::rewr_79_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 79 + 0] = rewr_functions::rewr_79_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 79 + 3] = rewr_functions::rewr_79_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 79 + 3] = rewr_functions::rewr_79_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 78 + 0] = rewr_functions::rewr_78_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 78 + 0] = rewr_functions::rewr_78_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 78 + 1] = rewr_functions::rewr_78_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 78 + 1] = rewr_functions::rewr_78_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 77 + 0] = rewr_functions::rewr_77_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 77 + 0] = rewr_functions::rewr_77_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 77 + 3] = rewr_functions::rewr_77_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 77 + 3] = rewr_functions::rewr_77_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 76 + 0] = rewr_functions::rewr_76_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 76 + 0] = rewr_functions::rewr_76_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 76 + 5] = rewr_functions::rewr_76_5_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 76 + 5] = rewr_functions::rewr_76_5_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 75 + 0] = rewr_functions::rewr_75_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 75 + 0] = rewr_functions::rewr_75_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 75 + 3] = rewr_functions::rewr_75_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 75 + 3] = rewr_functions::rewr_75_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 74 + 0] = rewr_functions::rewr_74_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 74 + 0] = rewr_functions::rewr_74_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 74 + 1] = rewr_functions::rewr_74_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 74 + 1] = rewr_functions::rewr_74_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 73 + 0] = rewr_functions::rewr_73_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 73 + 0] = rewr_functions::rewr_73_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 73 + 1] = rewr_functions::rewr_73_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 73 + 1] = rewr_functions::rewr_73_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 72 + 0] = rewr_functions::rewr_72_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 72 + 0] = rewr_functions::rewr_72_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 72 + 1] = rewr_functions::rewr_72_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 72 + 1] = rewr_functions::rewr_72_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 71 + 0] = rewr_functions::rewr_71_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 71 + 0] = rewr_functions::rewr_71_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 71 + 2] = rewr_functions::rewr_71_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 71 + 2] = rewr_functions::rewr_71_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 70 + 0] = rewr_functions::rewr_70_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 70 + 0] = rewr_functions::rewr_70_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 69 + 0] = rewr_functions::rewr_69_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 69 + 0] = rewr_functions::rewr_69_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 69 + 1] = rewr_functions::rewr_69_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 69 + 1] = rewr_functions::rewr_69_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 68 + 0] = rewr_functions::rewr_68_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 68 + 0] = rewr_functions::rewr_68_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 68 + 1] = rewr_functions::rewr_68_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 68 + 1] = rewr_functions::rewr_68_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 67 + 0] = rewr_functions::rewr_67_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 67 + 0] = rewr_functions::rewr_67_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 67 + 1] = rewr_functions::rewr_67_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 67 + 1] = rewr_functions::rewr_67_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 66 + 0] = rewr_functions::rewr_66_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 66 + 0] = rewr_functions::rewr_66_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 66 + 12] = rewr_functions::rewr_66_12_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 66 + 12] = rewr_functions::rewr_66_12_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 65 + 0] = rewr_functions::rewr_65_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 65 + 0] = rewr_functions::rewr_65_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 65 + 1] = rewr_functions::rewr_65_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 65 + 1] = rewr_functions::rewr_65_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 295 + 0] = rewr_functions::rewr_295_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 295 + 0] = rewr_functions::rewr_295_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 295 + 2] = rewr_functions::rewr_295_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 295 + 2] = rewr_functions::rewr_295_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 267 + 0] = rewr_functions::rewr_267_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 267 + 0] = rewr_functions::rewr_267_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 267 + 2] = rewr_functions::rewr_267_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 267 + 2] = rewr_functions::rewr_267_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 266 + 0] = rewr_functions::rewr_266_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 266 + 0] = rewr_functions::rewr_266_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 266 + 2] = rewr_functions::rewr_266_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 266 + 2] = rewr_functions::rewr_266_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 260 + 0] = rewr_functions::rewr_260_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 260 + 0] = rewr_functions::rewr_260_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 260 + 2] = rewr_functions::rewr_260_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 260 + 2] = rewr_functions::rewr_260_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 259 + 0] = rewr_functions::rewr_259_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 259 + 0] = rewr_functions::rewr_259_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 259 + 2] = rewr_functions::rewr_259_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 259 + 2] = rewr_functions::rewr_259_2_term_arg_in_normal_form;
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
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 240 + 0] = rewr_functions::rewr_240_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 240 + 0] = rewr_functions::rewr_240_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 240 + 2] = rewr_functions::rewr_240_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 240 + 2] = rewr_functions::rewr_240_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 239 + 0] = rewr_functions::rewr_239_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 239 + 0] = rewr_functions::rewr_239_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 239 + 2] = rewr_functions::rewr_239_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 239 + 2] = rewr_functions::rewr_239_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 233 + 0] = rewr_functions::rewr_233_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 233 + 0] = rewr_functions::rewr_233_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 233 + 2] = rewr_functions::rewr_233_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 233 + 2] = rewr_functions::rewr_233_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 228 + 0] = rewr_functions::rewr_228_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 228 + 0] = rewr_functions::rewr_228_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 228 + 2] = rewr_functions::rewr_228_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 228 + 2] = rewr_functions::rewr_228_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 227 + 0] = rewr_functions::rewr_227_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 227 + 0] = rewr_functions::rewr_227_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 227 + 2] = rewr_functions::rewr_227_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 227 + 2] = rewr_functions::rewr_227_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 221 + 0] = rewr_functions::rewr_221_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 221 + 0] = rewr_functions::rewr_221_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 221 + 2] = rewr_functions::rewr_221_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 221 + 2] = rewr_functions::rewr_221_2_term_arg_in_normal_form;
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
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 207 + 0] = rewr_functions::rewr_207_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 207 + 0] = rewr_functions::rewr_207_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 207 + 2] = rewr_functions::rewr_207_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 207 + 2] = rewr_functions::rewr_207_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 206 + 0] = rewr_functions::rewr_206_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 206 + 0] = rewr_functions::rewr_206_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 206 + 2] = rewr_functions::rewr_206_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 206 + 2] = rewr_functions::rewr_206_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 205 + 0] = rewr_functions::rewr_205_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 205 + 0] = rewr_functions::rewr_205_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 205 + 2] = rewr_functions::rewr_205_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 205 + 2] = rewr_functions::rewr_205_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 199 + 0] = rewr_functions::rewr_199_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 199 + 0] = rewr_functions::rewr_199_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 199 + 2] = rewr_functions::rewr_199_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 199 + 2] = rewr_functions::rewr_199_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 198 + 0] = rewr_functions::rewr_198_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 198 + 0] = rewr_functions::rewr_198_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 198 + 2] = rewr_functions::rewr_198_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 198 + 2] = rewr_functions::rewr_198_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 192 + 0] = rewr_functions::rewr_192_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 192 + 0] = rewr_functions::rewr_192_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 192 + 2] = rewr_functions::rewr_192_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 192 + 2] = rewr_functions::rewr_192_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 191 + 0] = rewr_functions::rewr_191_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 191 + 0] = rewr_functions::rewr_191_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 191 + 2] = rewr_functions::rewr_191_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 191 + 2] = rewr_functions::rewr_191_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 190 + 0] = rewr_functions::rewr_190_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 190 + 0] = rewr_functions::rewr_190_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 190 + 2] = rewr_functions::rewr_190_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 190 + 2] = rewr_functions::rewr_190_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 184 + 0] = rewr_functions::rewr_184_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 184 + 0] = rewr_functions::rewr_184_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 184 + 2] = rewr_functions::rewr_184_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 184 + 2] = rewr_functions::rewr_184_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 183 + 0] = rewr_functions::rewr_183_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 183 + 0] = rewr_functions::rewr_183_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 183 + 2] = rewr_functions::rewr_183_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 183 + 2] = rewr_functions::rewr_183_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 182 + 0] = rewr_functions::rewr_182_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 182 + 0] = rewr_functions::rewr_182_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 182 + 2] = rewr_functions::rewr_182_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 182 + 2] = rewr_functions::rewr_182_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 176 + 0] = rewr_functions::rewr_176_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 176 + 0] = rewr_functions::rewr_176_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 176 + 2] = rewr_functions::rewr_176_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 176 + 2] = rewr_functions::rewr_176_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 175 + 0] = rewr_functions::rewr_175_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 175 + 0] = rewr_functions::rewr_175_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 175 + 2] = rewr_functions::rewr_175_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 175 + 2] = rewr_functions::rewr_175_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 174 + 0] = rewr_functions::rewr_174_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 174 + 0] = rewr_functions::rewr_174_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 174 + 2] = rewr_functions::rewr_174_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 174 + 2] = rewr_functions::rewr_174_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 168 + 0] = rewr_functions::rewr_168_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 168 + 0] = rewr_functions::rewr_168_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 168 + 2] = rewr_functions::rewr_168_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 168 + 2] = rewr_functions::rewr_168_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 167 + 0] = rewr_functions::rewr_167_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 167 + 0] = rewr_functions::rewr_167_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 167 + 2] = rewr_functions::rewr_167_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 167 + 2] = rewr_functions::rewr_167_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 283 + 0] = rewr_functions::rewr_283_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 283 + 0] = rewr_functions::rewr_283_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 283 + 2] = rewr_functions::rewr_283_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 283 + 2] = rewr_functions::rewr_283_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 463 + 0] = rewr_functions::rewr_463_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 463 + 0] = rewr_functions::rewr_463_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 463 + 2] = rewr_functions::rewr_463_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 463 + 2] = rewr_functions::rewr_463_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 462 + 0] = rewr_functions::rewr_462_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 462 + 0] = rewr_functions::rewr_462_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 462 + 2] = rewr_functions::rewr_462_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 462 + 2] = rewr_functions::rewr_462_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 455 + 0] = rewr_functions::rewr_455_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 455 + 0] = rewr_functions::rewr_455_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 455 + 2] = rewr_functions::rewr_455_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 455 + 2] = rewr_functions::rewr_455_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 454 + 0] = rewr_functions::rewr_454_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 454 + 0] = rewr_functions::rewr_454_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 454 + 2] = rewr_functions::rewr_454_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 454 + 2] = rewr_functions::rewr_454_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 447 + 0] = rewr_functions::rewr_447_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 447 + 0] = rewr_functions::rewr_447_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 447 + 2] = rewr_functions::rewr_447_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 447 + 2] = rewr_functions::rewr_447_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 446 + 0] = rewr_functions::rewr_446_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 446 + 0] = rewr_functions::rewr_446_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 446 + 2] = rewr_functions::rewr_446_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 446 + 2] = rewr_functions::rewr_446_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 439 + 0] = rewr_functions::rewr_439_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 439 + 0] = rewr_functions::rewr_439_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 439 + 2] = rewr_functions::rewr_439_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 439 + 2] = rewr_functions::rewr_439_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 438 + 0] = rewr_functions::rewr_438_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 438 + 0] = rewr_functions::rewr_438_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 438 + 2] = rewr_functions::rewr_438_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 438 + 2] = rewr_functions::rewr_438_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 431 + 0] = rewr_functions::rewr_431_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 431 + 0] = rewr_functions::rewr_431_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 431 + 2] = rewr_functions::rewr_431_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 431 + 2] = rewr_functions::rewr_431_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 430 + 0] = rewr_functions::rewr_430_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 430 + 0] = rewr_functions::rewr_430_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 430 + 2] = rewr_functions::rewr_430_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 430 + 2] = rewr_functions::rewr_430_2_term_arg_in_normal_form;
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
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 408 + 0] = rewr_functions::rewr_408_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 408 + 0] = rewr_functions::rewr_408_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 408 + 2] = rewr_functions::rewr_408_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 408 + 2] = rewr_functions::rewr_408_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 407 + 0] = rewr_functions::rewr_407_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 407 + 0] = rewr_functions::rewr_407_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 407 + 2] = rewr_functions::rewr_407_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 407 + 2] = rewr_functions::rewr_407_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 400 + 0] = rewr_functions::rewr_400_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 400 + 0] = rewr_functions::rewr_400_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 400 + 2] = rewr_functions::rewr_400_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 400 + 2] = rewr_functions::rewr_400_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 399 + 0] = rewr_functions::rewr_399_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 399 + 0] = rewr_functions::rewr_399_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 399 + 2] = rewr_functions::rewr_399_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 399 + 2] = rewr_functions::rewr_399_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 392 + 0] = rewr_functions::rewr_392_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 392 + 0] = rewr_functions::rewr_392_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 392 + 2] = rewr_functions::rewr_392_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 392 + 2] = rewr_functions::rewr_392_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 391 + 0] = rewr_functions::rewr_391_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 391 + 0] = rewr_functions::rewr_391_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 391 + 2] = rewr_functions::rewr_391_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 391 + 2] = rewr_functions::rewr_391_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 384 + 0] = rewr_functions::rewr_384_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 384 + 0] = rewr_functions::rewr_384_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 384 + 2] = rewr_functions::rewr_384_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 384 + 2] = rewr_functions::rewr_384_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 383 + 0] = rewr_functions::rewr_383_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 383 + 0] = rewr_functions::rewr_383_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 383 + 2] = rewr_functions::rewr_383_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 383 + 2] = rewr_functions::rewr_383_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 377 + 0] = rewr_functions::rewr_377_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 377 + 0] = rewr_functions::rewr_377_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 377 + 2] = rewr_functions::rewr_377_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 377 + 2] = rewr_functions::rewr_377_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 376 + 0] = rewr_functions::rewr_376_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 376 + 0] = rewr_functions::rewr_376_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 376 + 2] = rewr_functions::rewr_376_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 376 + 2] = rewr_functions::rewr_376_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 370 + 0] = rewr_functions::rewr_370_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 370 + 0] = rewr_functions::rewr_370_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 370 + 2] = rewr_functions::rewr_370_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 370 + 2] = rewr_functions::rewr_370_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 369 + 0] = rewr_functions::rewr_369_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 369 + 0] = rewr_functions::rewr_369_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 369 + 2] = rewr_functions::rewr_369_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 369 + 2] = rewr_functions::rewr_369_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 363 + 0] = rewr_functions::rewr_363_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 363 + 0] = rewr_functions::rewr_363_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 363 + 2] = rewr_functions::rewr_363_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 363 + 2] = rewr_functions::rewr_363_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 362 + 0] = rewr_functions::rewr_362_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 362 + 0] = rewr_functions::rewr_362_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 362 + 2] = rewr_functions::rewr_362_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 362 + 2] = rewr_functions::rewr_362_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 562 + 0] = rewr_functions::rewr_562_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 562 + 0] = rewr_functions::rewr_562_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 562 + 2] = rewr_functions::rewr_562_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 562 + 2] = rewr_functions::rewr_562_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 561 + 0] = rewr_functions::rewr_561_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 561 + 0] = rewr_functions::rewr_561_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 561 + 2] = rewr_functions::rewr_561_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 561 + 2] = rewr_functions::rewr_561_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 555 + 0] = rewr_functions::rewr_555_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 555 + 0] = rewr_functions::rewr_555_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 555 + 2] = rewr_functions::rewr_555_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 555 + 2] = rewr_functions::rewr_555_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 554 + 0] = rewr_functions::rewr_554_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 554 + 0] = rewr_functions::rewr_554_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 554 + 2] = rewr_functions::rewr_554_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 554 + 2] = rewr_functions::rewr_554_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 548 + 0] = rewr_functions::rewr_548_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 548 + 0] = rewr_functions::rewr_548_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 548 + 2] = rewr_functions::rewr_548_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 548 + 2] = rewr_functions::rewr_548_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 547 + 0] = rewr_functions::rewr_547_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 547 + 0] = rewr_functions::rewr_547_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 547 + 2] = rewr_functions::rewr_547_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 547 + 2] = rewr_functions::rewr_547_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 541 + 0] = rewr_functions::rewr_541_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 541 + 0] = rewr_functions::rewr_541_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 541 + 2] = rewr_functions::rewr_541_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 541 + 2] = rewr_functions::rewr_541_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 540 + 0] = rewr_functions::rewr_540_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 540 + 0] = rewr_functions::rewr_540_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 540 + 2] = rewr_functions::rewr_540_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 540 + 2] = rewr_functions::rewr_540_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 533 + 0] = rewr_functions::rewr_533_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 533 + 0] = rewr_functions::rewr_533_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 533 + 2] = rewr_functions::rewr_533_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 533 + 2] = rewr_functions::rewr_533_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 532 + 0] = rewr_functions::rewr_532_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 532 + 0] = rewr_functions::rewr_532_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 532 + 2] = rewr_functions::rewr_532_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 532 + 2] = rewr_functions::rewr_532_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 526 + 0] = rewr_functions::rewr_526_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 526 + 0] = rewr_functions::rewr_526_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 526 + 2] = rewr_functions::rewr_526_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 526 + 2] = rewr_functions::rewr_526_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 525 + 0] = rewr_functions::rewr_525_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 525 + 0] = rewr_functions::rewr_525_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 525 + 2] = rewr_functions::rewr_525_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 525 + 2] = rewr_functions::rewr_525_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 518 + 0] = rewr_functions::rewr_518_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 518 + 0] = rewr_functions::rewr_518_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 518 + 2] = rewr_functions::rewr_518_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 518 + 2] = rewr_functions::rewr_518_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 517 + 0] = rewr_functions::rewr_517_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 517 + 0] = rewr_functions::rewr_517_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 517 + 2] = rewr_functions::rewr_517_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 517 + 2] = rewr_functions::rewr_517_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 510 + 0] = rewr_functions::rewr_510_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 510 + 0] = rewr_functions::rewr_510_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 510 + 2] = rewr_functions::rewr_510_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 510 + 2] = rewr_functions::rewr_510_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 509 + 0] = rewr_functions::rewr_509_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 509 + 0] = rewr_functions::rewr_509_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 509 + 2] = rewr_functions::rewr_509_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 509 + 2] = rewr_functions::rewr_509_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 502 + 0] = rewr_functions::rewr_502_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 502 + 0] = rewr_functions::rewr_502_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 502 + 2] = rewr_functions::rewr_502_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 502 + 2] = rewr_functions::rewr_502_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 501 + 0] = rewr_functions::rewr_501_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 501 + 0] = rewr_functions::rewr_501_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 501 + 2] = rewr_functions::rewr_501_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 501 + 2] = rewr_functions::rewr_501_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 495 + 0] = rewr_functions::rewr_495_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 495 + 0] = rewr_functions::rewr_495_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 495 + 2] = rewr_functions::rewr_495_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 495 + 2] = rewr_functions::rewr_495_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 494 + 0] = rewr_functions::rewr_494_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 494 + 0] = rewr_functions::rewr_494_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 494 + 2] = rewr_functions::rewr_494_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 494 + 2] = rewr_functions::rewr_494_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 487 + 0] = rewr_functions::rewr_487_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 487 + 0] = rewr_functions::rewr_487_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 487 + 2] = rewr_functions::rewr_487_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 487 + 2] = rewr_functions::rewr_487_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 486 + 0] = rewr_functions::rewr_486_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 486 + 0] = rewr_functions::rewr_486_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 486 + 2] = rewr_functions::rewr_486_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 486 + 2] = rewr_functions::rewr_486_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 479 + 0] = rewr_functions::rewr_479_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 479 + 0] = rewr_functions::rewr_479_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 479 + 2] = rewr_functions::rewr_479_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 479 + 2] = rewr_functions::rewr_479_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 478 + 0] = rewr_functions::rewr_478_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 478 + 0] = rewr_functions::rewr_478_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 478 + 2] = rewr_functions::rewr_478_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 478 + 2] = rewr_functions::rewr_478_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 471 + 0] = rewr_functions::rewr_471_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 471 + 0] = rewr_functions::rewr_471_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 471 + 2] = rewr_functions::rewr_471_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 471 + 2] = rewr_functions::rewr_471_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 470 + 0] = rewr_functions::rewr_470_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 470 + 0] = rewr_functions::rewr_470_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 470 + 2] = rewr_functions::rewr_470_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 470 + 2] = rewr_functions::rewr_470_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 666 + 0] = rewr_functions::rewr_666_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 666 + 0] = rewr_functions::rewr_666_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 666 + 2] = rewr_functions::rewr_666_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 666 + 2] = rewr_functions::rewr_666_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 665 + 0] = rewr_functions::rewr_665_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 665 + 0] = rewr_functions::rewr_665_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 665 + 2] = rewr_functions::rewr_665_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 665 + 2] = rewr_functions::rewr_665_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 658 + 0] = rewr_functions::rewr_658_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 658 + 0] = rewr_functions::rewr_658_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 658 + 2] = rewr_functions::rewr_658_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 658 + 2] = rewr_functions::rewr_658_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 657 + 0] = rewr_functions::rewr_657_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 657 + 0] = rewr_functions::rewr_657_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 657 + 2] = rewr_functions::rewr_657_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 657 + 2] = rewr_functions::rewr_657_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 650 + 0] = rewr_functions::rewr_650_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 650 + 0] = rewr_functions::rewr_650_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 650 + 2] = rewr_functions::rewr_650_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 650 + 2] = rewr_functions::rewr_650_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 649 + 0] = rewr_functions::rewr_649_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 649 + 0] = rewr_functions::rewr_649_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 649 + 2] = rewr_functions::rewr_649_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 649 + 2] = rewr_functions::rewr_649_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 643 + 0] = rewr_functions::rewr_643_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 643 + 0] = rewr_functions::rewr_643_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 643 + 2] = rewr_functions::rewr_643_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 643 + 2] = rewr_functions::rewr_643_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 642 + 0] = rewr_functions::rewr_642_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 642 + 0] = rewr_functions::rewr_642_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 642 + 2] = rewr_functions::rewr_642_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 642 + 2] = rewr_functions::rewr_642_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 636 + 0] = rewr_functions::rewr_636_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 636 + 0] = rewr_functions::rewr_636_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 636 + 2] = rewr_functions::rewr_636_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 636 + 2] = rewr_functions::rewr_636_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 635 + 0] = rewr_functions::rewr_635_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 635 + 0] = rewr_functions::rewr_635_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 635 + 2] = rewr_functions::rewr_635_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 635 + 2] = rewr_functions::rewr_635_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 629 + 0] = rewr_functions::rewr_629_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 629 + 0] = rewr_functions::rewr_629_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 629 + 2] = rewr_functions::rewr_629_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 629 + 2] = rewr_functions::rewr_629_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 628 + 0] = rewr_functions::rewr_628_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 628 + 0] = rewr_functions::rewr_628_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 628 + 2] = rewr_functions::rewr_628_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 628 + 2] = rewr_functions::rewr_628_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 622 + 0] = rewr_functions::rewr_622_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 622 + 0] = rewr_functions::rewr_622_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 622 + 2] = rewr_functions::rewr_622_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 622 + 2] = rewr_functions::rewr_622_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 621 + 0] = rewr_functions::rewr_621_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 621 + 0] = rewr_functions::rewr_621_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 621 + 2] = rewr_functions::rewr_621_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 621 + 2] = rewr_functions::rewr_621_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 615 + 0] = rewr_functions::rewr_615_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 615 + 0] = rewr_functions::rewr_615_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 615 + 2] = rewr_functions::rewr_615_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 615 + 2] = rewr_functions::rewr_615_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 614 + 0] = rewr_functions::rewr_614_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 614 + 0] = rewr_functions::rewr_614_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 614 + 2] = rewr_functions::rewr_614_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 614 + 2] = rewr_functions::rewr_614_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 608 + 0] = rewr_functions::rewr_608_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 608 + 0] = rewr_functions::rewr_608_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 608 + 2] = rewr_functions::rewr_608_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 608 + 2] = rewr_functions::rewr_608_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 607 + 0] = rewr_functions::rewr_607_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 607 + 0] = rewr_functions::rewr_607_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 607 + 2] = rewr_functions::rewr_607_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 607 + 2] = rewr_functions::rewr_607_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 600 + 0] = rewr_functions::rewr_600_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 600 + 0] = rewr_functions::rewr_600_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 600 + 2] = rewr_functions::rewr_600_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 600 + 2] = rewr_functions::rewr_600_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 599 + 0] = rewr_functions::rewr_599_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 599 + 0] = rewr_functions::rewr_599_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 599 + 2] = rewr_functions::rewr_599_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 599 + 2] = rewr_functions::rewr_599_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 593 + 0] = rewr_functions::rewr_593_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 593 + 0] = rewr_functions::rewr_593_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 593 + 2] = rewr_functions::rewr_593_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 593 + 2] = rewr_functions::rewr_593_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 592 + 0] = rewr_functions::rewr_592_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 592 + 0] = rewr_functions::rewr_592_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 592 + 2] = rewr_functions::rewr_592_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 592 + 2] = rewr_functions::rewr_592_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 585 + 0] = rewr_functions::rewr_585_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 585 + 0] = rewr_functions::rewr_585_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 585 + 2] = rewr_functions::rewr_585_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 585 + 2] = rewr_functions::rewr_585_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 584 + 0] = rewr_functions::rewr_584_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 584 + 0] = rewr_functions::rewr_584_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 584 + 2] = rewr_functions::rewr_584_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 584 + 2] = rewr_functions::rewr_584_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 578 + 0] = rewr_functions::rewr_578_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 578 + 0] = rewr_functions::rewr_578_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 578 + 2] = rewr_functions::rewr_578_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 578 + 2] = rewr_functions::rewr_578_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 577 + 0] = rewr_functions::rewr_577_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 577 + 0] = rewr_functions::rewr_577_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 577 + 2] = rewr_functions::rewr_577_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 577 + 2] = rewr_functions::rewr_577_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 570 + 0] = rewr_functions::rewr_570_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 570 + 0] = rewr_functions::rewr_570_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 570 + 2] = rewr_functions::rewr_570_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 570 + 2] = rewr_functions::rewr_570_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 569 + 0] = rewr_functions::rewr_569_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 569 + 0] = rewr_functions::rewr_569_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 569 + 2] = rewr_functions::rewr_569_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 569 + 2] = rewr_functions::rewr_569_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 751 + 0] = rewr_functions::rewr_751_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 751 + 0] = rewr_functions::rewr_751_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 751 + 2] = rewr_functions::rewr_751_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 751 + 2] = rewr_functions::rewr_751_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 757 + 0] = rewr_functions::rewr_757_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 757 + 0] = rewr_functions::rewr_757_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 757 + 2] = rewr_functions::rewr_757_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 757 + 2] = rewr_functions::rewr_757_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 756 + 0] = rewr_functions::rewr_756_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 756 + 0] = rewr_functions::rewr_756_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 756 + 1] = rewr_functions::rewr_756_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 756 + 1] = rewr_functions::rewr_756_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 750 + 0] = rewr_functions::rewr_750_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 750 + 0] = rewr_functions::rewr_750_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 750 + 1] = rewr_functions::rewr_750_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 750 + 1] = rewr_functions::rewr_750_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 739 + 0] = rewr_functions::rewr_739_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 739 + 0] = rewr_functions::rewr_739_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 739 + 2] = rewr_functions::rewr_739_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 739 + 2] = rewr_functions::rewr_739_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 738 + 0] = rewr_functions::rewr_738_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 738 + 0] = rewr_functions::rewr_738_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 738 + 1] = rewr_functions::rewr_738_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 738 + 1] = rewr_functions::rewr_738_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 733 + 0] = rewr_functions::rewr_733_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 733 + 0] = rewr_functions::rewr_733_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 720 + 0] = rewr_functions::rewr_720_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 720 + 0] = rewr_functions::rewr_720_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 720 + 2] = rewr_functions::rewr_720_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 720 + 2] = rewr_functions::rewr_720_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 719 + 0] = rewr_functions::rewr_719_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 719 + 0] = rewr_functions::rewr_719_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 719 + 2] = rewr_functions::rewr_719_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 719 + 2] = rewr_functions::rewr_719_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 713 + 0] = rewr_functions::rewr_713_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 713 + 0] = rewr_functions::rewr_713_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 713 + 2] = rewr_functions::rewr_713_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 713 + 2] = rewr_functions::rewr_713_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 712 + 0] = rewr_functions::rewr_712_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 712 + 0] = rewr_functions::rewr_712_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 712 + 2] = rewr_functions::rewr_712_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 712 + 2] = rewr_functions::rewr_712_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 705 + 0] = rewr_functions::rewr_705_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 705 + 0] = rewr_functions::rewr_705_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 705 + 2] = rewr_functions::rewr_705_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 705 + 2] = rewr_functions::rewr_705_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 704 + 0] = rewr_functions::rewr_704_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 704 + 0] = rewr_functions::rewr_704_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 704 + 2] = rewr_functions::rewr_704_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 704 + 2] = rewr_functions::rewr_704_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 698 + 0] = rewr_functions::rewr_698_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 698 + 0] = rewr_functions::rewr_698_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 698 + 2] = rewr_functions::rewr_698_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 698 + 2] = rewr_functions::rewr_698_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 697 + 0] = rewr_functions::rewr_697_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 697 + 0] = rewr_functions::rewr_697_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 697 + 2] = rewr_functions::rewr_697_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 697 + 2] = rewr_functions::rewr_697_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 690 + 0] = rewr_functions::rewr_690_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 690 + 0] = rewr_functions::rewr_690_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 690 + 2] = rewr_functions::rewr_690_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 690 + 2] = rewr_functions::rewr_690_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 689 + 0] = rewr_functions::rewr_689_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 689 + 0] = rewr_functions::rewr_689_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 689 + 2] = rewr_functions::rewr_689_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 689 + 2] = rewr_functions::rewr_689_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 682 + 0] = rewr_functions::rewr_682_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 682 + 0] = rewr_functions::rewr_682_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 682 + 2] = rewr_functions::rewr_682_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 682 + 2] = rewr_functions::rewr_682_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 681 + 0] = rewr_functions::rewr_681_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 681 + 0] = rewr_functions::rewr_681_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 681 + 2] = rewr_functions::rewr_681_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 681 + 2] = rewr_functions::rewr_681_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 674 + 0] = rewr_functions::rewr_674_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 674 + 0] = rewr_functions::rewr_674_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 674 + 2] = rewr_functions::rewr_674_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 674 + 2] = rewr_functions::rewr_674_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 673 + 0] = rewr_functions::rewr_673_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 673 + 0] = rewr_functions::rewr_673_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 673 + 2] = rewr_functions::rewr_673_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 673 + 2] = rewr_functions::rewr_673_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 861 + 0] = rewr_functions::rewr_861_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 861 + 0] = rewr_functions::rewr_861_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 861 + 2] = rewr_functions::rewr_861_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 861 + 2] = rewr_functions::rewr_861_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 860 + 0] = rewr_functions::rewr_860_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 860 + 0] = rewr_functions::rewr_860_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 860 + 1] = rewr_functions::rewr_860_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 860 + 1] = rewr_functions::rewr_860_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 843 + 0] = rewr_functions::rewr_843_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 843 + 0] = rewr_functions::rewr_843_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 843 + 2] = rewr_functions::rewr_843_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 843 + 2] = rewr_functions::rewr_843_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 842 + 0] = rewr_functions::rewr_842_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 842 + 0] = rewr_functions::rewr_842_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 842 + 1] = rewr_functions::rewr_842_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 842 + 1] = rewr_functions::rewr_842_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 786 + 0] = rewr_functions::rewr_786_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 786 + 0] = rewr_functions::rewr_786_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 786 + 2] = rewr_functions::rewr_786_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 786 + 2] = rewr_functions::rewr_786_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 785 + 0] = rewr_functions::rewr_785_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 785 + 0] = rewr_functions::rewr_785_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 785 + 1] = rewr_functions::rewr_785_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 785 + 1] = rewr_functions::rewr_785_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 790 + 0] = rewr_functions::rewr_790_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 790 + 0] = rewr_functions::rewr_790_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 797 + 0] = rewr_functions::rewr_797_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 797 + 0] = rewr_functions::rewr_797_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 789 + 0] = rewr_functions::rewr_789_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 789 + 0] = rewr_functions::rewr_789_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 784 + 0] = rewr_functions::rewr_784_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 784 + 0] = rewr_functions::rewr_784_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 783 + 0] = rewr_functions::rewr_783_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 783 + 0] = rewr_functions::rewr_783_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 782 + 0] = rewr_functions::rewr_782_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 782 + 0] = rewr_functions::rewr_782_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 819 + 0] = rewr_functions::rewr_819_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 819 + 0] = rewr_functions::rewr_819_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 819 + 2] = rewr_functions::rewr_819_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 819 + 2] = rewr_functions::rewr_819_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 818 + 0] = rewr_functions::rewr_818_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 818 + 0] = rewr_functions::rewr_818_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 818 + 1] = rewr_functions::rewr_818_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 818 + 1] = rewr_functions::rewr_818_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 813 + 0] = rewr_functions::rewr_813_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 813 + 0] = rewr_functions::rewr_813_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 812 + 0] = rewr_functions::rewr_812_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 812 + 0] = rewr_functions::rewr_812_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 811 + 0] = rewr_functions::rewr_811_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 811 + 0] = rewr_functions::rewr_811_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 810 + 0] = rewr_functions::rewr_810_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 810 + 0] = rewr_functions::rewr_810_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 809 + 0] = rewr_functions::rewr_809_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 809 + 0] = rewr_functions::rewr_809_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 794 + 0] = rewr_functions::rewr_794_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 794 + 0] = rewr_functions::rewr_794_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 794 + 2] = rewr_functions::rewr_794_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 794 + 2] = rewr_functions::rewr_794_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 793 + 0] = rewr_functions::rewr_793_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 793 + 0] = rewr_functions::rewr_793_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 793 + 1] = rewr_functions::rewr_793_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 793 + 1] = rewr_functions::rewr_793_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 775 + 0] = rewr_functions::rewr_775_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 775 + 0] = rewr_functions::rewr_775_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 775 + 2] = rewr_functions::rewr_775_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 775 + 2] = rewr_functions::rewr_775_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 774 + 0] = rewr_functions::rewr_774_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 774 + 0] = rewr_functions::rewr_774_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 774 + 1] = rewr_functions::rewr_774_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 774 + 1] = rewr_functions::rewr_774_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 922 + 0] = rewr_functions::rewr_922_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 922 + 0] = rewr_functions::rewr_922_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 922 + 2] = rewr_functions::rewr_922_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 922 + 2] = rewr_functions::rewr_922_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 921 + 0] = rewr_functions::rewr_921_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 921 + 0] = rewr_functions::rewr_921_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 921 + 1] = rewr_functions::rewr_921_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 921 + 1] = rewr_functions::rewr_921_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 916 + 0] = rewr_functions::rewr_916_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 916 + 0] = rewr_functions::rewr_916_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 915 + 0] = rewr_functions::rewr_915_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 915 + 0] = rewr_functions::rewr_915_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 914 + 0] = rewr_functions::rewr_914_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 914 + 0] = rewr_functions::rewr_914_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 913 + 0] = rewr_functions::rewr_913_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 913 + 0] = rewr_functions::rewr_913_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 912 + 0] = rewr_functions::rewr_912_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 912 + 0] = rewr_functions::rewr_912_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 911 + 0] = rewr_functions::rewr_911_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 911 + 0] = rewr_functions::rewr_911_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 910 + 0] = rewr_functions::rewr_910_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 910 + 0] = rewr_functions::rewr_910_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 909 + 0] = rewr_functions::rewr_909_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 909 + 0] = rewr_functions::rewr_909_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 908 + 0] = rewr_functions::rewr_908_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 908 + 0] = rewr_functions::rewr_908_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 907 + 0] = rewr_functions::rewr_907_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 907 + 0] = rewr_functions::rewr_907_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 906 + 0] = rewr_functions::rewr_906_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 906 + 0] = rewr_functions::rewr_906_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 905 + 0] = rewr_functions::rewr_905_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 905 + 0] = rewr_functions::rewr_905_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 904 + 0] = rewr_functions::rewr_904_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 904 + 0] = rewr_functions::rewr_904_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 903 + 0] = rewr_functions::rewr_903_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 903 + 0] = rewr_functions::rewr_903_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 902 + 0] = rewr_functions::rewr_902_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 902 + 0] = rewr_functions::rewr_902_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 901 + 0] = rewr_functions::rewr_901_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 901 + 0] = rewr_functions::rewr_901_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 900 + 0] = rewr_functions::rewr_900_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 900 + 0] = rewr_functions::rewr_900_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 899 + 0] = rewr_functions::rewr_899_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 899 + 0] = rewr_functions::rewr_899_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 898 + 0] = rewr_functions::rewr_898_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 898 + 0] = rewr_functions::rewr_898_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 897 + 0] = rewr_functions::rewr_897_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 897 + 0] = rewr_functions::rewr_897_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 896 + 0] = rewr_functions::rewr_896_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 896 + 0] = rewr_functions::rewr_896_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 855 + 0] = rewr_functions::rewr_855_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 855 + 0] = rewr_functions::rewr_855_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 855 + 2] = rewr_functions::rewr_855_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 855 + 2] = rewr_functions::rewr_855_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 854 + 0] = rewr_functions::rewr_854_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 854 + 0] = rewr_functions::rewr_854_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 854 + 1] = rewr_functions::rewr_854_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 854 + 1] = rewr_functions::rewr_854_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 839 + 0] = rewr_functions::rewr_839_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 839 + 0] = rewr_functions::rewr_839_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 839 + 2] = rewr_functions::rewr_839_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 839 + 2] = rewr_functions::rewr_839_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 846 + 0] = rewr_functions::rewr_846_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 846 + 0] = rewr_functions::rewr_846_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 846 + 1] = rewr_functions::rewr_846_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 846 + 1] = rewr_functions::rewr_846_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 977 + 0] = rewr_functions::rewr_977_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 977 + 0] = rewr_functions::rewr_977_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 977 + 2] = rewr_functions::rewr_977_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 977 + 2] = rewr_functions::rewr_977_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 976 + 0] = rewr_functions::rewr_976_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 976 + 0] = rewr_functions::rewr_976_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 976 + 1] = rewr_functions::rewr_976_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 976 + 1] = rewr_functions::rewr_976_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 953 + 0] = rewr_functions::rewr_953_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 953 + 0] = rewr_functions::rewr_953_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 953 + 2] = rewr_functions::rewr_953_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 953 + 2] = rewr_functions::rewr_953_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 952 + 0] = rewr_functions::rewr_952_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 952 + 0] = rewr_functions::rewr_952_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 952 + 1] = rewr_functions::rewr_952_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 952 + 1] = rewr_functions::rewr_952_1_term_arg_in_normal_form;
}
