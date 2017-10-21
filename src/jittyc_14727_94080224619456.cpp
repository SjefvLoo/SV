#define INDEX_BOUND 403
#define ARITY_BOUND 8
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
  // We're declaring static members in a struct rather than simple functions in
  // the global scope, so that we don't have to worry about forward declarations.
  // [3] C3_3: Enum3 # Pos # Pos # Pos -> Pos
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_3_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5590c257c400) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257c3a0) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257c3d0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c550), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_3_4_term(const application& t) { return rewr_3_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_3_4_term_arg_in_normal_form(const application& t) { return rewr_3_4(t[0], t[1], t[2], t[3]); }


  // [3] C3_3: Enum3 # Pos # Pos # Pos -> Pos
  static inline const data_expression& rewr_3_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2596b30);
  }

  static inline data_expression rewr_3_0_term(const application&) { return rewr_3_0(); }

  static inline data_expression rewr_3_0_term_arg_in_normal_form(const application&) { return rewr_3_0(); }


  // [2] C3_2: Enum3 # Bool # Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_2_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5590c257c400) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257c3a0) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257c3d0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c580), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_2_4_term(const application& t) { return rewr_2_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_2_4_term_arg_in_normal_form(const application& t) { return rewr_2_4(t[0], t[1], t[2], t[3]); }


  // [2] C3_2: Enum3 # Bool # Bool # Bool -> Bool
  static inline const data_expression& rewr_2_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c259ff10);
  }

  static inline data_expression rewr_2_0_term(const application&) { return rewr_2_0(); }

  static inline data_expression rewr_2_0_term_arg_in_normal_form(const application&) { return rewr_2_0(); }


  // [1] C3_1: Enum3 # Recipe # Recipe # Recipe -> Recipe
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_1_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5590c257c400) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257c3a0) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257c3d0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c5b0), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_1_4_term(const application& t) { return rewr_1_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_1_4_term_arg_in_normal_form(const application& t) { return rewr_1_4(t[0], t[1], t[2], t[3]); }


  // [1] C3_1: Enum3 # Recipe # Recipe # Recipe -> Recipe
  static inline const data_expression& rewr_1_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2597db0);
  }

  static inline data_expression rewr_1_0_term(const application&) { return rewr_1_0(); }

  static inline data_expression rewr_1_0_term_arg_in_normal_form(const application&) { return rewr_1_0(); }


  // [0] C3_: Enum3 # Nat # Nat # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2, class DATA_EXPR3>
  static inline data_expression rewr_0_4(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2, const DATA_EXPR3& arg_not_nf3)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@D(@@N(@@S(@var_0, @@N(@@N(@@R(@var_0)))))), @@F(e0_3, @@D(@@N(@@N(@@N(@@S(@var_2, @@R(@var_2)))))), @@F(e1_3, @@D(@@N(@@N(@@S(@var_1, @@N(@@R(@var_1)))))), @@X)))
    {
      if (uint_address(arg0) == 0x5590c257c400) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257c3a0) // F1
        {
          const data_expression& var_2 = local_rewrite(arg_not_nf3); // S1
          return var_2; // R1 @var_2
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257c3d0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c5e0), arg0, arg1, arg2, arg3);
  }

  static inline data_expression rewr_0_4_term(const application& t) { return rewr_0_4(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2]), term_not_in_normal_form(t[3])); }

  static inline data_expression rewr_0_4_term_arg_in_normal_form(const application& t) { return rewr_0_4(t[0], t[1], t[2], t[3]); }


  // [0] C3_: Enum3 # Nat # Nat # Nat -> Nat
  static inline const data_expression& rewr_0_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26003f0);
  }

  static inline data_expression rewr_0_0_term(const application&) { return rewr_0_0(); }

  static inline data_expression rewr_0_0_term_arg_in_normal_form(const application&) { return rewr_0_0(); }


  // [361] @equal_arguments: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_361_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(e2_3, @@D(@@N(@@F(e2_3, @@R(true), @@X))), @@F(e0_3, @@D(@@N(@@F(e0_3, @@R(true), @@X))), @@F(e1_3, @@D(@@N(@@F(e1_3, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x5590c257c400) // F1
      {
        if (uint_address(arg1) == 0x5590c257c400) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257c3a0) // F1
        {
          if (uint_address(arg1) == 0x5590c257c3a0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257c3d0) // F1
          {
            if (uint_address(arg1) == 0x5590c257c3d0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d5170), arg0, arg1);
  }

  static inline data_expression rewr_361_2_term(const application& t) { return rewr_361_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_361_2_term_arg_in_normal_form(const application& t) { return rewr_361_2(t[0], t[1]); }


  // [361] @equal_arguments: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_361_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2600350);
  }

  static inline data_expression rewr_361_0_term(const application&) { return rewr_361_0(); }

  static inline data_expression rewr_361_0_term_arg_in_normal_form(const application&) { return rewr_361_0(); }


  // [360] @to_pos: Enum3 -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_360_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(e2_3, @@R(1), @@F(e0_3, @@R(3), @@F(e1_3, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x5590c257c400) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c259d860); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257c3a0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c259d690); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257c3d0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c259d6c0); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d51a0), arg0);
  }

  static inline data_expression rewr_360_1_term(const application& t) { return rewr_360_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_360_1_term_arg_in_normal_form(const application& t) { return rewr_360_1(t[0]); }


  // [360] @to_pos: Enum3 -> Pos
  static inline const data_expression& rewr_360_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2600320);
  }

  static inline data_expression rewr_360_0_term(const application&) { return rewr_360_0(); }

  static inline data_expression rewr_360_0_term_arg_in_normal_form(const application&) { return rewr_360_0(); }


  // [326] @equal_arguments: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_326_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(Empty, @@D(@@N(@@F(Empty, @@R(true), @@X))), @@F(Notifying, @@D(@@N(@@F(Notifying, @@R(true), @@X))), @@F(Wafer, @@D(@@N(@@F(Wafer, @@R(true), @@X))), @@F(Processed, @@D(@@N(@@F(Processed, @@R(true), @@X))), @@X))))
    {
      if (uint_address(arg0) == 0x5590c257a9f0) // F1
      {
        if (uint_address(arg1) == 0x5590c257a9f0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6f0) // F1
        {
          if (uint_address(arg1) == 0x5590c257a6f0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257ab70) // F1
          {
            if (uint_address(arg1) == 0x5590c257ab70) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x5590c257a1b0) // F1
            {
              if (uint_address(arg1) == 0x5590c257a1b0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d66d0), arg0, arg1);
  }

  static inline data_expression rewr_326_2_term(const application& t) { return rewr_326_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_326_2_term_arg_in_normal_form(const application& t) { return rewr_326_2(t[0], t[1]); }


  // [326] @equal_arguments: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_326_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26007c0);
  }

  static inline data_expression rewr_326_0_term(const application&) { return rewr_326_0(); }

  static inline data_expression rewr_326_0_term_arg_in_normal_form(const application&) { return rewr_326_0(); }


  // [325] @to_pos: ChuckStatus -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_325_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(Empty, @@R(1), @@F(Notifying, @@R(4), @@F(Wafer, @@R(2), @@F(Processed, @@R(3), @@X))))
    {
      if (uint_address(arg0) == 0x5590c257a9f0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c259d860); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6f0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25981f0); // R1 4
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257ab70) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c259d6c0); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x5590c257a1b0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c259d690); // R1 3
            }
            else
            {
            }
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d6700), arg0);
  }

  static inline data_expression rewr_325_1_term(const application& t) { return rewr_325_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_325_1_term_arg_in_normal_form(const application& t) { return rewr_325_1(t[0]); }


  // [325] @to_pos: ChuckStatus -> Pos
  static inline const data_expression& rewr_325_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c259d6f0);
  }

  static inline data_expression rewr_325_0_term(const application&) { return rewr_325_0(); }

  static inline data_expression rewr_325_0_term_arg_in_normal_form(const application&) { return rewr_325_0(); }


  // [356] @equal_arguments: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_356_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(RobotThree, @@D(@@N(@@F(RobotThree, @@R(true), @@X))), @@F(RobotTwo, @@D(@@N(@@F(RobotTwo, @@R(true), @@X))), @@F(RobotOne, @@D(@@N(@@F(RobotOne, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x5590c25d4ff0) // F1
      {
        if (uint_address(arg1) == 0x5590c25d4ff0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5590c25d5020) // F1
        {
          if (uint_address(arg1) == 0x5590c25d5020) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257ae70) // F1
          {
            if (uint_address(arg1) == 0x5590c257ae70) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d4ed0), arg0, arg1);
  }

  static inline data_expression rewr_356_2_term(const application& t) { return rewr_356_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_356_2_term_arg_in_normal_form(const application& t) { return rewr_356_2(t[0], t[1]); }


  // [356] @equal_arguments: Robot # Robot -> Bool
  static inline const data_expression& rewr_356_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c259cbf0);
  }

  static inline data_expression rewr_356_0_term(const application&) { return rewr_356_0(); }

  static inline data_expression rewr_356_0_term_arg_in_normal_form(const application&) { return rewr_356_0(); }


  // [355] @to_pos: Robot -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_355_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(RobotOne, @@R(1), @@F(RobotThree, @@R(3), @@F(RobotTwo, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x5590c257ae70) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c259d860); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5590c25d4ff0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c259d690); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x5590c25d5020) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c259d6c0); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d4f00), arg0);
  }

  static inline data_expression rewr_355_1_term(const application& t) { return rewr_355_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_355_1_term_arg_in_normal_form(const application& t) { return rewr_355_1(t[0]); }


  // [355] @to_pos: Robot -> Pos
  static inline const data_expression& rewr_355_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2600a70);
  }

  static inline data_expression rewr_355_0_term(const application&) { return rewr_355_0(); }

  static inline data_expression rewr_355_0_term_arg_in_normal_form(const application&) { return rewr_355_0(); }


  // [336] @equal_arguments: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_336_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(RecipeOne, @@D(@@N(@@F(RecipeOne, @@R(true), @@X))), @@F(RecipeThree, @@D(@@N(@@F(RecipeThree, @@R(true), @@X))), @@F(RecipeTwo, @@D(@@N(@@F(RecipeTwo, @@R(true), @@X))), @@X)))
    {
      if (uint_address(arg0) == 0x5590c25b2390) // F1
      {
        if (uint_address(arg1) == 0x5590c25b2390) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5590c25b22d0) // F1
        {
          if (uint_address(arg1) == 0x5590c25b22d0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5590c25b2330) // F1
          {
            if (uint_address(arg1) == 0x5590c25b2330) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d5b60), arg0, arg1);
  }

  static inline data_expression rewr_336_2_term(const application& t) { return rewr_336_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_336_2_term_arg_in_normal_form(const application& t) { return rewr_336_2(t[0], t[1]); }


  // [336] @equal_arguments: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_336_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c259d830);
  }

  static inline data_expression rewr_336_0_term(const application&) { return rewr_336_0(); }

  static inline data_expression rewr_336_0_term_arg_in_normal_form(const application&) { return rewr_336_0(); }


  // [335] @to_pos: Recipe -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_335_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(RecipeOne, @@R(1), @@F(RecipeThree, @@R(3), @@F(RecipeTwo, @@R(2), @@X)))
    {
      if (uint_address(arg0) == 0x5590c25b2390) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c259d860); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5590c25b22d0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c259d690); // R1 3
        }
        else
        {
          if (uint_address(arg0) == 0x5590c25b2330) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c259d6c0); // R1 2
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d5b90), arg0);
  }

  static inline data_expression rewr_335_1_term(const application& t) { return rewr_335_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_335_1_term_arg_in_normal_form(const application& t) { return rewr_335_1(t[0]); }


  // [335] @to_pos: Recipe -> Pos
  static inline const data_expression& rewr_335_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c259d7b0);
  }

  static inline data_expression rewr_335_0_term(const application&) { return rewr_335_0(); }

  static inline data_expression rewr_335_0_term_arg_in_normal_form(const application&) { return rewr_335_0(); }


  // [318] @equal_arguments: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_318_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@F(Tray, @@D(@@N(@@F(Tray, @@R(true), @@X))), @@F(ChuckEmptyTwo, @@D(@@N(@@F(ChuckEmptyTwo, @@R(true), @@X))), @@F(ChuckIn, @@D(@@N(@@F(ChuckIn, @@R(true), @@X))), @@F(ChuckEmptyOne, @@D(@@N(@@F(ChuckEmptyOne, @@R(true), @@X))), @@F(ChuckOut, @@D(@@N(@@F(ChuckOut, @@R(true), @@X))), @@F(ChuckProj, @@D(@@N(@@F(ChuckProj, @@R(true), @@X))), @@F(ChuckMeas, @@D(@@N(@@F(ChuckMeas, @@R(true), @@X))), @@X)))))))
    {
      if (uint_address(arg0) == 0x5590c257ad80) // F1
      {
        if (uint_address(arg1) == 0x5590c257ad80) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5590c25d6d30) // F1
        {
          if (uint_address(arg1) == 0x5590c25d6d30) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257acf0) // F1
          {
            if (uint_address(arg1) == 0x5590c257acf0) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
            }
            else
            {
            }
          }
          else
          {
            if (uint_address(arg0) == 0x5590c25d6d60) // F1
            {
              if (uint_address(arg1) == 0x5590c25d6d60) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
              }
              else
              {
              }
            }
            else
            {
              if (uint_address(arg0) == 0x5590c257adb0) // F1
              {
                if (uint_address(arg1) == 0x5590c257adb0) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
                }
                else
                {
                }
              }
              else
              {
                if (uint_address(arg0) == 0x5590c25d6d90) // F1
                {
                  if (uint_address(arg1) == 0x5590c25d6d90) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
                  }
                  else
                  {
                  }
                }
                else
                {
                  if (uint_address(arg0) == 0x5590c25d6dc0) // F1
                  {
                    if (uint_address(arg1) == 0x5590c25d6dc0) // F1
                    {
                      return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d6c10), arg0, arg1);
  }

  static inline data_expression rewr_318_2_term(const application& t) { return rewr_318_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_318_2_term_arg_in_normal_form(const application& t) { return rewr_318_2(t[0], t[1]); }


  // [318] @equal_arguments: Position # Position -> Bool
  static inline const data_expression& rewr_318_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2598280);
  }

  static inline data_expression rewr_318_0_term(const application&) { return rewr_318_0(); }

  static inline data_expression rewr_318_0_term_arg_in_normal_form(const application&) { return rewr_318_0(); }


  // [317] @to_pos: Position -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_317_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(Tray, @@R(1), @@F(ChuckEmptyTwo, @@R(7), @@F(ChuckIn, @@R(2), @@F(ChuckEmptyOne, @@R(6), @@F(ChuckOut, @@R(3), @@F(ChuckProj, @@R(5), @@F(ChuckMeas, @@R(4), @@X)))))))
    {
      if (uint_address(arg0) == 0x5590c257ad80) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c259d860); // R1 1
      }
      else
      {
        if (uint_address(arg0) == 0x5590c25d6d30) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25ffff0); // R1 7
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257acf0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c259d6c0); // R1 2
          }
          else
          {
            if (uint_address(arg0) == 0x5590c25d6d60) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c259d650); // R1 6
            }
            else
            {
              if (uint_address(arg0) == 0x5590c257adb0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5590c259d690); // R1 3
              }
              else
              {
                if (uint_address(arg0) == 0x5590c25d6d90) // F1
                {
                  return *reinterpret_cast<const data_expression*>(0x5590c25981b0); // R1 5
                }
                else
                {
                  if (uint_address(arg0) == 0x5590c25d6dc0) // F1
                  {
                    return *reinterpret_cast<const data_expression*>(0x5590c25981f0); // R1 4
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25d6c40), arg0);
  }

  static inline data_expression rewr_317_1_term(const application& t) { return rewr_317_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_317_1_term_arg_in_normal_form(const application& t) { return rewr_317_1(t[0]); }


  // [317] @to_pos: Position -> Pos
  static inline const data_expression& rewr_317_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25982b0);
  }

  static inline data_expression rewr_317_0_term(const application&) { return rewr_317_0(); }

  static inline data_expression rewr_317_0_term_arg_in_normal_form(const application&) { return rewr_317_0(); }


  // [296] !=: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_296_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_295_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c9380), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_296_2_term(const application& t) { return rewr_296_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_296_2_term_arg_in_normal_form(const application& t) { return rewr_296_2(t[0], t[1]); }


  // [296] !=: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  static inline const data_expression& rewr_296_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2600890);
  }

  static inline data_expression rewr_296_0_term(const application&) { return rewr_296_0(); }

  static inline data_expression rewr_296_0_term_arg_in_normal_form(const application&) { return rewr_296_0(); }


  // [295] ==: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_295_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Position. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(0), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(0)),static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), true, sigma())); // R1 forall x0,x0: Position. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c93b0), arg0, arg1);
  }

  static inline data_expression rewr_295_2_term(const application& t) { return rewr_295_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_295_2_term_arg_in_normal_form(const application& t) { return rewr_295_2(t[0], t[1]); }


  // [295] ==: (Position # Position -> Bool) # (Position # Position -> Bool) -> Bool
  static inline const data_expression& rewr_295_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26008f0);
  }

  static inline data_expression rewr_295_0_term(const application&) { return rewr_295_0(); }

  static inline data_expression rewr_295_0_term_arg_in_normal_form(const application&) { return rewr_295_0(); }


  // [289] !=: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_289_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_288_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c9800), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_289_2_term(const application& t) { return rewr_289_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_289_2_term_arg_in_normal_form(const application& t) { return rewr_289_2(t[0], t[1]); }


  // [289] !=: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_289_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26008c0);
  }

  static inline data_expression rewr_289_0_term(const application&) { return rewr_289_0(); }

  static inline data_expression rewr_289_0_term_arg_in_normal_form(const application&) { return rewr_289_0(); }


  // [288] ==: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_288_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Position. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(1), rewr_12_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(0)), static_cast<data_expression>(this_rewriter->bound_variable_get(0))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Position. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c9830), arg0, arg1);
  }

  static inline data_expression rewr_288_2_term(const application& t) { return rewr_288_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_288_2_term_arg_in_normal_form(const application& t) { return rewr_288_2(t[0], t[1]); }


  // [288] ==: (Bool # Position # Position -> Position) # (Bool # Position # Position -> Position) -> Bool
  static inline const data_expression& rewr_288_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25f7f20);
  }

  static inline data_expression rewr_288_0_term(const application&) { return rewr_288_0(); }

  static inline data_expression rewr_288_0_term_arg_in_normal_form(const application&) { return rewr_288_0(); }


  // [282] !=: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_282_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_281_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c9c50), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_282_2_term(const application& t) { return rewr_282_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_282_2_term_arg_in_normal_form(const application& t) { return rewr_282_2(t[0], t[1]); }


  // [282] !=: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_282_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2604eb0);
  }

  static inline data_expression rewr_282_0_term(const application&) { return rewr_282_0(); }

  static inline data_expression rewr_282_0_term_arg_in_normal_form(const application&) { return rewr_282_0(); }


  // [281] ==: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_281_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0,x0: Bool. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(2), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), delayed_application3<data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(1)),static_cast<data_expression>(this_rewriter->bound_variable_get(1)),static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), true, sigma())); // R1 forall x0,x0,x0: Bool. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c9c80), arg0, arg1);
  }

  static inline data_expression rewr_281_2_term(const application& t) { return rewr_281_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_281_2_term_arg_in_normal_form(const application& t) { return rewr_281_2(t[0], t[1]); }


  // [281] ==: (Bool # Bool # Bool -> Bool) # (Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_281_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2600a40);
  }

  static inline data_expression rewr_281_0_term(const application&) { return rewr_281_0(); }

  static inline data_expression rewr_281_0_term_arg_in_normal_form(const application&) { return rewr_281_0(); }


  // [275] !=: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_275_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_274_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25ca100), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_275_2_term(const application& t) { return rewr_275_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_275_2_term_arg_in_normal_form(const application& t) { return rewr_275_2(t[0], t[1]); }


  // [275] !=: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  static inline const data_expression& rewr_275_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25ff990);
  }

  static inline data_expression rewr_275_0_term(const application&) { return rewr_275_0(); }

  static inline data_expression rewr_275_0_term_arg_in_normal_form(const application&) { return rewr_275_0(); }


  // [274] ==: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_274_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(3), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(2)),static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), true, sigma())); // R1 forall x0,x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25ca130), arg0, arg1);
  }

  static inline data_expression rewr_274_2_term(const application& t) { return rewr_274_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_274_2_term_arg_in_normal_form(const application& t) { return rewr_274_2(t[0], t[1]); }


  // [274] ==: (Pos # Pos -> Bool) # (Pos # Pos -> Bool) -> Bool
  static inline const data_expression& rewr_274_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2600860);
  }

  static inline data_expression rewr_274_0_term(const application&) { return rewr_274_0(); }

  static inline data_expression rewr_274_0_term_arg_in_normal_form(const application&) { return rewr_274_0(); }


  // [268] !=: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_268_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_267_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25ca5b0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_268_2_term(const application& t) { return rewr_268_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_268_2_term_arg_in_normal_form(const application& t) { return rewr_268_2(t[0], t[1]); }


  // [268] !=: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  static inline const data_expression& rewr_268_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26050e0);
  }

  static inline data_expression rewr_268_0_term(const application&) { return rewr_268_0(); }

  static inline data_expression rewr_268_0_term_arg_in_normal_form(const application&) { return rewr_268_0(); }


  // [267] ==: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_267_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: ChuckStatus. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(4), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(3)),static_cast<data_expression>(this_rewriter->bound_variable_get(3)))), true, sigma())); // R1 forall x0,x0: ChuckStatus. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25ca5e0), arg0, arg1);
  }

  static inline data_expression rewr_267_2_term(const application& t) { return rewr_267_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_267_2_term_arg_in_normal_form(const application& t) { return rewr_267_2(t[0], t[1]); }


  // [267] ==: (ChuckStatus # ChuckStatus -> Bool) # (ChuckStatus # ChuckStatus -> Bool) -> Bool
  static inline const data_expression& rewr_267_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2604fd0);
  }

  static inline data_expression rewr_267_0_term(const application&) { return rewr_267_0(); }

  static inline data_expression rewr_267_0_term_arg_in_normal_form(const application&) { return rewr_267_0(); }


  // [261] !=: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_261_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_260_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25caa60), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_261_2_term(const application& t) { return rewr_261_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_261_2_term_arg_in_normal_form(const application& t) { return rewr_261_2(t[0], t[1]); }


  // [261] !=: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  static inline const data_expression& rewr_261_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605080);
  }

  static inline data_expression rewr_261_0_term(const application&) { return rewr_261_0(); }

  static inline data_expression rewr_261_0_term_arg_in_normal_form(const application&) { return rewr_261_0(); }


  // [260] ==: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_260_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(5), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(4)),static_cast<data_expression>(this_rewriter->bound_variable_get(4)))), true, sigma())); // R1 forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25caa90), arg0, arg1);
  }

  static inline data_expression rewr_260_2_term(const application& t) { return rewr_260_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_260_2_term_arg_in_normal_form(const application& t) { return rewr_260_2(t[0], t[1]); }


  // [260] ==: (Nat # Nat -> Bool) # (Nat # Nat -> Bool) -> Bool
  static inline const data_expression& rewr_260_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605320);
  }

  static inline data_expression rewr_260_0_term(const application&) { return rewr_260_0(); }

  static inline data_expression rewr_260_0_term_arg_in_normal_form(const application&) { return rewr_260_0(); }


  // [254] !=: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_254_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_253_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25caf10), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_254_2_term(const application& t) { return rewr_254_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_254_2_term_arg_in_normal_form(const application& t) { return rewr_254_2(t[0], t[1]); }


  // [254] !=: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_254_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605440);
  }

  static inline data_expression rewr_254_0_term(const application&) { return rewr_254_0(); }

  static inline data_expression rewr_254_0_term_arg_in_normal_form(const application&) { return rewr_254_0(); }


  // [253] ==: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_253_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(6), rewr_18_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Bool, x0: Pos. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25caf40), arg0, arg1);
  }

  static inline data_expression rewr_253_2_term(const application& t) { return rewr_253_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_253_2_term_arg_in_normal_form(const application& t) { return rewr_253_2(t[0], t[1]); }


  // [253] ==: (Bool # Pos -> Pos) # (Bool # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_253_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605470);
  }

  static inline data_expression rewr_253_0_term(const application&) { return rewr_253_0(); }

  static inline data_expression rewr_253_0_term_arg_in_normal_form(const application&) { return rewr_253_0(); }


  // [247] !=: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_247_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_246_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cb360), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_247_2_term(const application& t) { return rewr_247_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_247_2_term_arg_in_normal_form(const application& t) { return rewr_247_2(t[0], t[1]); }


  // [247] !=: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_247_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25f7fe0);
  }

  static inline data_expression rewr_247_0_term(const application&) { return rewr_247_0(); }

  static inline data_expression rewr_247_0_term_arg_in_normal_form(const application&) { return rewr_247_0(); }


  // [246] ==: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_246_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: Nat. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(7), rewr_34_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4))))), true, sigma())); // R1 forall x0: Bool, x0,x0: Nat. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cb390), arg0, arg1);
  }

  static inline data_expression rewr_246_2_term(const application& t) { return rewr_246_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_246_2_term_arg_in_normal_form(const application& t) { return rewr_246_2(t[0], t[1]); }


  // [246] ==: (Bool # Nat # Nat -> Nat) # (Bool # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_246_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26050b0);
  }

  static inline data_expression rewr_246_0_term(const application&) { return rewr_246_0(); }

  static inline data_expression rewr_246_0_term_arg_in_normal_form(const application&) { return rewr_246_0(); }


  // [240] !=: (Int -> Nat) # (Int -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_240_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_239_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cb7b0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_240_2_term(const application& t) { return rewr_240_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_240_2_term_arg_in_normal_form(const application& t) { return rewr_240_2(t[0], t[1]); }


  // [240] !=: (Int -> Nat) # (Int -> Nat) -> Bool
  static inline const data_expression& rewr_240_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25ff1a0);
  }

  static inline data_expression rewr_240_0_term(const application&) { return rewr_240_0(); }

  static inline data_expression rewr_240_0_term_arg_in_normal_form(const application&) { return rewr_240_0(); }


  // [239] ==: (Int -> Nat) # (Int -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_239_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Int. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(8), rewr_34_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(5)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(5))))), true, sigma())); // R1 forall x0: Int. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cb7e0), arg0, arg1);
  }

  static inline data_expression rewr_239_2_term(const application& t) { return rewr_239_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_239_2_term_arg_in_normal_form(const application& t) { return rewr_239_2(t[0], t[1]); }


  // [239] ==: (Int -> Nat) # (Int -> Nat) -> Bool
  static inline const data_expression& rewr_239_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605650);
  }

  static inline data_expression rewr_239_0_term(const application&) { return rewr_239_0(); }

  static inline data_expression rewr_239_0_term_arg_in_normal_form(const application&) { return rewr_239_0(); }


  // [232] !=: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_232_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_231_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cbcf0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_232_2_term(const application& t) { return rewr_232_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_232_2_term_arg_in_normal_form(const application& t) { return rewr_232_2(t[0], t[1]); }


  // [232] !=: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  static inline const data_expression& rewr_232_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26056b0);
  }

  static inline data_expression rewr_232_0_term(const application&) { return rewr_232_0(); }

  static inline data_expression rewr_232_0_term_arg_in_normal_form(const application&) { return rewr_232_0(); }


  // [231] ==: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_231_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(5), rewr_206_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4))))), true, sigma())); // R1 forall x0,x0: Nat. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cbd20), arg0, arg1);
  }

  static inline data_expression rewr_231_2_term(const application& t) { return rewr_231_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_231_2_term_arg_in_normal_form(const application& t) { return rewr_231_2(t[0], t[1]); }


  // [231] ==: (Nat # Nat -> Int) # (Nat # Nat -> Int) -> Bool
  static inline const data_expression& rewr_231_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605350);
  }

  static inline data_expression rewr_231_0_term(const application&) { return rewr_231_0(); }

  static inline data_expression rewr_231_0_term_arg_in_normal_form(const application&) { return rewr_231_0(); }


  // [225] !=: (Pos -> Nat) # (Pos -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_225_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_224_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cc110), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_225_2_term(const application& t) { return rewr_225_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_225_2_term_arg_in_normal_form(const application& t) { return rewr_225_2(t[0], t[1]); }


  // [225] !=: (Pos -> Nat) # (Pos -> Nat) -> Bool
  static inline const data_expression& rewr_225_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26057f0);
  }

  static inline data_expression rewr_225_0_term(const application&) { return rewr_225_0(); }

  static inline data_expression rewr_225_0_term_arg_in_normal_form(const application&) { return rewr_225_0(); }


  // [224] ==: (Pos -> Nat) # (Pos -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_224_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Pos. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(9), rewr_34_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Pos. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cc140), arg0, arg1);
  }

  static inline data_expression rewr_224_2_term(const application& t) { return rewr_224_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_224_2_term_arg_in_normal_form(const application& t) { return rewr_224_2(t[0], t[1]); }


  // [224] ==: (Pos -> Nat) # (Pos -> Nat) -> Bool
  static inline const data_expression& rewr_224_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605820);
  }

  static inline data_expression rewr_224_0_term(const application&) { return rewr_224_0(); }

  static inline data_expression rewr_224_0_term_arg_in_normal_form(const application&) { return rewr_224_0(); }


  // [217] !=: (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) # (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_217_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_216_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cc650), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_217_2_term(const application& t) { return rewr_217_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_217_2_term_arg_in_normal_form(const application& t) { return rewr_217_2(t[0], t[1]); }


  // [217] !=: (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) # (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) -> Bool
  static inline const data_expression& rewr_217_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2600bd0);
  }

  static inline data_expression rewr_217_0_term(const application&) { return rewr_217_0(); }

  static inline data_expression rewr_217_0_term_arg_in_normal_form(const application&) { return rewr_217_0(); }


  // [216] ==: (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) # (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_216_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool, x0,x0: ChuckStatus. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(10), rewr_20_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(3)), static_cast<data_expression>(this_rewriter->bound_variable_get(3))))), true, sigma())); // R1 forall x0: Bool, x0,x0: ChuckStatus. @var_0(x0, x0, x0) == @var_1(x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25cc680), arg0, arg1);
  }

  static inline data_expression rewr_216_2_term(const application& t) { return rewr_216_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_216_2_term_arg_in_normal_form(const application& t) { return rewr_216_2(t[0], t[1]); }


  // [216] ==: (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) # (Bool # ChuckStatus # ChuckStatus -> ChuckStatus) -> Bool
  static inline const data_expression& rewr_216_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605940);
  }

  static inline data_expression rewr_216_0_term(const application&) { return rewr_216_0(); }

  static inline data_expression rewr_216_0_term_arg_in_normal_form(const application&) { return rewr_216_0(); }


  // [17] if: Bool # Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_17_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257ac60), arg0, arg1, arg2);
  }

  static inline data_expression rewr_17_3_term(const application& t) { return rewr_17_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_17_3_term_arg_in_normal_form(const application& t) { return rewr_17_3(t[0], t[1], t[2]); }


  // [17] if: Bool # Bool # Bool -> Bool
  static inline const data_expression& rewr_17_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2604d60);
  }

  static inline data_expression rewr_17_0_term(const application&) { return rewr_17_0(); }

  static inline data_expression rewr_17_0_term_arg_in_normal_form(const application&) { return rewr_17_0(); }


  // [75] !=: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_75_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_65_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25afa80), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_75_2_term(const application& t) { return rewr_75_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_75_2_term_arg_in_normal_form(const application& t) { return rewr_75_2(t[0], t[1]); }


  // [75] !=: Bool # Bool -> Bool
  static inline const data_expression& rewr_75_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605680);
  }

  static inline data_expression rewr_75_0_term(const application&) { return rewr_75_0(); }

  static inline data_expression rewr_75_0_term_arg_in_normal_form(const application&) { return rewr_75_0(); }


  // [65] ==: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_65_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(!@var_0)))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6c0) // F1
        {
          const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
          return rewr_8_1(var_0); // R1 !@var_0
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
        if (uint_address(arg1) == 0x5590c257a6c0) // F1
        {
          return rewr_8_1(var_0); // R1 !@var_0
        }
        else
        {
          if (uint_address(arg1) == 0x5590c257c4c0) // F1
          {
            return var_0; // R1 @var_0
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25b01d0), arg0, arg1);
  }

  static inline data_expression rewr_65_2_term(const application& t) { return rewr_65_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_65_2_term_arg_in_normal_form(const application& t) { return rewr_65_2(t[0], t[1]); }


  // [65] ==: Bool # Bool -> Bool
  static inline const data_expression& rewr_65_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605910);
  }

  static inline data_expression rewr_65_0_term(const application&) { return rewr_65_0(); }

  static inline data_expression rewr_65_0_term_arg_in_normal_form(const application&) { return rewr_65_0(); }


  // [40] =>: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_40_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(true)))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
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
      if (uint_address(arg1) == 0x5590c257a6c0) // F1
      {
        return rewr_8_1(var_0); // R1 !@var_0
      }
      else
      {
        if (uint_address(arg1) == 0x5590c257c4c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257d480), arg0, arg1);
  }

  static inline data_expression rewr_40_2_term(const application& t) { return rewr_40_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_40_2_term_arg_in_normal_form(const application& t) { return rewr_40_2(t[0], t[1]); }


  // [40] =>: Bool # Bool -> Bool
  static inline const data_expression& rewr_40_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fffa0);
  }

  static inline data_expression rewr_40_0_term(const application&) { return rewr_40_0(); }

  static inline data_expression rewr_40_0_term_arg_in_normal_form(const application&) { return rewr_40_0(); }


  // [177] ||: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_177_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(true)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6c0) // F1
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
      if (uint_address(arg1) == 0x5590c257a6c0) // F1
      {
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg1) == 0x5590c257c4c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c6630), arg0, arg1);
  }

  static inline data_expression rewr_177_2_term(const application& t) { return rewr_177_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_177_2_term_arg_in_normal_form(const application& t) { return rewr_177_2(t[0], t[1]); }


  // [177] ||: Bool # Bool -> Bool
  static inline const data_expression& rewr_177_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2604f50);
  }

  static inline data_expression rewr_177_0_term(const application&) { return rewr_177_0(); }

  static inline data_expression rewr_177_0_term_arg_in_normal_form(const application&) { return rewr_177_0(); }


  // [9] &&: Bool # Bool -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_9_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@R(@var_0)))), @@F(false, @@D(@@N(@@S(@var_0, @@R(false)))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6c0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
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
      if (uint_address(arg1) == 0x5590c257a6c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
      }
      else
      {
        if (uint_address(arg1) == 0x5590c257c4c0) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257aed0), arg0, arg1);
  }

  static inline data_expression rewr_9_2_term(const application& t) { return rewr_9_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_9_2_term_arg_in_normal_form(const application& t) { return rewr_9_2(t[0], t[1]); }


  // [9] &&: Bool # Bool -> Bool
  static inline const data_expression& rewr_9_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2604cf0);
  }

  static inline data_expression rewr_9_0_term(const application&) { return rewr_9_0(); }

  static inline data_expression rewr_9_0_term_arg_in_normal_form(const application&) { return rewr_9_0(); }


  // [8] !: Bool -> Bool
  template < class DATA_EXPR0>
  static inline data_expression rewr_8_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@R(false), @@F(!, @@S(@var_0, @@R(@var_0)), @@F(false, @@R(true), @@X)))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257af00) // F1
        {
          const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
          return var_0; // R1 @var_0
        }
        else
        {
          if (uint_address(arg0) == 0x5590c257a6c0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257af00), arg0);
  }

  static inline data_expression rewr_8_1_term(const application& t) { return rewr_8_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_8_1_term_arg_in_normal_form(const application& t) { return rewr_8_1(t[0]); }


  // [8] !: Bool -> Bool
  static inline const data_expression& rewr_8_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605530);
  }

  static inline data_expression rewr_8_0_term(const application&) { return rewr_8_0(); }

  static inline data_expression rewr_8_0_term_arg_in_normal_form(const application&) { return rewr_8_0(); }


  // [210] !=: Int # Int -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_210_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_206_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c4f20), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_210_2_term(const application& t) { return rewr_210_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_210_2_term_arg_in_normal_form(const application& t) { return rewr_210_2(t[0], t[1]); }


  // [210] !=: Int # Int -> Bool
  static inline const data_expression& rewr_210_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605620);
  }

  static inline data_expression rewr_210_0_term(const application&) { return rewr_210_0(); }

  static inline data_expression rewr_210_0_term_arg_in_normal_form(const application&) { return rewr_210_0(); }


  // [206] ==: Int # Int -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_206_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c25c6030) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c25c6030) // F1
          {
            const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
            return rewr_34_2(var_1, var_2); // R1 @var_1 == @var_2
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c25c6000) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
            }
            else
            {
            }
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c25c6000) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c25c6000) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_18_2(var_1, var_2); // R1 @var_1 == @var_2
            }
            else
            {
              if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c25c6030) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
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
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c5ac0), arg0, arg1);
  }

  static inline data_expression rewr_206_2_term(const application& t) { return rewr_206_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_206_2_term_arg_in_normal_form(const application& t) { return rewr_206_2(t[0], t[1]); }


  // [206] ==: Int # Int -> Bool
  static inline const data_expression& rewr_206_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26054a0);
  }

  static inline data_expression rewr_206_0_term(const application&) { return rewr_206_0(); }

  static inline data_expression rewr_206_0_term_arg_in_normal_form(const application&) { return rewr_206_0(); }


  // [28] -: Nat # Nat -> Int
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_28_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_175_2(var_1, var_0) == sort_bool::true_()) // C
      {
        return rewr_180_1(rewr_163_2(var_0, var_1)); // R1 @monus(@var_0, @var_1)
      }
      else
      {
        if (rewr_22_2(var_0, var_1) == sort_bool::true_()) // C
        {
          return rewr_193_1(rewr_163_2(var_1, var_0)); // R1 -@monus(@var_1, @var_0)
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257a7b0), arg0, arg1);
  }

  static inline data_expression rewr_28_2_term(const application& t) { return rewr_28_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_28_2_term_arg_in_normal_form(const application& t) { return rewr_28_2(t[0], t[1]); }


  // [28] -: Nat # Nat -> Int
  static inline const data_expression& rewr_28_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25feb30);
  }

  static inline data_expression rewr_28_0_term(const application&) { return rewr_28_0(); }

  static inline data_expression rewr_28_0_term_arg_in_normal_form(const application&) { return rewr_28_0(); }


  // [193] -: Nat -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_193_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@R(0), @@F(@cNat, @@S(@var_0, @@R(-@var_0)), @@X))
    {
      if (uint_address(arg0) == 0x5590c257aae0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c26057c0); // R1 0
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a780) // F1
        {
          const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
          return rewr_181_1(var_0); // R1 -@var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c5dc0), arg0);
  }

  static inline data_expression rewr_193_1_term(const application& t) { return rewr_193_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_193_1_term_arg_in_normal_form(const application& t) { return rewr_193_1(t[0]); }


  // [193] -: Nat -> Int
  static inline const data_expression& rewr_193_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605bd0);
  }

  static inline data_expression rewr_193_0_term(const application&) { return rewr_193_0(); }

  static inline data_expression rewr_193_0_term_arg_in_normal_form(const application&) { return rewr_193_0(); }


  // [27] Int2Nat: Int -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_27_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(@cInt, @@S(@var_0, @@R(@var_0)), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c25c6030) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257a7e0), arg0);
  }

  static inline data_expression rewr_27_1_term(const application& t) { return rewr_27_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_27_1_term_arg_in_normal_form(const application& t) { return rewr_27_1(t[0]); }


  // [27] Int2Nat: Int -> Nat
  static inline const data_expression& rewr_27_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fe9f0);
  }

  static inline data_expression rewr_27_0_term(const application&) { return rewr_27_0(); }

  static inline data_expression rewr_27_0_term_arg_in_normal_form(const application&) { return rewr_27_0(); }


  // [175] <=: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_175_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@D(@@N(@@S(@var_0, @@R(true)))), @@X)
    {
      if (uint_address(arg0) == 0x5590c257aae0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a780) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
          if (uint_address(arg1) == 0x5590c257aae0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a780) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_39_2(var_1, var_2); // R1 @var_1 <= @var_2
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
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25b08c0), arg0, arg1);
  }

  static inline data_expression rewr_175_2_term(const application& t) { return rewr_175_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_175_2_term_arg_in_normal_form(const application& t) { return rewr_175_2(t[0], t[1]); }


  // [175] <=: Nat # Nat -> Bool
  static inline const data_expression& rewr_175_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606390);
  }

  static inline data_expression rewr_175_0_term(const application&) { return rewr_175_0(); }

  static inline data_expression rewr_175_0_term_arg_in_normal_form(const application&) { return rewr_175_0(); }


  // [22] <: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_22_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@N(@@F(0, @@R(false), @@X))
    {
      if (uint_address(arg1) == 0x5590c257aae0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
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
      if (uint_address(arg0) == 0x5590c257aae0) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a780) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a780) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a780) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_38_2(var_1, var_2); // R1 @var_1 < @var_2
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
            return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257ab10), arg0, arg1);
  }

  static inline data_expression rewr_22_2_term(const application& t) { return rewr_22_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_22_2_term_arg_in_normal_form(const application& t) { return rewr_22_2(t[0], t[1]); }


  // [22] <: Nat # Nat -> Bool
  static inline const data_expression& rewr_22_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605da0);
  }

  static inline data_expression rewr_22_0_term(const application&) { return rewr_22_0(); }

  static inline data_expression rewr_22_0_term_arg_in_normal_form(const application&) { return rewr_22_0(); }


  // [26] if: Bool # Nat # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_26_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257a810), arg0, arg1, arg2);
  }

  static inline data_expression rewr_26_3_term(const application& t) { return rewr_26_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_26_3_term_arg_in_normal_form(const application& t) { return rewr_26_3(t[0], t[1], t[2]); }


  // [26] if: Bool # Nat # Nat -> Nat
  static inline const data_expression& rewr_26_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26061f0);
  }

  static inline data_expression rewr_26_0_term(const application&) { return rewr_26_0(); }

  static inline data_expression rewr_26_0_term_arg_in_normal_form(const application&) { return rewr_26_0(); }


  // [178] !=: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_178_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_34_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c62a0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_178_2_term(const application& t) { return rewr_178_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_178_2_term_arg_in_normal_form(const application& t) { return rewr_178_2(t[0], t[1]); }


  // [178] !=: Nat # Nat -> Bool
  static inline const data_expression& rewr_178_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26063c0);
  }

  static inline data_expression rewr_178_0_term(const application&) { return rewr_178_0(); }

  static inline data_expression rewr_178_0_term_arg_in_normal_form(const application&) { return rewr_178_0(); }


  // [34] ==: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_34_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (uint_address(arg0) == 0x5590c257aae0) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a780) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a780) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a780) // F1
            {
              const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
              return rewr_18_2(var_1, var_2); // R1 @var_1 == @var_2
            }
            else
            {
              if (uint_address(arg1) == 0x5590c257aae0) // F1
              {
                return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
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
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257a0f0), arg0, arg1);
  }

  static inline data_expression rewr_34_2_term(const application& t) { return rewr_34_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_34_2_term_arg_in_normal_form(const application& t) { return rewr_34_2(t[0], t[1]); }


  // [34] ==: Nat # Nat -> Bool
  static inline const data_expression& rewr_34_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605a90);
  }

  static inline data_expression rewr_34_0_term(const application&) { return rewr_34_0(); }

  static inline data_expression rewr_34_0_term_arg_in_normal_form(const application&) { return rewr_34_0(); }


  // [163] @monus: Nat # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_163_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(0, @@D(@@N(@@S(@var_0, @@R(0)))), @@X)
    {
      if (uint_address(arg0) == 0x5590c257aae0) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c2605ac0); // R1 0
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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a780) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        if (uint_address(arg1) == 0x5590c257aae0) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a780) // F1
          {
            const data_expression& var_2 = down_cast<data_expression>(arg1[1]); // S2
            return rewr_156_3(*reinterpret_cast<const data_expression*>(0x5590c25feb00), var_1, var_2); // R1 @gtesubtb(false, @var_1, @var_2)
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address(arg1) == 0x5590c257aae0) // F1
        {
          return var_0; // R1 @var_0
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c640), arg0, arg1);
  }

  static inline data_expression rewr_163_2_term(const application& t) { return rewr_163_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_163_2_term_arg_in_normal_form(const application& t) { return rewr_163_2(t[0], t[1]); }


  // [163] @monus: Nat # Nat -> Nat
  static inline const data_expression& rewr_163_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606220);
  }

  static inline data_expression rewr_163_0_term(const application&) { return rewr_163_0(); }

  static inline data_expression rewr_163_0_term_arg_in_normal_form(const application&) { return rewr_163_0(); }


  // [156] @gtesubtb: Bool # Pos # Pos -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_156_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(2)
    const data_expression arg2 = local_rewrite(arg_not_nf2);
    // Considering argument 2
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(false, @@D(@@N(@@S(@var_0, @@N(@@F(1, @@R(pred(@var_0)), @@X))))), @@F(true, @@D(@@N(@@S(@var_0, @@N(@@F(1, @@R(pred(Nat2Pos(pred(@var_0)))), @@X))))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257a6c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        if (uint_address(arg2) == 0x5590c257ac00) // F1
        {
          return rewr_53_1(var_0); // R1 pred(@var_0)
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257c4c0) // F1
        {
          const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
          if (uint_address(arg2) == 0x5590c257ac00) // F1
          {
            return rewr_53_1(rewr_47_1(rewr_53_1(var_0))); // R1 pred(Nat2Pos(pred(@var_0)))
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
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a870) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        if (uint_address(arg1[1]) == 0x5590c257c4c0) // F2a true
        {
          const data_expression& t1 = down_cast<data_expression>(arg1[1]);
          const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
          if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x5590c257a870) // F1
          {
            if (var_1 == arg2[1]) // M
            {
              if (uint_address(arg2[1]) == 0x5590c257a6c0) // F2a false
              {
                const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_54_2(delayed_rewr_8_1<data_expression>(var_0), rewr_156_3(*reinterpret_cast<const data_expression*>(0x5590c25feb00), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(false, @var_2, @var_3))
              }
              else
              {
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_54_2(var_0, rewr_156_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
              }
            }
            else
            {
              if (uint_address(arg2[1]) == 0x5590c257a6c0) // F2a false
              {
                const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_54_2(delayed_rewr_8_1<data_expression>(var_0), rewr_156_3(*reinterpret_cast<const data_expression*>(0x5590c25feb00), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(false, @var_2, @var_3))
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
          if (uint_address(arg1[1]) == 0x5590c257a6c0) // F2a false
          {
            const data_expression& t1 = down_cast<data_expression>(arg1[1]);
            const data_expression& var_2 = down_cast<data_expression>(arg1[2]); // S2
            if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x5590c257a870) // F1
            {
              if (var_1 == arg2[1]) // M
              {
                if (uint_address(arg2[1]) == 0x5590c257c4c0) // F2a true
                {
                  const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_54_2(delayed_rewr_8_1<data_expression>(var_0), rewr_156_3(*reinterpret_cast<const data_expression*>(0x5590c2600380), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(true, @var_2, @var_3))
                }
                else
                {
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_54_2(var_0, rewr_156_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
                }
              }
              else
              {
                if (uint_address(arg2[1]) == 0x5590c257c4c0) // F2a true
                {
                  const data_expression& t3 = down_cast<data_expression>(arg2[1]);
                  const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                  return rewr_54_2(delayed_rewr_8_1<data_expression>(var_0), rewr_156_3(*reinterpret_cast<const data_expression*>(0x5590c2600380), var_2, var_3)); // R1 @dub(!@var_0, @gtesubtb(true, @var_2, @var_3))
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
            if (uint_address((is_function_symbol(arg2) ? arg2 : arg2[0])) == 0x5590c257a870) // F1
            {
              if (var_1 == arg2[1]) // M
              {
                const data_expression& var_3 = down_cast<data_expression>(arg2[2]); // S2
                return rewr_54_2(var_0, rewr_156_3(var_0, var_2, var_3)); // R1 @dub(@var_0, @gtesubtb(@var_0, @var_2, @var_3))
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c790), arg0, arg1, arg2);
  }

  static inline data_expression rewr_156_3_term(const application& t) { return rewr_156_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_156_3_term_arg_in_normal_form(const application& t) { return rewr_156_3(t[0], t[1], t[2]); }


  // [8] !: Bool -> Bool
  template < class DATA_EXPR0>
  class delayed_rewr_8_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_8_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_8_1(m_t0);
      }
  };
  
  // [156] @gtesubtb: Bool # Pos # Pos -> Nat
  static inline const data_expression& rewr_156_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606280);
  }

  static inline data_expression rewr_156_0_term(const application&) { return rewr_156_0(); }

  static inline data_expression rewr_156_0_term_arg_in_normal_form(const application&) { return rewr_156_0(); }


  // [54] @dub: Bool # Nat -> Nat
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_54_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@N(@@F(@cNat, @@S(@var_1, @@R(2 * @var_1 + if(@var_0, 1, 0))), @@X)))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a780) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg1[1]); // S2
        return rewr_29_1(rewr_25_2(var_0, var_1)); // R1 2 * @var_1 + if(@var_0, 1, 0)
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
      if (uint_address(arg0) == 0x5590c257a6c0) // F1
      {
        if (uint_address(arg1) == 0x5590c257aae0) // F1
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2605ac0); // R1 0
        }
        else
        {
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257c4c0) // F1
        {
          if (uint_address(arg1) == 0x5590c257aae0) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c25fe380); // R1 1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c850), arg0, arg1);
  }

  static inline data_expression rewr_54_2_term(const application& t) { return rewr_54_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_54_2_term_arg_in_normal_form(const application& t) { return rewr_54_2(t[0], t[1]); }


  // [54] @dub: Bool # Nat -> Nat
  static inline const data_expression& rewr_54_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606250);
  }

  static inline data_expression rewr_54_0_term(const application&) { return rewr_54_0(); }

  static inline data_expression rewr_54_0_term_arg_in_normal_form(const application&) { return rewr_54_0(); }


  // [53] pred: Pos -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_53_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(1, @@R(0), @@F(@cDub, @@F(false, @@D(@@N(@@S(@var_0, @@R(@dub(true, pred(@var_0)))))), @@F(true, @@D(@@N(@@S(@var_0, @@R(2 * @var_0)))), @@D(@@X))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257ac00) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c2605ac0); // R1 0
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a870) // F1
        {
          if (uint_address(arg0[1]) == 0x5590c257a6c0) // F2a false
          {
            const data_expression& t1 = down_cast<data_expression>(arg0[1]);
            const data_expression& var_0 = down_cast<data_expression>(arg0[2]); // S2
            return rewr_54_2(*reinterpret_cast<const data_expression*>(0x5590c2600380), rewr_53_1(var_0)); // R1 @dub(true, pred(@var_0))
          }
          else
          {
            if (uint_address(arg0[1]) == 0x5590c257c4c0) // F2a true
            {
              const data_expression& t1 = down_cast<data_expression>(arg0[1]);
              const data_expression& var_0 = down_cast<data_expression>(arg0[2]); // S2
              return rewr_29_1(rewr_25_2(*reinterpret_cast<const data_expression*>(0x5590c25feb00), var_0)); // R1 2 * @var_0
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c880), arg0);
  }

  static inline data_expression rewr_53_1_term(const application& t) { return rewr_53_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_53_1_term_arg_in_normal_form(const application& t) { return rewr_53_1(t[0]); }


  // [53] pred: Pos -> Nat
  static inline const data_expression& rewr_53_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606530);
  }

  static inline data_expression rewr_53_0_term(const application&) { return rewr_53_0(); }

  static inline data_expression rewr_53_0_term_arg_in_normal_form(const application&) { return rewr_53_0(); }


  // [47] Nat2Pos: Nat -> Pos
  template < class DATA_EXPR0>
  static inline data_expression rewr_47_1(const DATA_EXPR0& arg_not_nf0)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(@cNat, @@S(@var_0, @@R(@var_0)), @@X)
    {
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a780) // F1
      {
        const data_expression& var_0 = down_cast<data_expression>(arg0[1]); // S2
        return var_0; // R1 @var_0
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257c9a0), arg0);
  }

  static inline data_expression rewr_47_1_term(const application& t) { return rewr_47_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_47_1_term_arg_in_normal_form(const application& t) { return rewr_47_1(t[0]); }


  // [47] Nat2Pos: Nat -> Pos
  static inline const data_expression& rewr_47_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606560);
  }

  static inline data_expression rewr_47_0_term(const application&) { return rewr_47_0(); }

  static inline data_expression rewr_47_0_term_arg_in_normal_form(const application&) { return rewr_47_0(); }


  // [39] <=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_39_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(1, @@D(@@N(@@S(@var_0, @@R(true)))), @@X)
    {
      if (uint_address(arg0) == 0x5590c257ac00) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a870) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a870) // F1
          {
            const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
            const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
            return rewr_17_3(rewr_40_2(var_1, var_3), delayed_rewr_39_2<data_expression, data_expression>(var_2, var_4), delayed_rewr_38_2<data_expression, data_expression>(var_2, var_4)); // R1 if(@var_1 => @var_3, @var_2 <= @var_4, @var_2 < @var_4)
          }
          else
          {
            if (uint_address(arg1) == 0x5590c257ac00) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
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
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257d510), arg0, arg1);
  }

  static inline data_expression rewr_39_2_term(const application& t) { return rewr_39_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_39_2_term_arg_in_normal_form(const application& t) { return rewr_39_2(t[0], t[1]); }


  // [38] <: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_38_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_38_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_38_2(m_t0, m_t1);
      }
  };
  
  // [39] <=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_39_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_39_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_39_2(m_t0, m_t1);
      }
  };
  
  // [39] <=: Pos # Pos -> Bool
  static inline const data_expression& rewr_39_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606470);
  }

  static inline data_expression rewr_39_0_term(const application&) { return rewr_39_0(); }

  static inline data_expression rewr_39_0_term_arg_in_normal_form(const application&) { return rewr_39_0(); }


  // [38] <: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_38_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@N(@@F(1, @@R(false), @@X))
    {
      if (uint_address(arg1) == 0x5590c257ac00) // F1
      {
        return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
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
      if (uint_address(arg0) == 0x5590c257ac00) // F1
      {
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a870) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
      else
      {
        if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a870) // F1
        {
          const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
          const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a870) // F1
            {
              const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
              const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
              return rewr_17_3(rewr_40_2(var_3, var_1), delayed_rewr_38_2<data_expression, data_expression>(var_2, var_4), delayed_rewr_39_2<data_expression, data_expression>(var_2, var_4)); // R1 if(@var_3 => @var_1, @var_2 < @var_4, @var_2 <= @var_4)
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
            return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257d5a0), arg0, arg1);
  }

  static inline data_expression rewr_38_2_term(const application& t) { return rewr_38_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_38_2_term_arg_in_normal_form(const application& t) { return rewr_38_2(t[0], t[1]); }


  // [38] <: Pos # Pos -> Bool
  static inline const data_expression& rewr_38_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fdc60);
  }

  static inline data_expression rewr_38_0_term(const application&) { return rewr_38_0(); }

  static inline data_expression rewr_38_0_term_arg_in_normal_form(const application&) { return rewr_38_0(); }


  // [42] !=: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_42_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_18_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257cca0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_42_2_term(const application& t) { return rewr_42_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_42_2_term_arg_in_normal_form(const application& t) { return rewr_42_2(t[0], t[1]); }


  // [42] !=: Pos # Pos -> Bool
  static inline const data_expression& rewr_42_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fdc30);
  }

  static inline data_expression rewr_42_0_term(const application&) { return rewr_42_0(); }

  static inline data_expression rewr_42_0_term_arg_in_normal_form(const application&) { return rewr_42_0(); }


  // [18] ==: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_18_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@A(1)
    const data_expression arg1 = local_rewrite(arg_not_nf1);
    // Considering argument 1
    // @@S(@var_0, @@F(@cDub, @@S(@var_1, @@N(@@S(@var_2, @@D(@@N(@@M(@var_0, @@R(true), @@F(1, @@R(false), @@F(@cDub, @@S(@var_3, @@N(@@S(@var_4, @@R(@var_1 == @var_3 && @var_2 == @var_4)))), @@X)))))))), @@F(1, @@D(@@N(@@M(@var_0, @@R(true), @@F(@cDub, @@N(@@R(false)), @@X)))), @@N(@@M(@var_0, @@R(true), @@X)))))
    {
      const data_expression& var_0 = arg0; // S1
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257a870) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
          if (uint_address(arg1) == 0x5590c257ac00) // F1
          {
            return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a870) // F1
            {
              const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
              const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
              return rewr_9_2(rewr_65_2(var_1, var_3), delayed_rewr_18_2<data_expression, data_expression>(var_2, var_4)); // R1 @var_1 == @var_3 && @var_2 == @var_4
            }
            else
            {
            }
          }
        }
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257ac00) // F1
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
            if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257a870) // F1
            {
              return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
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
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257ac30), arg0, arg1);
  }

  static inline data_expression rewr_18_2_term(const application& t) { return rewr_18_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_18_2_term_arg_in_normal_form(const application& t) { return rewr_18_2(t[0], t[1]); }


  // [18] ==: Pos # Pos -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_18_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_18_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_18_2(m_t0, m_t1);
      }
  };
  
  // [18] ==: Pos # Pos -> Bool
  static inline const data_expression& rewr_18_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25a0440);
  }

  static inline data_expression rewr_18_0_term(const application&) { return rewr_18_0(); }

  static inline data_expression rewr_18_0_term_arg_in_normal_form(const application&) { return rewr_18_0(); }


  // [13] if: Bool # Position # Position -> Position
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_13_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257ade0), arg0, arg1, arg2);
  }

  static inline data_expression rewr_13_3_term(const application& t) { return rewr_13_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_13_3_term_arg_in_normal_form(const application& t) { return rewr_13_3(t[0], t[1], t[2]); }


  // [13] if: Bool # Position # Position -> Position
  static inline const data_expression& rewr_13_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25ff820);
  }

  static inline data_expression rewr_13_0_term(const application&) { return rewr_13_0(); }

  static inline data_expression rewr_13_0_term_arg_in_normal_form(const application&) { return rewr_13_0(); }


  // [143] !=: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_143_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_12_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c7b90), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_143_2_term(const application& t) { return rewr_143_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_143_2_term_arg_in_normal_form(const application& t) { return rewr_143_2(t[0], t[1]); }


  // [143] !=: Position # Position -> Bool
  static inline const data_expression& rewr_143_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25a0310);
  }

  static inline data_expression rewr_143_0_term(const application&) { return rewr_143_0(); }

  static inline data_expression rewr_143_0_term_arg_in_normal_form(const application&) { return rewr_143_0(); }


  // [12] ==: Position # Position -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_12_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_18_2(rewr_317_1(var_0), rewr_317_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_318_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_42_2(delayed_rewr_317_1<data_expression>(var_0), delayed_rewr_317_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257ae10), arg0, arg1);
  }

  static inline data_expression rewr_12_2_term(const application& t) { return rewr_12_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_12_2_term_arg_in_normal_form(const application& t) { return rewr_12_2(t[0], t[1]); }


  // [317] @to_pos: Position -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_317_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_317_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_317_1(m_t0);
      }
  };
  
  // [12] ==: Position # Position -> Bool
  static inline const data_expression& rewr_12_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fe350);
  }

  static inline data_expression rewr_12_0_term(const application&) { return rewr_12_0(); }

  static inline data_expression rewr_12_0_term_arg_in_normal_form(const application&) { return rewr_12_0(); }


  // [137] !=: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_137_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_104_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c7ec0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_137_2_term(const application& t) { return rewr_137_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_137_2_term_arg_in_normal_form(const application& t) { return rewr_137_2(t[0], t[1]); }


  // [137] !=: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_137_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25f8010);
  }

  static inline data_expression rewr_137_0_term(const application&) { return rewr_137_0(); }

  static inline data_expression rewr_137_0_term_arg_in_normal_form(const application&) { return rewr_137_0(); }


  // [104] ==: Recipe # Recipe -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_104_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_18_2(rewr_335_1(var_0), rewr_335_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_336_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_42_2(delayed_rewr_335_1<data_expression>(var_0), delayed_rewr_335_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25ae910), arg0, arg1);
  }

  static inline data_expression rewr_104_2_term(const application& t) { return rewr_104_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_104_2_term_arg_in_normal_form(const application& t) { return rewr_104_2(t[0], t[1]); }


  // [335] @to_pos: Recipe -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_335_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_335_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_335_1(m_t0);
      }
  };
  
  // [104] ==: Recipe # Recipe -> Bool
  static inline const data_expression& rewr_104_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fd300);
  }

  static inline data_expression rewr_104_0_term(const application&) { return rewr_104_0(); }

  static inline data_expression rewr_104_0_term_arg_in_normal_form(const application&) { return rewr_104_0(); }


  // [131] !=: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_131_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_10_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c81f0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_131_2_term(const application& t) { return rewr_131_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_131_2_term_arg_in_normal_form(const application& t) { return rewr_131_2(t[0], t[1]); }


  // [131] !=: Robot # Robot -> Bool
  static inline const data_expression& rewr_131_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605c00);
  }

  static inline data_expression rewr_131_0_term(const application&) { return rewr_131_0(); }

  static inline data_expression rewr_131_0_term_arg_in_normal_form(const application&) { return rewr_131_0(); }


  // [10] ==: Robot # Robot -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_10_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_18_2(rewr_355_1(var_0), rewr_355_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_356_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_42_2(delayed_rewr_355_1<data_expression>(var_0), delayed_rewr_355_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257aea0), arg0, arg1);
  }

  static inline data_expression rewr_10_2_term(const application& t) { return rewr_10_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_10_2_term_arg_in_normal_form(const application& t) { return rewr_10_2(t[0], t[1]); }


  // [355] @to_pos: Robot -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_355_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_355_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_355_1(m_t0);
      }
  };
  
  // [10] ==: Robot # Robot -> Bool
  static inline const data_expression& rewr_10_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fd4d0);
  }

  static inline data_expression rewr_10_0_term(const application&) { return rewr_10_0(); }

  static inline data_expression rewr_10_0_term_arg_in_normal_form(const application&) { return rewr_10_0(); }


  // [30] if: Bool # ChuckStatus # ChuckStatus -> ChuckStatus
  template < class DATA_EXPR0, class DATA_EXPR1, class DATA_EXPR2>
  static inline data_expression rewr_30_3(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1, const DATA_EXPR2& arg_not_nf2)

  {
    // @@A(0)
    const data_expression arg0 = local_rewrite(arg_not_nf0);
    // Considering argument 0
    // @@F(true, @@D(@@N(@@S(@var_0, @@N(@@R(@var_0))))), @@F(false, @@D(@@N(@@N(@@S(@var_1, @@R(@var_1))))), @@X))
    {
      if (uint_address(arg0) == 0x5590c257c4c0) // F1
      {
        const data_expression& var_0 = local_rewrite(arg_not_nf1); // S1
        return var_0; // R1 @var_0
      }
      else
      {
        if (uint_address(arg0) == 0x5590c257a6c0) // F1
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
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257a720), arg0, arg1, arg2);
  }

  static inline data_expression rewr_30_3_term(const application& t) { return rewr_30_3(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1]), term_not_in_normal_form(t[2])); }

  static inline data_expression rewr_30_3_term_arg_in_normal_form(const application& t) { return rewr_30_3(t[0], t[1], t[2]); }


  // [30] if: Bool # ChuckStatus # ChuckStatus -> ChuckStatus
  static inline const data_expression& rewr_30_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fe300);
  }

  static inline data_expression rewr_30_0_term(const application&) { return rewr_30_0(); }

  static inline data_expression rewr_30_0_term_arg_in_normal_form(const application&) { return rewr_30_0(); }


  // [126] !=: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_126_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_20_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c84f0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_126_2_term(const application& t) { return rewr_126_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_126_2_term_arg_in_normal_form(const application& t) { return rewr_126_2(t[0], t[1]); }


  // [126] !=: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_126_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606910);
  }

  static inline data_expression rewr_126_0_term(const application&) { return rewr_126_0(); }

  static inline data_expression rewr_126_0_term_arg_in_normal_form(const application&) { return rewr_126_0(); }


  // [20] ==: ChuckStatus # ChuckStatus -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_20_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_18_2(rewr_325_1(var_0), rewr_325_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_326_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_42_2(delayed_rewr_325_1<data_expression>(var_0), delayed_rewr_325_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257aba0), arg0, arg1);
  }

  static inline data_expression rewr_20_2_term(const application& t) { return rewr_20_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_20_2_term_arg_in_normal_form(const application& t) { return rewr_20_2(t[0], t[1]); }


  // [325] @to_pos: ChuckStatus -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_325_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_325_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_325_1(m_t0);
      }
  };
  
  // [20] ==: ChuckStatus # ChuckStatus -> Bool
  static inline const data_expression& rewr_20_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606940);
  }

  static inline data_expression rewr_20_0_term(const application&) { return rewr_20_0(); }

  static inline data_expression rewr_20_0_term_arg_in_normal_form(const application&) { return rewr_20_0(); }


  // [120] !=: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_120_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_119_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c8820), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_120_2_term(const application& t) { return rewr_120_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_120_2_term_arg_in_normal_form(const application& t) { return rewr_120_2(t[0], t[1]); }


  // [120] !=: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_120_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26068e0);
  }

  static inline data_expression rewr_120_0_term(const application&) { return rewr_120_0(); }

  static inline data_expression rewr_120_0_term_arg_in_normal_form(const application&) { return rewr_120_0(); }


  // [119] ==: Enum3 # Enum3 -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_119_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (rewr_18_2(rewr_360_1(var_0), rewr_360_1(var_1)) == sort_bool::true_()) // C
      {
        return rewr_361_2(var_0, var_1); // R1 @equal_arguments(@var_0, @var_1)
      }
      else
      {
        if (rewr_42_2(delayed_rewr_360_1<data_expression>(var_0), delayed_rewr_360_1<data_expression>(var_1)) == sort_bool::true_()) // C
        {
          return *reinterpret_cast<const data_expression*>(0x5590c25feb00); // R1 false
        }
        else
        {
          if (var_0 == arg1) // M
          {
            return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
          }
          else
          {
          }
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c8850), arg0, arg1);
  }

  static inline data_expression rewr_119_2_term(const application& t) { return rewr_119_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_119_2_term_arg_in_normal_form(const application& t) { return rewr_119_2(t[0], t[1]); }


  // [360] @to_pos: Enum3 -> Pos
  template < class DATA_EXPR0>
  class delayed_rewr_360_1
  {
    protected:
      const DATA_EXPR0& m_t0;
    public:
      delayed_rewr_360_1(const DATA_EXPR0& t0)
        : m_t0(t0)
      {}

      data_expression normal_form() const
      {
        return rewr_360_1(m_t0);
      }
  };
  
  // [119] ==: Enum3 # Enum3 -> Bool
  static inline const data_expression& rewr_119_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606bb0);
  }

  static inline data_expression rewr_119_0_term(const application&) { return rewr_119_0(); }

  static inline data_expression rewr_119_0_term_arg_in_normal_form(const application&) { return rewr_119_0(); }


  // [113] !=: @NatPair # @NatPair -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_113_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_112_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c8b80), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_113_2_term(const application& t) { return rewr_113_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_113_2_term_arg_in_normal_form(const application& t) { return rewr_113_2(t[0], t[1]); }


  // [113] !=: @NatPair # @NatPair -> Bool
  static inline const data_expression& rewr_113_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fe2d0);
  }

  static inline data_expression rewr_113_0_term(const application&) { return rewr_113_0(); }

  static inline data_expression rewr_113_0_term_arg_in_normal_form(const application&) { return rewr_113_0(); }


  // [112] ==: @NatPair # @NatPair -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_112_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

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
      if (uint_address((is_function_symbol(arg0) ? arg0 : arg0[0])) == 0x5590c257ca00) // F1
      {
        const data_expression& var_1 = down_cast<data_expression>(arg0[1]); // S2
        const data_expression& var_2 = down_cast<data_expression>(arg0[2]); // S2
        if (var_0 == arg1) // M
        {
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
          if (uint_address((is_function_symbol(arg1) ? arg1 : arg1[0])) == 0x5590c257ca00) // F1
          {
            const data_expression& var_3 = down_cast<data_expression>(arg1[1]); // S2
            const data_expression& var_4 = down_cast<data_expression>(arg1[2]); // S2
            return rewr_9_2(rewr_34_2(var_1, var_3), delayed_rewr_34_2<data_expression, data_expression>(var_2, var_4)); // R1 @var_1 == @var_3 && @var_2 == @var_4
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
          return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
        }
        else
        {
        }
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c8bb0), arg0, arg1);
  }

  static inline data_expression rewr_112_2_term(const application& t) { return rewr_112_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_112_2_term_arg_in_normal_form(const application& t) { return rewr_112_2(t[0], t[1]); }


  // [34] ==: Nat # Nat -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  class delayed_rewr_34_2
  {
    protected:
      const DATA_EXPR0& m_t0;
      const DATA_EXPR1& m_t1;
    public:
      delayed_rewr_34_2(const DATA_EXPR0& t0, const DATA_EXPR1& t1)
        : m_t0(t0), m_t1(t1)
      {}

      data_expression normal_form() const
      {
        return rewr_34_2(m_t0, m_t1);
      }
  };
  
  // [112] ==: @NatPair # @NatPair -> Bool
  static inline const data_expression& rewr_112_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606e10);
  }

  static inline data_expression rewr_112_0_term(const application&) { return rewr_112_0(); }

  static inline data_expression rewr_112_0_term_arg_in_normal_form(const application&) { return rewr_112_0(); }


  // [106] !=: (Enum3 # Nat # Nat # Nat -> Nat) # (Enum3 # Nat # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_106_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_105_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25ae820), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_106_2_term(const application& t) { return rewr_106_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_106_2_term_arg_in_normal_form(const application& t) { return rewr_106_2(t[0], t[1]); }


  // [106] !=: (Enum3 # Nat # Nat # Nat -> Nat) # (Enum3 # Nat # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_106_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fd480);
  }

  static inline data_expression rewr_106_0_term(const application&) { return rewr_106_0(); }

  static inline data_expression rewr_106_0_term_arg_in_normal_form(const application&) { return rewr_106_0(); }


  // [105] ==: (Enum3 # Nat # Nat # Nat -> Nat) # (Enum3 # Nat # Nat # Nat -> Nat) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_105_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Nat. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(11), rewr_34_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4)), static_cast<data_expression>(this_rewriter->bound_variable_get(4))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Nat. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25ae850), arg0, arg1);
  }

  static inline data_expression rewr_105_2_term(const application& t) { return rewr_105_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_105_2_term_arg_in_normal_form(const application& t) { return rewr_105_2(t[0], t[1]); }


  // [105] ==: (Enum3 # Nat # Nat # Nat -> Nat) # (Enum3 # Nat # Nat # Nat -> Nat) -> Bool
  static inline const data_expression& rewr_105_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fcc80);
  }

  static inline data_expression rewr_105_0_term(const application&) { return rewr_105_0(); }

  static inline data_expression rewr_105_0_term_arg_in_normal_form(const application&) { return rewr_105_0(); }


  // [98] !=: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_98_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_97_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25aecd0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_98_2_term(const application& t) { return rewr_98_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_98_2_term_arg_in_normal_form(const application& t) { return rewr_98_2(t[0], t[1]); }


  // [98] !=: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_98_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fccb0);
  }

  static inline data_expression rewr_98_0_term(const application&) { return rewr_98_0(); }

  static inline data_expression rewr_98_0_term_arg_in_normal_form(const application&) { return rewr_98_0(); }


  // [97] ==: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_97_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(12), rewr_104_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7)), static_cast<data_expression>(this_rewriter->bound_variable_get(7))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Recipe. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25aed00), arg0, arg1);
  }

  static inline data_expression rewr_97_2_term(const application& t) { return rewr_97_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_97_2_term_arg_in_normal_form(const application& t) { return rewr_97_2(t[0], t[1]); }


  // [97] ==: (Enum3 # Recipe # Recipe # Recipe -> Recipe) # (Enum3 # Recipe # Recipe # Recipe -> Recipe) -> Bool
  static inline const data_expression& rewr_97_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26069b0);
  }

  static inline data_expression rewr_97_0_term(const application&) { return rewr_97_0(); }

  static inline data_expression rewr_97_0_term_arg_in_normal_form(const application&) { return rewr_97_0(); }


  // [91] !=: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_91_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_90_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25af120), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_91_2_term(const application& t) { return rewr_91_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_91_2_term_arg_in_normal_form(const application& t) { return rewr_91_2(t[0], t[1]); }


  // [91] !=: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_91_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606a10);
  }

  static inline data_expression rewr_91_0_term(const application&) { return rewr_91_0(); }

  static inline data_expression rewr_91_0_term_arg_in_normal_form(const application&) { return rewr_91_0(); }


  // [90] ==: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_90_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Bool. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(13), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), delayed_application4<data_expression,data_expression,data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(6)),static_cast<data_expression>(this_rewriter->bound_variable_get(1)),static_cast<data_expression>(this_rewriter->bound_variable_get(1)),static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Bool. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25af150), arg0, arg1);
  }

  static inline data_expression rewr_90_2_term(const application& t) { return rewr_90_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_90_2_term_arg_in_normal_form(const application& t) { return rewr_90_2(t[0], t[1]); }


  // [90] ==: (Enum3 # Bool # Bool # Bool -> Bool) # (Enum3 # Bool # Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_90_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fe220);
  }

  static inline data_expression rewr_90_0_term(const application&) { return rewr_90_0(); }

  static inline data_expression rewr_90_0_term_arg_in_normal_form(const application&) { return rewr_90_0(); }


  // [84] !=: (Enum3 # Pos # Pos # Pos -> Pos) # (Enum3 # Pos # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_84_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_83_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25af5d0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_84_2_term(const application& t) { return rewr_84_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_84_2_term_arg_in_normal_form(const application& t) { return rewr_84_2(t[0], t[1]); }


  // [84] !=: (Enum3 # Pos # Pos # Pos -> Pos) # (Enum3 # Pos # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_84_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fd400);
  }

  static inline data_expression rewr_84_0_term(const application&) { return rewr_84_0(); }

  static inline data_expression rewr_84_0_term_arg_in_normal_form(const application&) { return rewr_84_0(); }


  // [83] ==: (Enum3 # Pos # Pos # Pos -> Pos) # (Enum3 # Pos # Pos # Pos -> Pos) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_83_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Enum3, x0,x0,x0: Pos. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(14), rewr_18_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)))), rewrite_with_arguments_in_normal_form(application(var_1, static_cast<data_expression>(this_rewriter->bound_variable_get(6)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2)), static_cast<data_expression>(this_rewriter->bound_variable_get(2))))), true, sigma())); // R1 forall x0: Enum3, x0,x0,x0: Pos. @var_0(x0, x0, x0, x0) == @var_1(x0, x0, x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25af600), arg0, arg1);
  }

  static inline data_expression rewr_83_2_term(const application& t) { return rewr_83_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_83_2_term_arg_in_normal_form(const application& t) { return rewr_83_2(t[0], t[1]); }


  // [83] ==: (Enum3 # Pos # Pos # Pos -> Pos) # (Enum3 # Pos # Pos # Pos -> Pos) -> Bool
  static inline const data_expression& rewr_83_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607090);
  }

  static inline data_expression rewr_83_0_term(const application&) { return rewr_83_0(); }

  static inline data_expression rewr_83_0_term_arg_in_normal_form(const application&) { return rewr_83_0(); }


  // [77] !=: (Bool -> Bool) # (Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_77_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_76_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25af9f0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_77_2_term(const application& t) { return rewr_77_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_77_2_term_arg_in_normal_form(const application& t) { return rewr_77_2(t[0], t[1]); }


  // [77] !=: (Bool -> Bool) # (Bool -> Bool) -> Bool
  static inline const data_expression& rewr_77_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26070c0);
  }

  static inline data_expression rewr_77_0_term(const application&) { return rewr_77_0(); }

  static inline data_expression rewr_77_0_term_arg_in_normal_form(const application&) { return rewr_77_0(); }


  // [76] ==: (Bool -> Bool) # (Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_76_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0: Bool. @var_0(x0) == @var_1(x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(15), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), delayed_application1<data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), true, sigma())); // R1 forall x0: Bool. @var_0(x0) == @var_1(x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25afa20), arg0, arg1);
  }

  static inline data_expression rewr_76_2_term(const application& t) { return rewr_76_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_76_2_term_arg_in_normal_form(const application& t) { return rewr_76_2(t[0], t[1]); }


  // [76] ==: (Bool -> Bool) # (Bool -> Bool) -> Bool
  static inline const data_expression& rewr_76_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606ed0);
  }

  static inline data_expression rewr_76_0_term(const application&) { return rewr_76_0(); }

  static inline data_expression rewr_76_0_term_arg_in_normal_form(const application&) { return rewr_76_0(); }


  // [67] !=: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_67_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_66_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25b00e0), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_67_2_term(const application& t) { return rewr_67_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_67_2_term_arg_in_normal_form(const application& t) { return rewr_67_2(t[0], t[1]); }


  // [67] !=: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_67_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26069e0);
  }

  static inline data_expression rewr_67_0_term(const application&) { return rewr_67_0(); }

  static inline data_expression rewr_67_0_term_arg_in_normal_form(const application&) { return rewr_67_0(); }


  // [66] ==: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_66_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Bool. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(16), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(1)), static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(1)),static_cast<data_expression>(this_rewriter->bound_variable_get(1)))), true, sigma())); // R1 forall x0,x0: Bool. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25b0110), arg0, arg1);
  }

  static inline data_expression rewr_66_2_term(const application& t) { return rewr_66_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_66_2_term_arg_in_normal_form(const application& t) { return rewr_66_2(t[0], t[1]); }


  // [66] ==: (Bool # Bool -> Bool) # (Bool # Bool -> Bool) -> Bool
  static inline const data_expression& rewr_66_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607290);
  }

  static inline data_expression rewr_66_0_term(const application&) { return rewr_66_0(); }

  static inline data_expression rewr_66_0_term_arg_in_normal_form(const application&) { return rewr_66_0(); }


  // [59] !=: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_59_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(!(@var_0 == @var_1)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return rewr_8_1(rewr_58_2(var_0, var_1)); // R1 !(@var_0 == @var_1)
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25b0620), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_59_2_term(const application& t) { return rewr_59_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_59_2_term_arg_in_normal_form(const application& t) { return rewr_59_2(t[0], t[1]); }


  // [59] !=: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  static inline const data_expression& rewr_59_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606a40);
  }

  static inline data_expression rewr_59_0_term(const application&) { return rewr_59_0(); }

  static inline data_expression rewr_59_0_term_arg_in_normal_form(const application&) { return rewr_59_0(); }


  // [58] ==: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_58_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    // @@S(@var_0, @@N(@@S(@var_1, @@R(forall x0,x0: Robot. @var_0(x0, x0) == @var_1(x0, x0)))))
    {
      const data_expression& var_0 = local_rewrite(arg_not_nf0); // S1
      const data_expression& var_1 = local_rewrite(arg_not_nf1); // S1
      return static_cast<data_expression>(this_rewriter->universal_quantifier_enumeration(this_rewriter->binding_variable_list_get(17), rewr_65_2(rewrite_with_arguments_in_normal_form(application(var_0, static_cast<data_expression>(this_rewriter->bound_variable_get(8)), static_cast<data_expression>(this_rewriter->bound_variable_get(8)))), delayed_application2<data_expression,data_expression,data_expression>(var_1,static_cast<data_expression>(this_rewriter->bound_variable_get(8)),static_cast<data_expression>(this_rewriter->bound_variable_get(8)))), true, sigma())); // R1 forall x0,x0: Robot. @var_0(x0, x0) == @var_1(x0, x0)
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
        return *reinterpret_cast<const data_expression*>(0x5590c2600380); // R1 true
      }
      else
      {
      }
    }
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25b0650), arg0, arg1);
  }

  static inline data_expression rewr_58_2_term(const application& t) { return rewr_58_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_58_2_term_arg_in_normal_form(const application& t) { return rewr_58_2(t[0], t[1]); }


  // [58] ==: (Robot # Robot -> Bool) # (Robot # Robot -> Bool) -> Bool
  static inline const data_expression& rewr_58_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fd370);
  }

  static inline data_expression rewr_58_0_term(const application&) { return rewr_58_0(); }

  static inline data_expression rewr_58_0_term_arg_in_normal_form(const application&) { return rewr_58_0(); }


  // [7] e0_3: Enum3
  static inline const data_expression& rewr_7_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fc480);
  }

  static inline data_expression rewr_7_0_term(const application&) { return rewr_7_0(); }

  static inline data_expression rewr_7_0_term_arg_in_normal_form(const application&) { return rewr_7_0(); }


  // [6] e1_3: Enum3
  static inline const data_expression& rewr_6_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fcd90);
  }

  static inline data_expression rewr_6_0_term(const application&) { return rewr_6_0(); }

  static inline data_expression rewr_6_0_term_arg_in_normal_form(const application&) { return rewr_6_0(); }


  // [5] e2_3: Enum3
  static inline const data_expression& rewr_5_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607400);
  }

  static inline data_expression rewr_5_0_term(const application&) { return rewr_5_0(); }

  static inline data_expression rewr_5_0_term_arg_in_normal_form(const application&) { return rewr_5_0(); }


  // [31] Notifying: ChuckStatus
  static inline const data_expression& rewr_31_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607260);
  }

  static inline data_expression rewr_31_0_term(const application&) { return rewr_31_0(); }

  static inline data_expression rewr_31_0_term_arg_in_normal_form(const application&) { return rewr_31_0(); }


  // [33] Processed: ChuckStatus
  static inline const data_expression& rewr_33_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fc630);
  }

  static inline data_expression rewr_33_0_term(const application&) { return rewr_33_0(); }

  static inline data_expression rewr_33_0_term_arg_in_normal_form(const application&) { return rewr_33_0(); }


  // [21] Wafer: ChuckStatus
  static inline const data_expression& rewr_21_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fc600);
  }

  static inline data_expression rewr_21_0_term(const application&) { return rewr_21_0(); }

  static inline data_expression rewr_21_0_term_arg_in_normal_form(const application&) { return rewr_21_0(); }


  // [24] Empty: ChuckStatus
  static inline const data_expression& rewr_24_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26072c0);
  }

  static inline data_expression rewr_24_0_term(const application&) { return rewr_24_0(); }

  static inline data_expression rewr_24_0_term_arg_in_normal_form(const application&) { return rewr_24_0(); }


  // [350] RobotThree: Robot
  static inline const data_expression& rewr_350_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607330);
  }

  static inline data_expression rewr_350_0_term(const application&) { return rewr_350_0(); }

  static inline data_expression rewr_350_0_term_arg_in_normal_form(const application&) { return rewr_350_0(); }


  // [349] RobotTwo: Robot
  static inline const data_expression& rewr_349_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606610);
  }

  static inline data_expression rewr_349_0_term(const application&) { return rewr_349_0(); }

  static inline data_expression rewr_349_0_term_arg_in_normal_form(const application&) { return rewr_349_0(); }


  // [11] RobotOne: Robot
  static inline const data_expression& rewr_11_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606680);
  }

  static inline data_expression rewr_11_0_term(const application&) { return rewr_11_0(); }

  static inline data_expression rewr_11_0_term_arg_in_normal_form(const application&) { return rewr_11_0(); }


  // [37] RecipeThree: Recipe
  static inline const data_expression& rewr_37_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c26066f0);
  }

  static inline data_expression rewr_37_0_term(const application&) { return rewr_37_0(); }

  static inline data_expression rewr_37_0_term_arg_in_normal_form(const application&) { return rewr_37_0(); }


  // [36] RecipeTwo: Recipe
  static inline const data_expression& rewr_36_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2606760);
  }

  static inline data_expression rewr_36_0_term(const application&) { return rewr_36_0(); }

  static inline data_expression rewr_36_0_term_arg_in_normal_form(const application&) { return rewr_36_0(); }


  // [35] RecipeOne: Recipe
  static inline const data_expression& rewr_35_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607700);
  }

  static inline data_expression rewr_35_0_term(const application&) { return rewr_35_0(); }

  static inline data_expression rewr_35_0_term_arg_in_normal_form(const application&) { return rewr_35_0(); }


  // [312] ChuckEmptyTwo: Position
  static inline const data_expression& rewr_312_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fc000);
  }

  static inline data_expression rewr_312_0_term(const application&) { return rewr_312_0(); }

  static inline data_expression rewr_312_0_term_arg_in_normal_form(const application&) { return rewr_312_0(); }


  // [311] ChuckEmptyOne: Position
  static inline const data_expression& rewr_311_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fc070);
  }

  static inline data_expression rewr_311_0_term(const application&) { return rewr_311_0(); }

  static inline data_expression rewr_311_0_term_arg_in_normal_form(const application&) { return rewr_311_0(); }


  // [310] ChuckProj: Position
  static inline const data_expression& rewr_310_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fc0e0);
  }

  static inline data_expression rewr_310_0_term(const application&) { return rewr_310_0(); }

  static inline data_expression rewr_310_0_term_arg_in_normal_form(const application&) { return rewr_310_0(); }


  // [309] ChuckMeas: Position
  static inline const data_expression& rewr_309_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25fc150);
  }

  static inline data_expression rewr_309_0_term(const application&) { return rewr_309_0(); }

  static inline data_expression rewr_309_0_term_arg_in_normal_form(const application&) { return rewr_309_0(); }


  // [14] ChuckOut: Position
  static inline const data_expression& rewr_14_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607730);
  }

  static inline data_expression rewr_14_0_term(const application&) { return rewr_14_0(); }

  static inline data_expression rewr_14_0_term_arg_in_normal_form(const application&) { return rewr_14_0(); }


  // [16] ChuckIn: Position
  static inline const data_expression& rewr_16_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607970);
  }

  static inline data_expression rewr_16_0_term(const application&) { return rewr_16_0(); }

  static inline data_expression rewr_16_0_term_arg_in_normal_form(const application&) { return rewr_16_0(); }


  // [15] Tray: Position
  static inline const data_expression& rewr_15_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25f79b0);
  }

  static inline data_expression rewr_15_0_term(const application&) { return rewr_15_0(); }

  static inline data_expression rewr_15_0_term_arg_in_normal_form(const application&) { return rewr_15_0(); }


  // [32] false: Bool
  static inline const data_expression& rewr_32_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25feb00);
  }

  static inline data_expression rewr_32_0_term(const application&) { return rewr_32_0(); }

  static inline data_expression rewr_32_0_term_arg_in_normal_form(const application&) { return rewr_32_0(); }


  // [4] true: Bool
  static inline const data_expression& rewr_4_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2600380);
  }

  static inline data_expression rewr_4_0_term(const application&) { return rewr_4_0(); }

  static inline data_expression rewr_4_0_term_arg_in_normal_form(const application&) { return rewr_4_0(); }


  // [181] @cNeg: Pos -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_181_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c6000), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_181_1_term(const application& t) { return rewr_181_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_181_1_term_arg_in_normal_form(const application& t) { return rewr_181_1(t[0]); }


  // [181] @cNeg: Pos -> Int
  static inline const data_expression& rewr_181_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c261bf00);
  }

  static inline data_expression rewr_181_0_term(const application&) { return rewr_181_0(); }

  static inline data_expression rewr_181_0_term_arg_in_normal_form(const application&) { return rewr_181_0(); }


  // [180] @cInt: Nat -> Int
  template < class DATA_EXPR0>
  static inline data_expression rewr_180_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5590c25c6030), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_180_1_term(const application& t) { return rewr_180_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_180_1_term_arg_in_normal_form(const application& t) { return rewr_180_1(t[0]); }


  // [180] @cInt: Nat -> Int
  static inline const data_expression& rewr_180_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25f7a60);
  }

  static inline data_expression rewr_180_0_term(const application&) { return rewr_180_0(); }

  static inline data_expression rewr_180_0_term_arg_in_normal_form(const application&) { return rewr_180_0(); }


  // [45] @cPair: Nat # Nat -> @NatPair
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_45_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257ca00), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_45_2_term(const application& t) { return rewr_45_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_45_2_term_arg_in_normal_form(const application& t) { return rewr_45_2(t[0], t[1]); }


  // [45] @cPair: Nat # Nat -> @NatPair
  static inline const data_expression& rewr_45_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25f7ad0);
  }

  static inline data_expression rewr_45_0_term(const application&) { return rewr_45_0(); }

  static inline data_expression rewr_45_0_term_arg_in_normal_form(const application&) { return rewr_45_0(); }


  // [29] @cNat: Pos -> Nat
  template < class DATA_EXPR0>
  static inline data_expression rewr_29_1(const DATA_EXPR0& arg_not_nf0)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257a780), local_rewrite(arg_not_nf0));
  }

  static inline data_expression rewr_29_1_term(const application& t) { return rewr_29_1(term_not_in_normal_form(t[0])); }

  static inline data_expression rewr_29_1_term_arg_in_normal_form(const application& t) { return rewr_29_1(t[0]); }


  // [29] @cNat: Pos -> Nat
  static inline const data_expression& rewr_29_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c25f7b00);
  }

  static inline data_expression rewr_29_0_term(const application&) { return rewr_29_0(); }

  static inline data_expression rewr_29_0_term_arg_in_normal_form(const application&) { return rewr_29_0(); }


  // [23] 0: Nat
  static inline const data_expression& rewr_23_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2605ac0);
  }

  static inline data_expression rewr_23_0_term(const application&) { return rewr_23_0(); }

  static inline data_expression rewr_23_0_term_arg_in_normal_form(const application&) { return rewr_23_0(); }


  // [25] @cDub: Bool # Pos -> Pos
  template < class DATA_EXPR0, class DATA_EXPR1>
  static inline data_expression rewr_25_2(const DATA_EXPR0& arg_not_nf0, const DATA_EXPR1& arg_not_nf1)

  {
    return application(data_expression((atermpp::detail::_aterm*)0x5590c257a870), local_rewrite(arg_not_nf0), local_rewrite(arg_not_nf1));
  }

  static inline data_expression rewr_25_2_term(const application& t) { return rewr_25_2(term_not_in_normal_form(t[0]), term_not_in_normal_form(t[1])); }

  static inline data_expression rewr_25_2_term_arg_in_normal_form(const application& t) { return rewr_25_2(t[0], t[1]); }


  // [25] @cDub: Bool # Pos -> Pos
  static inline const data_expression& rewr_25_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c2607760);
  }

  static inline data_expression rewr_25_0_term(const application&) { return rewr_25_0(); }

  static inline data_expression rewr_25_0_term_arg_in_normal_form(const application&) { return rewr_25_0(); }


  // [19] 1: Pos
  static inline const data_expression& rewr_19_0()

  {
    return *reinterpret_cast<const data_expression*>(0x5590c259d860);
  }

  static inline data_expression rewr_19_0_term(const application&) { return rewr_19_0(); }

  static inline data_expression rewr_19_0_term_arg_in_normal_form(const application&) { return rewr_19_0(); }


};
} // namespace
void set_the_precompiled_rewrite_functions_in_a_lookup_table()
{
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 34 + 0] = rewr_functions::rewr_34_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 34 + 0] = rewr_functions::rewr_34_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 34 + 2] = rewr_functions::rewr_34_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 34 + 2] = rewr_functions::rewr_34_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 33 + 0] = rewr_functions::rewr_33_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 33 + 0] = rewr_functions::rewr_33_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 32 + 0] = rewr_functions::rewr_32_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 32 + 0] = rewr_functions::rewr_32_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 31 + 0] = rewr_functions::rewr_31_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 31 + 0] = rewr_functions::rewr_31_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 30 + 0] = rewr_functions::rewr_30_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 30 + 0] = rewr_functions::rewr_30_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 30 + 3] = rewr_functions::rewr_30_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 30 + 3] = rewr_functions::rewr_30_3_term_arg_in_normal_form;
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
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 27 + 1] = rewr_functions::rewr_27_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 27 + 1] = rewr_functions::rewr_27_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 26 + 0] = rewr_functions::rewr_26_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 26 + 0] = rewr_functions::rewr_26_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 26 + 3] = rewr_functions::rewr_26_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 26 + 3] = rewr_functions::rewr_26_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 25 + 0] = rewr_functions::rewr_25_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 25 + 0] = rewr_functions::rewr_25_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 25 + 2] = rewr_functions::rewr_25_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 25 + 2] = rewr_functions::rewr_25_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 24 + 0] = rewr_functions::rewr_24_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 24 + 0] = rewr_functions::rewr_24_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 23 + 0] = rewr_functions::rewr_23_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 23 + 0] = rewr_functions::rewr_23_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 22 + 0] = rewr_functions::rewr_22_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 22 + 0] = rewr_functions::rewr_22_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 22 + 2] = rewr_functions::rewr_22_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 22 + 2] = rewr_functions::rewr_22_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 21 + 0] = rewr_functions::rewr_21_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 21 + 0] = rewr_functions::rewr_21_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 20 + 0] = rewr_functions::rewr_20_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 20 + 0] = rewr_functions::rewr_20_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 20 + 2] = rewr_functions::rewr_20_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 20 + 2] = rewr_functions::rewr_20_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 19 + 0] = rewr_functions::rewr_19_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 19 + 0] = rewr_functions::rewr_19_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 18 + 0] = rewr_functions::rewr_18_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 18 + 0] = rewr_functions::rewr_18_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 18 + 2] = rewr_functions::rewr_18_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 18 + 2] = rewr_functions::rewr_18_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 17 + 0] = rewr_functions::rewr_17_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 17 + 0] = rewr_functions::rewr_17_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 17 + 3] = rewr_functions::rewr_17_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 17 + 3] = rewr_functions::rewr_17_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 16 + 0] = rewr_functions::rewr_16_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 16 + 0] = rewr_functions::rewr_16_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 15 + 0] = rewr_functions::rewr_15_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 15 + 0] = rewr_functions::rewr_15_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 14 + 0] = rewr_functions::rewr_14_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 14 + 0] = rewr_functions::rewr_14_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 13 + 0] = rewr_functions::rewr_13_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 13 + 0] = rewr_functions::rewr_13_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 13 + 3] = rewr_functions::rewr_13_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 13 + 3] = rewr_functions::rewr_13_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 12 + 0] = rewr_functions::rewr_12_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 12 + 0] = rewr_functions::rewr_12_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 12 + 2] = rewr_functions::rewr_12_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 12 + 2] = rewr_functions::rewr_12_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 11 + 0] = rewr_functions::rewr_11_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 11 + 0] = rewr_functions::rewr_11_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 10 + 0] = rewr_functions::rewr_10_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 10 + 0] = rewr_functions::rewr_10_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 10 + 2] = rewr_functions::rewr_10_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 10 + 2] = rewr_functions::rewr_10_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 9 + 0] = rewr_functions::rewr_9_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 9 + 0] = rewr_functions::rewr_9_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 9 + 2] = rewr_functions::rewr_9_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 9 + 2] = rewr_functions::rewr_9_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 8 + 0] = rewr_functions::rewr_8_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 8 + 0] = rewr_functions::rewr_8_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 8 + 1] = rewr_functions::rewr_8_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 8 + 1] = rewr_functions::rewr_8_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 7 + 0] = rewr_functions::rewr_7_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 7 + 0] = rewr_functions::rewr_7_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 6 + 0] = rewr_functions::rewr_6_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 6 + 0] = rewr_functions::rewr_6_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 5 + 0] = rewr_functions::rewr_5_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 5 + 0] = rewr_functions::rewr_5_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 4 + 0] = rewr_functions::rewr_4_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 4 + 0] = rewr_functions::rewr_4_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 3 + 0] = rewr_functions::rewr_3_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 3 + 0] = rewr_functions::rewr_3_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 3 + 4] = rewr_functions::rewr_3_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 3 + 4] = rewr_functions::rewr_3_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 2 + 0] = rewr_functions::rewr_2_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 2 + 0] = rewr_functions::rewr_2_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 2 + 4] = rewr_functions::rewr_2_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 2 + 4] = rewr_functions::rewr_2_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 1 + 0] = rewr_functions::rewr_1_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 1 + 0] = rewr_functions::rewr_1_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 1 + 4] = rewr_functions::rewr_1_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 1 + 4] = rewr_functions::rewr_1_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 0 + 0] = rewr_functions::rewr_0_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 0 + 0] = rewr_functions::rewr_0_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 0 + 4] = rewr_functions::rewr_0_4_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 0 + 4] = rewr_functions::rewr_0_4_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 163 + 0] = rewr_functions::rewr_163_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 163 + 0] = rewr_functions::rewr_163_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 163 + 2] = rewr_functions::rewr_163_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 163 + 2] = rewr_functions::rewr_163_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 156 + 0] = rewr_functions::rewr_156_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 156 + 0] = rewr_functions::rewr_156_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 156 + 3] = rewr_functions::rewr_156_3_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 156 + 3] = rewr_functions::rewr_156_3_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 54 + 0] = rewr_functions::rewr_54_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 54 + 0] = rewr_functions::rewr_54_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 54 + 2] = rewr_functions::rewr_54_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 54 + 2] = rewr_functions::rewr_54_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 53 + 0] = rewr_functions::rewr_53_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 53 + 0] = rewr_functions::rewr_53_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 53 + 1] = rewr_functions::rewr_53_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 53 + 1] = rewr_functions::rewr_53_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 47 + 0] = rewr_functions::rewr_47_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 47 + 0] = rewr_functions::rewr_47_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 47 + 1] = rewr_functions::rewr_47_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 47 + 1] = rewr_functions::rewr_47_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 45 + 0] = rewr_functions::rewr_45_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 45 + 0] = rewr_functions::rewr_45_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 45 + 2] = rewr_functions::rewr_45_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 45 + 2] = rewr_functions::rewr_45_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 42 + 0] = rewr_functions::rewr_42_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 42 + 0] = rewr_functions::rewr_42_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 42 + 2] = rewr_functions::rewr_42_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 42 + 2] = rewr_functions::rewr_42_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 40 + 0] = rewr_functions::rewr_40_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 40 + 0] = rewr_functions::rewr_40_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 40 + 2] = rewr_functions::rewr_40_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 40 + 2] = rewr_functions::rewr_40_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 39 + 0] = rewr_functions::rewr_39_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 39 + 0] = rewr_functions::rewr_39_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 39 + 2] = rewr_functions::rewr_39_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 39 + 2] = rewr_functions::rewr_39_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 38 + 0] = rewr_functions::rewr_38_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 38 + 0] = rewr_functions::rewr_38_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 38 + 2] = rewr_functions::rewr_38_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 38 + 2] = rewr_functions::rewr_38_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 106 + 0] = rewr_functions::rewr_106_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 106 + 0] = rewr_functions::rewr_106_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 106 + 2] = rewr_functions::rewr_106_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 106 + 2] = rewr_functions::rewr_106_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 105 + 0] = rewr_functions::rewr_105_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 105 + 0] = rewr_functions::rewr_105_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 105 + 2] = rewr_functions::rewr_105_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 105 + 2] = rewr_functions::rewr_105_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 104 + 0] = rewr_functions::rewr_104_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 104 + 0] = rewr_functions::rewr_104_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 104 + 2] = rewr_functions::rewr_104_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 104 + 2] = rewr_functions::rewr_104_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 98 + 0] = rewr_functions::rewr_98_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 98 + 0] = rewr_functions::rewr_98_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 98 + 2] = rewr_functions::rewr_98_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 98 + 2] = rewr_functions::rewr_98_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 97 + 0] = rewr_functions::rewr_97_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 97 + 0] = rewr_functions::rewr_97_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 97 + 2] = rewr_functions::rewr_97_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 97 + 2] = rewr_functions::rewr_97_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 91 + 0] = rewr_functions::rewr_91_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 91 + 0] = rewr_functions::rewr_91_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 91 + 2] = rewr_functions::rewr_91_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 91 + 2] = rewr_functions::rewr_91_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 90 + 0] = rewr_functions::rewr_90_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 90 + 0] = rewr_functions::rewr_90_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 90 + 2] = rewr_functions::rewr_90_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 90 + 2] = rewr_functions::rewr_90_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 84 + 0] = rewr_functions::rewr_84_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 84 + 0] = rewr_functions::rewr_84_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 84 + 2] = rewr_functions::rewr_84_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 84 + 2] = rewr_functions::rewr_84_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 83 + 0] = rewr_functions::rewr_83_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 83 + 0] = rewr_functions::rewr_83_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 83 + 2] = rewr_functions::rewr_83_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 83 + 2] = rewr_functions::rewr_83_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 77 + 0] = rewr_functions::rewr_77_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 77 + 0] = rewr_functions::rewr_77_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 77 + 2] = rewr_functions::rewr_77_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 77 + 2] = rewr_functions::rewr_77_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 76 + 0] = rewr_functions::rewr_76_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 76 + 0] = rewr_functions::rewr_76_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 76 + 2] = rewr_functions::rewr_76_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 76 + 2] = rewr_functions::rewr_76_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 75 + 0] = rewr_functions::rewr_75_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 75 + 0] = rewr_functions::rewr_75_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 75 + 2] = rewr_functions::rewr_75_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 75 + 2] = rewr_functions::rewr_75_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 67 + 0] = rewr_functions::rewr_67_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 67 + 0] = rewr_functions::rewr_67_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 67 + 2] = rewr_functions::rewr_67_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 67 + 2] = rewr_functions::rewr_67_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 66 + 0] = rewr_functions::rewr_66_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 66 + 0] = rewr_functions::rewr_66_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 66 + 2] = rewr_functions::rewr_66_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 66 + 2] = rewr_functions::rewr_66_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 65 + 0] = rewr_functions::rewr_65_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 65 + 0] = rewr_functions::rewr_65_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 65 + 2] = rewr_functions::rewr_65_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 65 + 2] = rewr_functions::rewr_65_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 59 + 0] = rewr_functions::rewr_59_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 59 + 0] = rewr_functions::rewr_59_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 59 + 2] = rewr_functions::rewr_59_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 59 + 2] = rewr_functions::rewr_59_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 58 + 0] = rewr_functions::rewr_58_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 58 + 0] = rewr_functions::rewr_58_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 58 + 2] = rewr_functions::rewr_58_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 58 + 2] = rewr_functions::rewr_58_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 175 + 0] = rewr_functions::rewr_175_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 175 + 0] = rewr_functions::rewr_175_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 175 + 2] = rewr_functions::rewr_175_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 175 + 2] = rewr_functions::rewr_175_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 37 + 0] = rewr_functions::rewr_37_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 37 + 0] = rewr_functions::rewr_37_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 36 + 0] = rewr_functions::rewr_36_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 36 + 0] = rewr_functions::rewr_36_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 35 + 0] = rewr_functions::rewr_35_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 35 + 0] = rewr_functions::rewr_35_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 210 + 0] = rewr_functions::rewr_210_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 210 + 0] = rewr_functions::rewr_210_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 210 + 2] = rewr_functions::rewr_210_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 210 + 2] = rewr_functions::rewr_210_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 206 + 0] = rewr_functions::rewr_206_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 206 + 0] = rewr_functions::rewr_206_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 206 + 2] = rewr_functions::rewr_206_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 206 + 2] = rewr_functions::rewr_206_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 193 + 0] = rewr_functions::rewr_193_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 193 + 0] = rewr_functions::rewr_193_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 193 + 1] = rewr_functions::rewr_193_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 193 + 1] = rewr_functions::rewr_193_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 181 + 0] = rewr_functions::rewr_181_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 181 + 0] = rewr_functions::rewr_181_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 181 + 1] = rewr_functions::rewr_181_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 181 + 1] = rewr_functions::rewr_181_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 180 + 0] = rewr_functions::rewr_180_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 180 + 0] = rewr_functions::rewr_180_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 180 + 1] = rewr_functions::rewr_180_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 180 + 1] = rewr_functions::rewr_180_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 178 + 0] = rewr_functions::rewr_178_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 178 + 0] = rewr_functions::rewr_178_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 178 + 2] = rewr_functions::rewr_178_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 178 + 2] = rewr_functions::rewr_178_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 177 + 0] = rewr_functions::rewr_177_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 177 + 0] = rewr_functions::rewr_177_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 177 + 2] = rewr_functions::rewr_177_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 177 + 2] = rewr_functions::rewr_177_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 143 + 0] = rewr_functions::rewr_143_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 143 + 0] = rewr_functions::rewr_143_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 143 + 2] = rewr_functions::rewr_143_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 143 + 2] = rewr_functions::rewr_143_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 137 + 0] = rewr_functions::rewr_137_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 137 + 0] = rewr_functions::rewr_137_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 137 + 2] = rewr_functions::rewr_137_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 137 + 2] = rewr_functions::rewr_137_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 131 + 0] = rewr_functions::rewr_131_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 131 + 0] = rewr_functions::rewr_131_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 131 + 2] = rewr_functions::rewr_131_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 131 + 2] = rewr_functions::rewr_131_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 126 + 0] = rewr_functions::rewr_126_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 126 + 0] = rewr_functions::rewr_126_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 126 + 2] = rewr_functions::rewr_126_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 126 + 2] = rewr_functions::rewr_126_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 120 + 0] = rewr_functions::rewr_120_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 120 + 0] = rewr_functions::rewr_120_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 120 + 2] = rewr_functions::rewr_120_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 120 + 2] = rewr_functions::rewr_120_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 119 + 0] = rewr_functions::rewr_119_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 119 + 0] = rewr_functions::rewr_119_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 119 + 2] = rewr_functions::rewr_119_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 119 + 2] = rewr_functions::rewr_119_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 113 + 0] = rewr_functions::rewr_113_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 113 + 0] = rewr_functions::rewr_113_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 113 + 2] = rewr_functions::rewr_113_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 113 + 2] = rewr_functions::rewr_113_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 112 + 0] = rewr_functions::rewr_112_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 112 + 0] = rewr_functions::rewr_112_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 112 + 2] = rewr_functions::rewr_112_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 112 + 2] = rewr_functions::rewr_112_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 296 + 0] = rewr_functions::rewr_296_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 296 + 0] = rewr_functions::rewr_296_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 296 + 2] = rewr_functions::rewr_296_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 296 + 2] = rewr_functions::rewr_296_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 295 + 0] = rewr_functions::rewr_295_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 295 + 0] = rewr_functions::rewr_295_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 295 + 2] = rewr_functions::rewr_295_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 295 + 2] = rewr_functions::rewr_295_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 289 + 0] = rewr_functions::rewr_289_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 289 + 0] = rewr_functions::rewr_289_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 289 + 2] = rewr_functions::rewr_289_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 289 + 2] = rewr_functions::rewr_289_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 288 + 0] = rewr_functions::rewr_288_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 288 + 0] = rewr_functions::rewr_288_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 288 + 2] = rewr_functions::rewr_288_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 288 + 2] = rewr_functions::rewr_288_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 282 + 0] = rewr_functions::rewr_282_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 282 + 0] = rewr_functions::rewr_282_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 282 + 2] = rewr_functions::rewr_282_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 282 + 2] = rewr_functions::rewr_282_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 281 + 0] = rewr_functions::rewr_281_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 281 + 0] = rewr_functions::rewr_281_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 281 + 2] = rewr_functions::rewr_281_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 281 + 2] = rewr_functions::rewr_281_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 275 + 0] = rewr_functions::rewr_275_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 275 + 0] = rewr_functions::rewr_275_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 275 + 2] = rewr_functions::rewr_275_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 275 + 2] = rewr_functions::rewr_275_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 274 + 0] = rewr_functions::rewr_274_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 274 + 0] = rewr_functions::rewr_274_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 274 + 2] = rewr_functions::rewr_274_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 274 + 2] = rewr_functions::rewr_274_2_term_arg_in_normal_form;
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
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 240 + 0] = rewr_functions::rewr_240_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 240 + 0] = rewr_functions::rewr_240_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 240 + 2] = rewr_functions::rewr_240_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 240 + 2] = rewr_functions::rewr_240_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 239 + 0] = rewr_functions::rewr_239_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 239 + 0] = rewr_functions::rewr_239_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 239 + 2] = rewr_functions::rewr_239_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 239 + 2] = rewr_functions::rewr_239_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 232 + 0] = rewr_functions::rewr_232_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 232 + 0] = rewr_functions::rewr_232_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 232 + 2] = rewr_functions::rewr_232_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 232 + 2] = rewr_functions::rewr_232_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 231 + 0] = rewr_functions::rewr_231_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 231 + 0] = rewr_functions::rewr_231_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 231 + 2] = rewr_functions::rewr_231_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 231 + 2] = rewr_functions::rewr_231_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 225 + 0] = rewr_functions::rewr_225_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 225 + 0] = rewr_functions::rewr_225_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 225 + 2] = rewr_functions::rewr_225_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 225 + 2] = rewr_functions::rewr_225_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 224 + 0] = rewr_functions::rewr_224_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 224 + 0] = rewr_functions::rewr_224_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 224 + 2] = rewr_functions::rewr_224_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 224 + 2] = rewr_functions::rewr_224_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 217 + 0] = rewr_functions::rewr_217_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 217 + 0] = rewr_functions::rewr_217_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 217 + 2] = rewr_functions::rewr_217_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 217 + 2] = rewr_functions::rewr_217_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 216 + 0] = rewr_functions::rewr_216_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 216 + 0] = rewr_functions::rewr_216_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 216 + 2] = rewr_functions::rewr_216_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 216 + 2] = rewr_functions::rewr_216_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 356 + 0] = rewr_functions::rewr_356_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 356 + 0] = rewr_functions::rewr_356_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 356 + 2] = rewr_functions::rewr_356_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 356 + 2] = rewr_functions::rewr_356_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 355 + 0] = rewr_functions::rewr_355_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 355 + 0] = rewr_functions::rewr_355_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 355 + 1] = rewr_functions::rewr_355_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 355 + 1] = rewr_functions::rewr_355_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 350 + 0] = rewr_functions::rewr_350_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 350 + 0] = rewr_functions::rewr_350_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 349 + 0] = rewr_functions::rewr_349_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 349 + 0] = rewr_functions::rewr_349_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 361 + 0] = rewr_functions::rewr_361_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 361 + 0] = rewr_functions::rewr_361_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 361 + 2] = rewr_functions::rewr_361_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 361 + 2] = rewr_functions::rewr_361_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 360 + 0] = rewr_functions::rewr_360_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 360 + 0] = rewr_functions::rewr_360_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 360 + 1] = rewr_functions::rewr_360_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 360 + 1] = rewr_functions::rewr_360_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 336 + 0] = rewr_functions::rewr_336_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 336 + 0] = rewr_functions::rewr_336_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 336 + 2] = rewr_functions::rewr_336_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 336 + 2] = rewr_functions::rewr_336_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 335 + 0] = rewr_functions::rewr_335_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 335 + 0] = rewr_functions::rewr_335_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 335 + 1] = rewr_functions::rewr_335_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 335 + 1] = rewr_functions::rewr_335_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 326 + 0] = rewr_functions::rewr_326_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 326 + 0] = rewr_functions::rewr_326_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 326 + 2] = rewr_functions::rewr_326_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 326 + 2] = rewr_functions::rewr_326_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 325 + 0] = rewr_functions::rewr_325_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 325 + 0] = rewr_functions::rewr_325_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 325 + 1] = rewr_functions::rewr_325_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 325 + 1] = rewr_functions::rewr_325_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 318 + 0] = rewr_functions::rewr_318_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 318 + 0] = rewr_functions::rewr_318_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 318 + 2] = rewr_functions::rewr_318_2_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 318 + 2] = rewr_functions::rewr_318_2_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 317 + 0] = rewr_functions::rewr_317_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 317 + 0] = rewr_functions::rewr_317_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 317 + 1] = rewr_functions::rewr_317_1_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 317 + 1] = rewr_functions::rewr_317_1_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 312 + 0] = rewr_functions::rewr_312_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 312 + 0] = rewr_functions::rewr_312_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 311 + 0] = rewr_functions::rewr_311_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 311 + 0] = rewr_functions::rewr_311_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 310 + 0] = rewr_functions::rewr_310_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 310 + 0] = rewr_functions::rewr_310_0_term_arg_in_normal_form;
  functions_when_arguments_are_not_in_normal_form[ARITY_BOUND * 309 + 0] = rewr_functions::rewr_309_0_term;
  functions_when_arguments_are_in_normal_form[ARITY_BOUND * 309 + 0] = rewr_functions::rewr_309_0_term_arg_in_normal_form;
}
